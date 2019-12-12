
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

京东云DDoS防护包相关接口
京东云DDoS防护包相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKAntipro/AntiproExecutor.h>


/// 创建防护包实例, 当前支持区域: 华北-北京, 华东-宿迁, 华东-上海
@implementation  AntiproCreateInstanceExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/instances";
    return self;
}
@end

/// 查询 DDoS 防护包可防护的托管区公网 IP
@implementation  AntiproDescribeCcsIpResourcesExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/ccsIpResources";
    return self;
}
@end

/// 删除防护包防护 IP
@implementation  AntiproDeleteProtectedIpExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/instances/{instanceId}:deleteProtectedIp";
    return self;
}
@end

/// 查询防护包实例
@implementation  AntiproDescribeInstanceExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/instances/{instanceId}";
    return self;
}
@end

/// 添加防护包防护 IP.
   /// - 防护包仅能防护防护包实例所在区域的公网 IP, 且该公网 IP 未被其他防护包防护, 如果已经被其他防护包防护, 请先调用删除防护包防护 IP 接口删除防护 IP
   /// - 防护包可添加的防护 IP 个数小于等于防护包的可防护 IP 数量减去已防护的 IP 数量
   /// - 使用 &lt;a href&#x3D;&quot;http://docs.jdcloud.com/anti-ddos-protection-package/api/describeelasticipresources&quot;&gt;describeElasticIpResources&lt;/a&gt; 接口查询防护包可防护的弹性公网 IP
   /// - 使用 &lt;a href&#x3D;&quot;http://docs.jdcloud.com/anti-ddos-protection-package/api/describecpsipresources&quot;&gt;describeCpsIpResources&lt;/a&gt; 接口查询防护包可防护的云物理服务器公网 IP
   /// 
@implementation  AntiproAddProtectedIpExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/instances/{instanceId}:addProtectedIp";
    return self;
}
@end

/// 查询公网 IP 的监控流量
@implementation  AntiproDescribeIpMonitorFlowExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/describeIpMonitorFlow";
    return self;
}
@end

/// 查询 DDoS 防护包可防护的云物理服务器公网 IP(包括云物理服务器弹性公网 IP 及云物理服务器基础网络实例的公网 IP)
@implementation  AntiproDescribeCpsIpResourcesExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/cpsIpResources";
    return self;
}
@end

/// 查询防护规则 Geo 拦截可设置区域
@implementation  AntiproDescribeGeoAreasExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/describeGeoAreas";
    return self;
}
@end

/// 攻击记录统计, 参数 ip 优先级大于 instanceId
   ///   - 指定 ip 参数时, 忽略 instanceId 参数, 统计 ip 的攻击情况
   ///   - 未指定 ip 时, 统计 instanceId 指定实例相关攻击情况
   ///   - ip 和 instanceId 均未指定时, 查询用户所有公网 IP 攻击情况
   /// 
@implementation  AntiproDescribeAttackStatisticsExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/describeAttackStatistics";
    return self;
}
@end

/// 查询攻击来源
@implementation  AntiproDescribeAttackSourceExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/attacklog/{attackLogId}:describeAttackSource";
    return self;
}
@end

/// 升级防护包实例
@implementation  AntiproModifyInstanceExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/regions/{regionId}/instances/{instanceId}";
    return self;
}
@end

/// 防护包防护信息概要
@implementation  AntiproDescribeProtectionOutlineExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/describeProtectionOutline";
    return self;
}
@end

/// 获取防护包实例或 IP 的防护规则
@implementation  AntiproDescribeProtectionRuleExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/instances/{instanceId}:describeProtectionRule";
    return self;
}
@end

/// 修改防护包实例名称
@implementation  AntiproModifyInstanceNameExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/regions/{regionId}/instances/{instanceId}:modifyInstanceName";
    return self;
}
@end

/// 查询已防护 IP 列表
@implementation  AntiproDescribeProtectedIpListExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/describeProtectedIpList";
    return self;
}
@end

/// 查询防护包实例列表
@implementation  AntiproDescribeInstancesExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/instances";
    return self;
}
@end

/// 查询攻击记录, 参数 ip 优先级大于 instanceId
   ///   - 指定 ip 参数时, 忽略 instanceId 参数, 查询 ip 相关攻击记录
   ///   - 未指定 ip 时, 查询 instanceId 指定实例相关攻击记录
   ///   - ip 和 instanceId 均未指定时, 查询用户所有公网 IP 攻击记录
   /// 
@implementation  AntiproDescribeAttackLogsExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/attacklog";
    return self;
}
@end

/// 检测实例名称是否可用, 防护包实例名称不可重复
@implementation  AntiproCheckInstanceNameExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/checkInstanceName";
    return self;
}
@end

/// 查询各类型攻击次数, 参数 ip 优先级大于 instanceId
   ///   - 指定 ip 参数时, 忽略 instanceId 参数, 查询 ip 相关攻击记录的各类型攻击次数
   ///   - 未指定 ip 时, 查询 instanceId 指定实例相关攻击记录的各类型攻击次数
   ///   - ip 和 instanceId 均未指定时, 查询用户所有公网 IP 攻击记录的各类型攻击次数
   /// 
@implementation  AntiproDescribeAttackTypeCountExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/describeAttackTypeCount";
    return self;
}
@end

/// 修改防护包实例或 IP 的防护规则
@implementation  AntiproModifyProtectionRuleExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/instances/{instanceId}:modifyProtectionRule";
    return self;
}
@end

/// 查询 DDoS 防护包可防护的私有网络弹性公网 IP(不包括运营商级 NAT 保留地址和 IPv6)
@implementation  AntiproDescribeElasticIpResourcesExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/elasticIpResources";
    return self;
}
@end

/// 查询操作日志
@implementation  AntiproDescribeOperationRecordsExecutor

-(id) initWithJDCloudClient:(AntiproClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/operationRecords";
    return self;
}
@end
