
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

pod
pod 服务

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKPod/PodExecutor.h>


/// 查询资源的配额，支持：原生容器 pod 和 secret.
   /// 
@implementation  PodDescribeQuotaExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/quotas";
    return self;
}
@end

/// 获取 pod 中某个容器的详情
@implementation  PodDescribeContainerExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/pods/{podId}/containers/{containerName}";
    return self;
}
@end

/// 查询 secret 列表。&lt;br&gt; 
   /// 此接口支持分页查询，默认每页20条。
   /// 
@implementation  PodDescribeSecretsExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/secrets";
    return self;
}
@end

/// 创建一个 secret，用于存放镜像仓库机密相关信息。
   /// 
@implementation  PodCreateSecretExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/secrets";
    return self;
}
@end

/// 查询单个 secret 详情
   /// 
@implementation  PodDescribeSecretExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/secrets/{name}";
    return self;
}
@end

/// pod 解绑公网 IP，解绑的是主网卡、主内网 IP 对应的弹性 IP.
   /// 
@implementation  PodDisassociateElasticIpExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods/{podId}:disassociateElasticIp";
    return self;
}
@end

/// 设置TTY大小
@implementation  PodResizeTTYExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods/{podId}/containers/{containerName}:resizeTTY";
    return self;
}
@end

/// 将容器连接到本地标准输入输出
   /// 
@implementation  PodAttachExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/pods/{podId}/containers/{containerName}:attach";
    return self;
}
@end

/// 执行exec，此接口需要升级Http协议到WebSocket
@implementation  PodExecStartExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/pods/{podId}/containers/{containerName}:execStart";
    return self;
}
@end

/// 启动处于关闭状态的单个 pod ，处在任务执行中的 pod 无法启动。&lt;br&gt;
   /// pod 实例或其绑定的云盘已欠费时，容器将无法正常启动。&lt;br&gt;
   /// 
@implementation  PodStartPodExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods/{podId}:startPod";
    return self;
}
@end

/// 批量查询 pod 的详细信息&lt;br&gt;
   /// 此接口支持分页查询，默认每页20条。
   /// 
@implementation  PodDescribePodsExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/pods";
    return self;
}
@end

/// 获取exec退出码
@implementation  PodExecGetExitCodeExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/pods/{podId}/containers/{containerName}:execGetExitCode";
    return self;
}
@end

/// 创建一台或多台 pod
   /// - 创建pod需要通过实名认证
   /// - hostname规范
   ///     - 支持两种方式：以标签方式书写或以完整主机名方式书写
   ///     - 标签规范
   ///         - 0-9，a-z(不分大小写)和-（减号），其他的都是无效的字符串
   ///         - 不能以减号开始，也不能以减号结尾
   ///         - 最小1个字符，最大63个字符
   ///     - 完整的主机名由一系列标签与点连接组成
   ///         - 标签与标签之间使用“.”(点)进行连接
   ///         - 不能以“.”(点)开始，也不能以“.”(点)结尾
   ///         - 整个主机名（包括标签以及分隔点“.”）最多有63个ASCII字符
   ///     - 正则：^([a-zA-Z0-9]|[a-zA-Z0-9][a-zA-Z0-9-]{0,61}[a-zA-Z0-9])(\.([a-zA-Z0-9]|[a-zA-Z0-9][a-zA-Z0-9-]{0,61}[a-zA-Z0-9]))*$
   /// - 网络配置
   ///     - 指定主网卡配置信息
   ///         - 必须指定subnetId
   ///         - 可以指定elasticIp规格来约束创建的弹性IP，带宽取值范围[1-100]Mbps，步进1Mbps
   ///         - 可以指定网卡的主IP(primaryIpAddress)和辅助IP(secondaryIpAddresses)，此时maxCount只能为1
   ///         - 可以设置网卡的自动删除autoDelete属性，指明是否删除实例时自动删除网卡
   ///         - 安全组securityGroup需与子网Subnet在同一个私有网络VPC内
   ///         - 一个 pod 创建时至多指定5个安全组
   ///         - 主网卡deviceIndex设置为1
   /// - 存储
   ///     - volume分为container system disk和pod data volume，container system disk的挂载目录是/，data volume的挂载目录可以随意指定
   ///     - container system disk
   ///         - 只能是cloud类别
   ///         - 云硬盘类型可以选择hdd.std1、ssd.gp1、ssd.io1
   ///         - 磁盘大小
   ///             - 所有类型：范围[20,100]GB，步长为10G
   ///         - 自动删除
   ///             - 默认自动删除
   ///         - 可以选择已存在的云硬盘
   ///     - data volume
   ///         - 当前只能选择cloud类别
   ///         - 云硬盘类型可以选择hdd.std1、ssd.gp1、ssd.io1
   ///         - 磁盘大小
   ///             - 所有类型：范围[20,4000]GB，步长为10G
   ///         - 自动删除
   ///             - 默认自动删除
   ///         - 可以选择已存在的云硬盘
   ///         - 可以从快照创建磁盘
   /// - pod 容器日志
   ///     - default：默认在本地分配10MB的存储空间，自动rotate
   /// - DNS-1123 label规范
   ///     - 长度范围: [1-63]
   ///     - 正则表达式: ^[a-z0-9]([-a-z0-9]{0,61}[a-z0-9])?$
   ///     - 例子: my-name, 123-abc
   /// - DNS-1123 subdomain规范
   ///     - 长度范围: [1-253]
   ///     - 正则表达式: ^[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*$
   ///     - 例子: example.com, registry.docker-cn.com
   /// - 其他
   ///     - 创建完成后，pod 状态为running
   ///     - maxCount为最大努力，不保证一定能达到maxCount
   /// 
