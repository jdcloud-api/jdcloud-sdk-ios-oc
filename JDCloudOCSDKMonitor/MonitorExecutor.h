/* Copyright 2018 JDCLOUD.COM

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http:#www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

JCLOUD MONITOR API
monitor API

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef MonitorExecutor_h
#define MonitorExecutor_h
#import <JDCloudOCSDKMonitor/MonitorClient.h>

///  查看某资源单个监控项数据，metric介绍：&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/monitoring/metrics&quot;&gt;Metrics&lt;/a&gt;，可以使用接口&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/monitoring/metrics&quot;&gt;describeMetrics&lt;/a&gt;：查询产品线可用的metric列表。
@interface MonitorDescribeMetricDataExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  创建报警规则
@interface MonitorCreateAlarmExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  查询监控图可用的产品线列表
@interface MonitorDescribeServicesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  查询可用于创建监控规则的指标列表,metric介绍：&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/monitoring/metrics&quot;&gt;Metrics&lt;/a&gt;
@interface MonitorDescribeMetricsForAlarmExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  查询规则的报警联系人
@interface MonitorDescribeAlarmContactsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  查询报警历史
@interface MonitorDescribeAlarmHistoryExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  查询规则详情
@interface MonitorDescribeAlarmExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  根据不同的聚合方式将metric的数据聚合为一个点。downAggrType：last(最后一个点)、max(最大值)、min(最小值)、avg(平均值)。该接口返回值为上报metric的原始值，没有做单位转换。metric介绍：&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/monitoring/metrics&quot;&gt;Metrics&lt;/a&gt;
@interface MonitorLastDownsampleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  删除规则
@interface MonitorDeleteAlarmsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  查询可用于创建监控规则的产品列表
@interface MonitorDescribeProductsForAlarmExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  修改已创建的报警规则
@interface MonitorUpdateAlarmExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  启用、禁用规则
@interface MonitorEnableAlarmsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  该接口为自定义监控数据上报的接口，方便您将自己采集的时序数据上报到云监控。不同region域名上报不同region的数据，参考：&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/monitoring/reporting-monitoring-data&quot;&gt;调用说明&lt;/a&gt;可上报原始数据和已聚合的统计数据。支持批量上报方式。单次请求最多包含 50 个数据点；数据大小不超过 256k。
@interface MonitorPutMetricDataExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  根据产品线查询可用监控项列表,metric介绍：&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/monitoring/metrics&quot;&gt;Metrics&lt;/a&gt;
@interface MonitorDescribeMetricsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
///  查询规则列表
@interface MonitorDescribeAlarmsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(MonitorClient*)JDCloudClient;
@end
#endif /* MonitorExecutor_h */
