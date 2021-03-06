
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

JCLOUD LOGS API
logs API

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKLogs/LogsExecutor.h>


/// 查询日志主题基本信息。如配置了采集配置，将返回采集配置的UID
@implementation  LogsDescribeLogtopicExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/logtopics/{logtopicUID}";
    return self;
}
@end

/// 返回特定有效期的证书
@implementation  LogsDescribeLogdCAExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/instances/{instanceId}/ca";
    return self;
}
@end

/// 查询采集配置的实例列表
@implementation  LogsDescribeCollectResourcesExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/collectinfos/{collectInfoUID}/resources";
    return self;
}
@end

/// 更新日志主题。日志主题名称不可更新。
@implementation  LogsUpdateLogtopicExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/regions/{regionId}/logtopics/{logtopicUID}";
    return self;
}
@end

/// 查询日志集列表。支持按照名称进行模糊查询。结果中包含了该日志集是否存在日志主题的信息。存在日志主题的日志集不允许删除。
@implementation  LogsDescribeLogsetsExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/logsets";
    return self;
}
@end

/// 查询监控任务列表，返回该主题下的所有监控任务信息。
@implementation  LogsDescribeMetricTasksExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUID}/metrictasks";
    return self;
}
@end

/// 查询指定监控任务的详情信息
@implementation  LogsDescribeMetricTaskExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUID}/metrictasks/{logmetrictaskUID}";
    return self;
}
@end

/// 自定义日志上报。
@implementation  LogsPutExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/logtopics/{logtopicUID}:put";
    return self;
}
@end

/// 搜索日志上下文
@implementation  LogsSearchLogContextExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUID}/logcontext";
    return self;
}
@end

/// 删除日志集,删除多个日志集时，任意的日志集包含了日志主题的，将导致全部删除失败。
@implementation  LogsDeleteLogsetExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/regions/{regionId}/logsets/{logsetUIDs}";
    return self;
}
@end

/// 搜索日志
@implementation  LogsSearchExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUID}/search";
    return self;
}
@end

/// 日志测试，根据用户输入的日志筛选条件以及监控指标设置进行模拟监控统计
@implementation  LogsTestMetricTaskExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUID}/metrictaskTest";
    return self;
}
@end

/// 查询日志集详情。
@implementation  LogsDescribeLogsetExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}";
    return self;
}
@end

/// 查询当前实例的采集配置列表：此接口会生成agent心跳监控数据，用以表征agent的可用性。请求中若添加了X-Jdcloud-Logs-md5的header，将按照md5的方式处理返回值。
@implementation  LogsDescribeInstanceCollectConfsExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/instances/{instanceId}/collectconfs";
    return self;
}
@end

/// 删除日志主题。其采集配置与采集实例配置将一并删除。
@implementation  LogsDeleteLogtopicExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUIDs}";
    return self;
}
@end

/// 创建监控任务，不可与当前日志主题下现有日志监控任务重名。
@implementation  LogsCreateMetricTaskExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUID}/metrictasks";
    return self;
}
@end

/// 更新采集配置。若传入的实例列表不为空，将覆盖之前的所有实例，而非新增。
@implementation  LogsUpdateCollectInfoExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/regions/{regionId}/collectinfos/{collectInfoUID}";
    return self;
}
@end

/// 创建日志集。名称不可重复。
@implementation  LogsCreateLogsetExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/logsets";
    return self;
}
@end

/// 更新日志集。日志集名称不可更新。
@implementation  LogsUpdateLogsetExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}";
    return self;
}
@end

/// 采集配置的基本信息。
@implementation  LogsDescribeCollectInfoExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/collectinfos/{collectInfoUID}";
    return self;
}
@end

/// 查询日志主题列表，支持按照名称模糊查询。
@implementation  LogsDescribeLogtopicsExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics";
    return self;
}
@end

/// 创建采集配置，支持基于云产品模板生成采集模板；支持用于自定义采集配置。
@implementation  LogsCreateCollectInfoExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/logtopics/{logtopicUID}/collectinfos";
    return self;
}
@end

/// 更新监控任务，日志监控任务不许重名。
@implementation  LogsUpdateMetricTaskExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUID}/metrictasks/{logmetrictaskUID}";
    return self;
}
@end

/// 删除指定监控任务。
@implementation  LogsDeleteMetricTaskExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics/{logtopicUID}/metrictasks/{logmetrictaskUID}";
    return self;
}
@end

/// 增量更新采集实例列表。更新的动作支持 add 、 remove
@implementation  LogsUpdateCollectResourcesExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/collectinfos/{collectInfoUID}:updateResources";
    return self;
}
@end

/// 创建日志主题，不可与当前日志集下现有日志主题重名。
@implementation  LogsCreateLogtopicExecutor

-(id) initWithJDCloudClient:(LogsClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/logsets/{logsetUID}/logtopics";
    return self;
}
@end
