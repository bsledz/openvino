// Copyright (C) 2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include "lpt_ngraph_functions/multiply_function.hpp"

#include <ngraph/opsets/opset1.hpp>
#include <ngraph_ops/type_relaxed.hpp>
#include "ngraph_functions/subgraph_builders.hpp"
#include "low_precision/common/dequantization_op.hpp"
#include "low_precision/network_helper.hpp"

#include "lpt_ngraph_functions/common/builders.hpp"
#include "lpt_ngraph_functions/common/dequantization_operations.hpp"

using namespace ngraph::pass::low_precision;

namespace ngraph {
namespace builder {
namespace subgraph {

struct BranchNodes {
    std::shared_ptr<Node> input;
    std::shared_ptr<Node> dequantization;
};

BranchNodes getBranch(const MultiplyBranch& branch) {
    if (!branch.constant.empty()) {
        if (branch.inputShape != branch.constant.shape) {
            std::ostringstream message;
            message << "shapes are not equals: " << branch.inputShape << " & " << branch.constant.shape;
            throw std::runtime_error(message.str());
        }

        if (branch.precisionBeforeDequantization != branch.constant.outPrecision) {
            std::ostringstream message;
            message << "precisions are not equals: " << branch.precisionBeforeDequantization << " & " << branch.constant.outPrecision;
            throw std::runtime_error(message.str());
        }
    }

    const std::shared_ptr<Node> parent = branch.constant.empty() ?
        std::make_shared<ngraph::opset1::Parameter>(branch.precisionBeforeDequantization, branch.inputShape) :
        std::dynamic_pointer_cast<Node>(std::make_shared<ngraph::opset1::Constant>(
            branch.constant.outPrecision,
            branch.constant.shape,
            branch.constant.values));

    const auto dequantization = makeDequantization(parent, branch.dequantization);
    return {parent, dequantization};
}

std::shared_ptr<ngraph::Function> MultiplyFunction::get(
    const ngraph::Shape& inputShape,
    const MultiplyValues& actualValues) {
    const BranchNodes branchNodes1 = getBranch(actualValues.branch1);
    const BranchNodes branchNodes2 = getBranch(actualValues.branch2);

    auto multiplyOriginal = actualValues.isDequantization ?
        DequantizationMultiply(
            ngraph::op::TemporaryReplaceOutputType(branchNodes1.dequantization, element::f32).get(),
            ngraph::op::TemporaryReplaceOutputType(branchNodes2.dequantization, element::f32).get()) :
        ngraph::opset1::Multiply(
            ngraph::op::TemporaryReplaceOutputType(branchNodes1.dequantization, element::f32).get(),
            ngraph::op::TemporaryReplaceOutputType(branchNodes2.dequantization, element::f32).get());

    const std::shared_ptr<ngraph::Node> multiply = std::make_shared<ngraph::op::TypeRelaxed<ngraph::opset1::Multiply>>(
        multiplyOriginal,
        std::vector<element::Type>{element::f32, element::f32},
        std::vector<element::Type>{});
    auto& rtInfo = multiply->get_rt_info();
    rtInfo["Variant::std::string"] = std::make_shared<VariantWrapper<std::string>>("multiply");
    multiply->set_friendly_name("output");

    ngraph::ResultVector results{ std::make_shared<ngraph::opset1::Result>(multiply) };

    ngraph::ParameterVector inputs;
    if (is_type<opset1::Parameter>(branchNodes1.input)) {
        inputs.push_back(std::dynamic_pointer_cast<opset1::Parameter>(branchNodes1.input));
    }
    if (is_type<opset1::Parameter>(branchNodes2.input)) {
        inputs.push_back(std::dynamic_pointer_cast<opset1::Parameter>(branchNodes2.input));
    }

    return std::make_shared<ngraph::Function>(results, inputs, "MultiplyTransformation");
}

}  // namespace subgraph
}  // namespace builder
}  // namespace ngraph
