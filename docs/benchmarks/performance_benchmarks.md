# Get a Deep Learning Model Performance Boost with Intel® Platforms {#openvino_docs_performance_benchmarks}

## Increase Performance for Deep Learning Inference

The [Intel® Distribution of OpenVINO™ toolkit](https://software.intel.com/en-us/openvino-toolkit) helps accelerate deep learning inference across a variety of Intel® processors and accelerators. Rather than a one-size-fits-all solution, Intel offers a powerful portfolio of scalable hardware and software solutions, powered by the Intel® Distribution of OpenVINO™ toolkit, to meet the various performance, power, and price requirements of any use case. The benchmarks below demonstrate high performance gains on several public neural networks for a streamlined, quick deployment on **Intel® CPU and VPU** platforms. Use this data to help you decide which hardware is best for your applications and solutions, or to plan your AI workload on the Intel computing already included in your solutions.

Measuring inference performance involves many variables and is extremely use-case and application dependent. We use the below four parameters for measurements, which are key elements to consider for a successful deep learning inference application:

1. **Throughput** - Measures the number of inferences delivered within a latency threshold. (for example, number of Frames Per Second - FPS). When deploying a system with deep learning inference, select the throughput that delivers the best trade-off between latency and power for the price and performance that meets your requirements.
2. **Value** - While throughput is important, what is more critical in edge AI deployments is the performance efficiency or performance-per-cost. Application performance in throughput per dollar of system cost is the best measure of value.
3. **Efficiency** - System power is a key consideration from the edge to the data center. When selecting deep learning solutions, power efficiency (throughput/watt) is a critical factor to consider. Intel designs provide excellent power efficiency for running deep learning workloads.
4. **Latency** - This measures the synchronous execution of inference requests and is reported in milliseconds. Each inference request (for example: preprocess, infer, postprocess) is allowed to complete before the next is started. This performance metric is relevant in usage scenarios where a single image input needs to be acted upon as soon as possible. An example would be the healthcare sector where medical personnel only request analysis of a single ultra sound scanning image or in real-time or near real-time applications for example an industrial robot's response to actions in its environment or obstacle avoidance for autonomous vehicles.   

\htmlonly
<!-- these CDN links and scripts are required.  Add them to the <head> of your website -->
<link href="https://fonts.googleapis.com/css2?family=Roboto:wght@100;300;400;500;600;700;900&display=swap" rel="stylesheet" type="text/css">
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css" type="text/css">
<script src="https://cdn.jsdelivr.net/npm/chart.js@2.9.3/dist/Chart.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/chartjs-plugin-datalabels"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/chartjs-plugin-annotation/0.5.7/chartjs-plugin-annotation.min.js"></script> 
<script src="https://cdn.jsdelivr.net/npm/chartjs-plugin-barchart-background@1.3.0/build/Plugin.Barchart.Background.min.js"></script>
<!-- download this file and place on your server (or include the styles inline) -->
<link rel="stylesheet" href="ovgraphs.css" type="text/css">
\endhtmlonly


\htmlonly
<script src="bert-large-uncased-whole-word-masking-squad-int8-0001-ov-2021-1-096.js" id="bert-large-uncased-whole-word-masking-squad-int8-0001-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="deeplabv3-tf-ov-2021-1-096.js" id="deeplabv3-tf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="densenet-121-tf-ov-2021-1-096.js" id="densenet-121-tf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="faster-rcnn-resnet50-coco-tf-ov-2021-1-096.js" id="faster-rcnn-resnet50-coco-tf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="googlenet-v1-tf-ov-2021-1-096.js" id="googlenet-v1-tf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="inception-v3-tf-ov-2021-1-096.js" id="inception-v3-tf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="mobilenet-ssd-cf-ov-2021-1-096.js" id="mobilenet-ssd-cf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="mobilenet-v1-1-0-224-tf-ov-2021-1-096.js" id="mobilenet-v1-1-0-224-tf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="mobilenet-v2-pytorch-ov-2021-1-096.js" id="mobilenet-v2-pytorch-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="resnet-18-pytorch-ov-2021-1-096.js" id="resnet-18-pytorch-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="resnet-50-tf-ov-2021-1-096.js" id="resnet-50-tf-ov-2021-1-096"></script>
\endhtmlonly


\htmlonly
<script src="se-resnext-50-cf-ov-2021-1-096.js" id="se-resnext-50-cf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="squeezenet1-1-cf-ov-2021-1-096.js" id="squeezenet1-1-cf-ov-2021-1-096"></script>
\endhtmlonly


\htmlonly
<script src="ssd300-cf-ov-2021-1-096.js" id="ssd300-cf-ov-2021-1-096"></script>
\endhtmlonly

\htmlonly
<script src="yolo-v3-tf-ov-2021-1-096.js" id="yolo-v3-tf-ov-2021-1-096"></script>
\endhtmlonly


## Platform Configurations

Intel® Distribution of OpenVINO™ toolkit performance benchmark numbers are based on release 2021.1. 

Intel technologies’ features and benefits depend on system configuration and may require enabled hardware, software or service activation. Learn more at intel.com, or from the OEM or retailer. Performance results are based on testing as of September 25, 2020 and may not reflect all publicly available security updates. See configuration disclosure for details. No product can be absolutely secure. 

Software and workloads used in performance tests may have been optimized for performance only on Intel microprocessors. Performance tests, such as SYSmark and MobileMark, are measured using specific computer systems, components, software, operations and functions. Any change to any of those factors may cause the results to vary. You should consult other information and performance tests to assist you in fully evaluating your contemplated purchases, including the performance of that product when combined with other products. For more complete information, see [Performance Benchmark Test Disclosure](https://www.intel.com/content/www/us/en/benchmarks/benchmark.html).

Your costs and results may vary. 

© Intel Corporation. Intel, the Intel logo, and other Intel marks are trademarks of Intel Corporation or its subsidiaries. Other names and brands may be claimed as the property of others.

Optimization Notice: Intel’s compilers may or may not optimize to the same degree for non-Intel microprocessors for optimizations that are not unique to Intel microprocessors. These optimizations include SSE2, SSE3, and SSSE3 instruction sets and other optimizations. Intel does not guarantee the availability, functionality, or effectiveness of any optimization on microprocessors not manufactured by Intel. Microprocessor-dependent optimizations in this product are intended for use with Intel microprocessors. Certain optimizations not specific to Intel microarchitecture are reserved for Intel microprocessors. Please refer to the applicable product User and Reference Guides for more information regarding the specific instruction sets covered by this notice. [Notice Revision #2010804](https://software.intel.com/articles/optimization-notice).

Testing by Intel done on: see test date for each HW platform below.

**CPU Inference Engines**

|                                 | Intel® Xeon® E-2124G  | Intel® Xeon® Silver 4216R    | Intel® Xeon® Gold 5218T      | Intel® Xeon® Platinum 8270   | 
| ------------------------------- | ----------------------| ---------------------------- | ---------------------------- | ---------------------------- |
| Motherboard                     | ASUS* WS C246 PRO     | Intel® Server Board S2600STB | Intel® Server Board S2600STB | Intel® Server Board S2600STB |
| CPU                             | Intel® Xeon® E-2124G CPU @ 3.40GHz | Intel® Xeon® Silver 4216R CPU @ 2.20GHz | Intel® Xeon® Gold 5218T CPU @ 2.10GHz | Intel® Xeon® Platinum 8270 CPU @ 2.70GHz |
| Hyper Threading                 | OFF                   | ON                           | ON                           | ON                           |
| Turbo Setting                   | ON                    | ON                           | ON                           | ON                           |
| Memory                          | 2 x 16 GB DDR4 2666MHz| 12 x 32 GB DDR4 2666MHz      | 12 x 32 GB DDR4 2666MHz      | 12 x 32 GB DDR4 2933MHz      |
| Operating System                | Ubuntu* 18.04 LTS     | Ubuntu* 18.04 LTS            | Ubuntu* 18.04 LTS            | Ubuntu* 18.04 LTS            |
| Kernel Version                  | 5.3.0-24-generic      | 5.3.0-24-generic             | 5.3.0-24-generic             | 5.3.0-24-generic             |
| BIOS Vendor                     | American Megatrends Inc.* | Intel Corporation        | Intel Corporation            | Intel Corporation            |
| BIOS Version                    | 0904                  | SE5C620.86B.02.01.<br>0009.092820190230 | SE5C620.86B.02.01.<br>0009.092820190230 | SE5C620.86B.02.01.<br>0009.092820190230    |
| BIOS Release                    | April 12, 2019        | September 28, 2019           | September 28, 2019           | September 28, 2019           |
| BIOS Settings        | Select optimized default settings, <br>save & exit | Select optimized default settings, <br>change power policy <br>to "performance", <br>save & exit | Select optimized default settings, <br>change power policy to "performance", <br>save & exit | Select optimized default settings, <br>change power policy to "performance", <br>save & exit |
| Batch size                      | 1                     | 1                            | 1                            | 1                            |
| Precision                       | INT8                  | INT8                         | INT8                         | INT8                         |
| Number of concurrent inference requests | 4             | 32                           | 32                           | 52                           |
| Test Date                       |  September 25, 2020        |  September 25, 2020               |  September 25, 2020               |  September 25, 2020               |
| Power dissipation, TDP in Watt  | [71](https://ark.intel.com/content/www/us/en/ark/products/134854/intel-xeon-e-2124g-processor-8m-cache-up-to-4-50-ghz.html#tab-blade-1-0-1)                    | [125](https://ark.intel.com/content/www/us/en/ark/products/193394/intel-xeon-silver-4216-processor-22m-cache-2-10-ghz.html#tab-blade-1-0-1)                          | [105](https://ark.intel.com/content/www/us/en/ark/products/193953/intel-xeon-gold-5218t-processor-22m-cache-2-10-ghz.html#tab-blade-1-0-1)             | [205](https://ark.intel.com/content/www/us/en/ark/products/192482/intel-xeon-platinum-8270-processor-35-75m-cache-2-70-ghz.html#tab-blade-1-0-1)                          |
| CPU Price on September 29, 2020, USD<br>Prices may vary  | [213](https://ark.intel.com/content/www/us/en/ark/products/134854/intel-xeon-e-2124g-processor-8m-cache-up-to-4-50-ghz.html)     | [1,002](https://ark.intel.com/content/www/us/en/ark/products/193394/intel-xeon-silver-4216-processor-22m-cache-2-10-ghz.html)                 | [1,349](https://ark.intel.com/content/www/us/en/ark/products/193953/intel-xeon-gold-5218t-processor-22m-cache-2-10-ghz.html)                        | [7,405](https://ark.intel.com/content/www/us/en/ark/products/192482/intel-xeon-platinum-8270-processor-35-75m-cache-2-70-ghz.html)                        |

**CPU Inference Engines (continue)**

|                      | Intel® Core™ i5-8500               | Intel® Core™ i7-8700T               | Intel® Core™ i9-10920X               | 11th Gen Intel® Core™ i5-1145G7E  |
| -------------------- | ---------------------------------- | ----------------------------------- |--------------------------------------|-----------------------------------|
| Motherboard          | ASUS* PRIME Z370-A                 | GIGABYTE* Z370M DS3H-CF             | ASUS* PRIME X299-A II                | Intel Corporation<br>internal/Reference Validation Platform |
| CPU                  | Intel® Core™ i5-8500 CPU @ 3.00GHz | Intel® Core™ i7-8700T CPU @ 2.40GHz | Intel® Core™ i9-10920X CPU @ 3.50GHz | 11th Gen Intel® Core™ i5-1145G7E @ 2.60GHz   |
| Hyper Threading      | OFF                                | ON                                  | ON                                   | ON                                           |
| Turbo Setting        | ON                                 | ON                                  | ON                                   | ON                                           |
| Memory               | 2 x 16 GB DDR4 2666MHz             | 4 x 16 GB DDR4 2400MHz              | 4 x 16 GB DDR4 2666MHz               | 2 x 8 GB DDR4 3200MHz                        |
| Operating System     | Ubuntu* 18.04 LTS                  | Ubuntu* 18.04 LTS                   | Ubuntu* 18.04 LTS                    | Ubuntu* 18.04 LTS                            |
| Kernel Version       | 5.3.0-24-generic                   | 5.0.0-23-generic                    | 5.0.0-23-generic                     | 5.8.0-05-generic                             |
| BIOS Vendor          | American Megatrends Inc.*          | American Megatrends Inc.*           | American Megatrends Inc.*            | Intel Corporation                            |
| BIOS Version         | 2401                               | F11                                 | 505                                  | TGLIFUI1.R00.3243.A04.2006302148             |
| BIOS Release         | July 12, 2019                      | March 13, 2019                      | December 17, 2019                    | June 30, 2020                                |
| BIOS Settings        | Select optimized default settings, <br>save & exit | Select optimized default settings, <br>set OS type to "other", <br>save & exit | Default Settings | Default Settings |
| Batch size           | 1                                  | 1                                   | 1                                    | 1                                            |
| Precision            | INT8                               | INT8                                | INT8                                 | INT8                                         |
| Number of concurrent inference requests | 3               | 4                                   | 24                                   | 4                                            |
| Test Date            | September 25, 2020                 | September 25, 2020                  | September 25, 2020                   | September 25, 2020                           |
| Power dissipation, TDP in Watt | [65](https://ark.intel.com/content/www/us/en/ark/products/129939/intel-core-i5-8500-processor-9m-cache-up-to-4-10-ghz.html#tab-blade-1-0-1)                                 | [35](https://ark.intel.com/content/www/us/en/ark/products/129948/intel-core-i7-8700t-processor-12m-cache-up-to-4-00-ghz.html#tab-blade-1-0-1) | [165](https://ark.intel.com/content/www/us/en/ark/products/198012/intel-core-i9-10920x-x-series-processor-19-25m-cache-3-50-ghz.html) | [28](https://ark.intel.com/content/www/us/en/ark/products/208081/intel-core-i5-1145g7e-processor-8m-cache-up-to-4-10-ghz.html) |
| CPU Price on September 29, 2020, USD<br>Prices may vary  | [192](https://ark.intel.com/content/www/us/en/ark/products/129939/intel-core-i5-8500-processor-9m-cache-up-to-4-10-ghz.html)                               | [303](https://ark.intel.com/content/www/us/en/ark/products/129948/intel-core-i7-8700t-processor-12m-cache-up-to-4-00-ghz.html)                                 | [700](https://ark.intel.com/content/www/us/en/ark/products/198012/intel-core-i9-10920x-x-series-processor-19-25m-cache-3-50-ghz.html) | [309](https://mysamples.intel.com/SAM_U_Product/ProductDetail.aspx?InputMMID=99A3D1&RequestID=0&ProductID=1213750) |

**CPU Inference Engines (continue)**

|                      | Intel Atom® x5-E3940                  | Intel® Core™ i3-8100               | 
| -------------------- | ----------------------------------    |----------------------------------- |
| Motherboard          |                                       | GIGABYTE* Z390 UD                  |
| CPU                  | Intel Atom® Processor E3940 @ 1.60GHz | Intel® Core™ i3-8100 CPU @ 3.60GHz |
| Hyper Threading      | OFF                                   | OFF                                |
| Turbo Setting        | ON                                    | OFF                                |
| Memory               | 1 x 8 GB DDR3 1600MHz                 | 4 x 8 GB DDR4 2400MHz              |
| Operating System     | Ubuntu* 18.04 LTS                     | Ubuntu* 18.04 LTS                  |
| Kernel Version       | 5.3.0-24-generic                      | 5.3.0-24-generic                   |
| BIOS Vendor          | American Megatrends Inc.*             | American Megatrends Inc.*          |
| BIOS Version         | 5.12                                  | F8                                 |
| BIOS Release         | September 6, 2017                     | May 24, 2019                       |
| BIOS Settings        | Default settings                      | Select optimized default settings, <br> set OS type to "other", <br>save & exit |
| Batch size           | 1                                     | 1                                  |
| Precision            | INT8                                  | INT8                               |
| Number of concurrent inference requests | 4                  | 4                                  |
| Test Date            | September 25, 2020                         | September 25, 2020                      |
| Power dissipation, TDP in Watt | [9.5](https://ark.intel.com/content/www/us/en/ark/products/96485/intel-atom-x5-e3940-processor-2m-cache-up-to-1-80-ghz.html)                                                              | [65](https://ark.intel.com/content/www/us/en/ark/products/126688/intel-core-i3-8100-processor-6m-cache-3-60-ghz.html#tab-blade-1-0-1)|
| CPU Price on September 29, 2020, USD<br>Prices may vary  | [34](https://ark.intel.com/content/www/us/en/ark/products/96485/intel-atom-x5-e3940-processor-2m-cache-up-to-1-80-ghz.html)                                                        | [117](https://ark.intel.com/content/www/us/en/ark/products/126688/intel-core-i3-8100-processor-6m-cache-3-60-ghz.html)       |



**Accelerator Inference Engines**

|                                         | Intel® Neural Compute Stick 2         | Intel® Vision Accelerator Design<br>with Intel® Movidius™ VPUs (Uzel* UI-AR8) | 
| --------------------------------------- | ------------------------------------- | ------------------------------------- |
| VPU                                     | 1 X Intel® Movidius™ Myriad™ X MA2485 | 8 X Intel® Movidius™ Myriad™ X MA2485 |
| Connection                              | USB 2.0/3.0                           | PCIe X4                               |
| Batch size                              | 1                                     | 1                                     |
| Precision                               | FP16                                  | FP16                                  |
| Number of concurrent inference requests | 4                                     | 32                                    |
| Power dissipation, TDP in Watt          | 2.5                                   | [30](https://www.mouser.com/ProductDetail/IEI/MUSTANG-V100-MX8-R10?qs=u16ybLDytRaZtiUUvsd36w%3D%3D)          |
| CPU Price, USD<br>Prices may vary | [69](https://ark.intel.com/content/www/us/en/ark/products/140109/intel-neural-compute-stick-2.html) (from September 29, 2020) | [768](https://www.mouser.com/ProductDetail/IEI/MUSTANG-V100-MX8-R10?qs=u16ybLDytRaZtiUUvsd36w%3D%3D) (from May 15, 2020)                           |
| Host Computer                           | Intel® Core™ i7                       | Intel® Core™ i5                       |
| Motherboard                             | ASUS* Z370-A II                       | Uzelinfo* / US-E1300                  |
| CPU                                     | Intel® Core™ i7-8700 CPU @ 3.20GHz    | Intel® Core™ i5-6600 CPU @ 3.30GHz    |
| Hyper Threading                         | ON                                    | OFF                                   |
| Turbo Setting                           | ON                                    | ON                                    |
| Memory                                  | 4 x 16 GB DDR4 2666MHz                | 2 x 16 GB DDR4 2400MHz                |
| Operating System                        | Ubuntu* 18.04 LTS                     | Ubuntu* 18.04 LTS                     |
| Kernel Version                          | 5.0.0-23-generic                      | 5.0.0-23-generic                      |
| BIOS Vendor                             | American Megatrends Inc.*             | American Megatrends Inc.*             |
| BIOS Version                            | 411                                   | 5.12                                  |
| BIOS Release                            | September 21, 2018                    | September 21, 2018                    |
| Test Date                               | September 25, 2020                    | September 25, 2020                    |        

Please follow this link for more detailed configuration descriptions: [Configuration Details](https://docs.openvinotoolkit.org/resources/benchmark_files/system_configurations_2021.1.html)

\htmlonly
<style>
    .footer {
        display: none;
    }
</style>
<div class="opt-notice-wrapper">
<p class="opt-notice">
\endhtmlonly
For more complete information about performance and benchmark results, visit: [www.intel.com/benchmarks](https://www.intel.com/benchmarks) and [Optimization Notice](https://software.intel.com/articles/optimization-notice). [Legal Information](../Legal_Information.md).
\htmlonly
</p>
</div>
\endhtmlonly