@implementation  PodCreatePodsExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods";
    return self;
}
@end

/// podName 是否符合命名规范，以及查询指定 podName 区域内是否已经存在。
   /// 
@implementation  PodCheckPodNameExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods:checkPodName";
    return self;
}
@end

/// 查询单个容器日志
   /// 
@implementation  PodGetContainerLogsExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/pods/{podId}/containers/{containerName}:getContainerLogs";
    return self;
}
@end

/// 查询实例规格信息列表
   /// 
@implementation  PodDescribeInstanceTypesExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/instanceTypes";
    return self;
}
@end

/// 修改 pod 的描述。
   /// 
@implementation  PodModifyPodAttributeExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/regions/{regionId}/pods/{podId}:modifyPodAttribute";
    return self;
}
@end

/// pod 状态必须为 stopped、running 或 error状态。 &lt;br&gt;
   /// 按量付费的实例，如不主动删除将一直运行，不再使用的实例，可通过本接口主动停用。&lt;br&gt;
   /// 只能支持主动删除按量计费类型的实例。包年包月过期的 pod 也可以删除，其它的情况还请发工单系统。计费状态异常的容器无法删除。
   ///  [MFA enabled]
@implementation  PodDeletePodExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/regions/{regionId}/pods/{podId}";
    return self;
}
@end

/// 对 pod 中的容器使用新的镜像进行重置，pod 需要处于关闭状态。
   /// 
@implementation  PodRebuildPodExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods/{podId}:rebuild";
    return self;
}
@end

/// pod 绑定弹性公网 IP，绑定的是主网卡、主内网IP对应的弹性IP. &lt;br&gt;
   /// 一个 pod 只能绑定一个弹性公网 IP(主网卡)，若主网卡已存在弹性公网IP，会返回错误。&lt;br&gt;
   /// 如果是黑名单中的用户，会返回错误。
   /// 
@implementation  PodAssociateElasticIpExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods/{podId}:associateElasticIp";
    return self;
}
@end

/// 调整pod实例类型配置。
   /// - pod phase 需是停止状态；
   /// - 支持升配、降配；**不支持原有规格**
   /// - 计费类型不变
   ///     - 包年包月：需要计算配置差价，如果所选配置价格高，需要补齐到期前的差价，到期时间不变；如果所选配置价格低，需要延长到期时间
   ///     - 按配置：按照所选规格，进行计费
   /// - 支持对 pod 中的容器进行资源限制、资源需求的调整
   ///     - 容器需求的总资源占用不得超过 pod 的实例类型
   ///     - 容器资源限制不得超过 pod 的实例类型
   /// 
@implementation  PodResizePodExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods/{podId}:resize";
    return self;
}
@end

/// 创建 exec
   /// 
@implementation  PodExecCreateExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods/{podId}/containers/{containerName}:execCreate";
    return self;
}
@end

/// 停止处于运行状态的单个实例，处于任务执行中的 pod 无法启动。
   /// 
@implementation  PodStopPodExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/pods/{podId}:stopPod";
    return self;
}
@end

/// 查询一个 pod 的详细信息
   /// 
@implementation  PodDescribePodExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/pods/{podId}";
    return self;
}
@end

/// 删除单个 secret
   /// 
@implementation  PodDeleteSecretExecutor

-(id) initWithJDCloudClient:(PodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/regions/{regionId}/secrets/{name}";
    return self;
}
@end
