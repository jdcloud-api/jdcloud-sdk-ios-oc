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

kubernetes 集群
kubernetes 集群服务

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef KubernetesExecutor_h
#define KubernetesExecutor_h
#import <JDCloudOCSDKKubernetes/KubernetesClient.h>

///  集群摘除工作节点组并删除工作节点组
@interface KubernetesDeleteNodeGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询工作节点组列表
@interface KubernetesDescribeNodeGroupsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询可升级的节点版本
@interface KubernetesDescribeUpgradableNodeVersionsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  创建工作节点组&lt;br&gt;
   /// - 要求集群状态为running
   /// 
@interface KubernetesCreateNodeGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  设置集群组件
@interface KubernetesSetAddonsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  修改工作节点组的 名称 和 描述&lt;br&gt;name 和 description 必须要指定一个
@interface KubernetesModifyNodeGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  删除集群，以及集群的所有node节点，网络，云盘等所有资源。
@interface KubernetesDeleteClusterExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  Deprecated 建议使用 setAddons 接口 &lt;br&gt;设置用户自定义监控状态
@interface KubernetesSetUserMetricsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  调整工作节点组实例数量
@interface KubernetesSetNodeGroupSizeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询 kubernetes 集群服务配置信息
@interface KubernetesDescribeServerConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  触发升级
@interface KubernetesUpgradeClusterExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询版本信息
@interface KubernetesDescribeVersionsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  设置工作节点组的自动修复
@interface KubernetesSetAutoRepairExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询 kubernetes 集群配额
@interface KubernetesDescribeQuotasExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询单个工作节点组详情
@interface KubernetesDescribeNodeGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询集群操作进度
@interface KubernetesDescribeProgressExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询节点版本
@interface KubernetesDescribeNodeVersionExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  回滚未升级完的工作节点组
@interface KubernetesRollbackNodeGroupUpgradeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  终止升级
@interface KubernetesAbortUpgradeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询可升级的控制节点版本
@interface KubernetesDescribeUpgradableMasterVersionsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  设置自动升级
@interface KubernetesSetAutoUpgradeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  - 创建集群
   /// - 证书
   ///   - 关于kubernetes的证书，默认生成，不需要用户传入。
   /// - nodegroup
   ///   - cluster必须与nodeGroup进行绑定
   ///   - cluster支持多nodegroup
   ///   - 状态
   ///     - pending,reconciling,deleting状态不可以操作更新接口
   ///     - running，running_with_error状态可以操作nodegroup所有接口
   ///     - error状态只可以查询，删除
   ///     - delete状态的cluster在十五分钟内可以查询，十五分钟后无法查询到
   /// - 状态限制
   ///   - pending,reconciling,deleting状态不可以操作更新接口
   ///   - running状态可以操作cluster所有接口
   ///   - error状态只可以查询，删除
   ///   - delete状态的cluster在十五分钟内可以查询，十五分钟后无法查询到
   /// 
@interface KubernetesCreateClusterExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询单个集群详情。
@interface KubernetesDescribeClusterExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  修改集群的 名称 和 描述。&lt;br&gt;集群 name 和 description 必须要指定一个
@interface KubernetesModifyClusterExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
///  查询集群列表
@interface KubernetesDescribeClustersExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(KubernetesClient*)JDCloudClient;
@end
#endif /* KubernetesExecutor_h */
