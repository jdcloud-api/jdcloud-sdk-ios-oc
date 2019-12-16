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

Cluster
集群相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef KubernetesApiModel_h
#define KubernetesApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKCommon/JDCloudOCSDKCommon.h>
#import <JDCloudOCSDKKubernetes/KubernetesModel.h>


@interface KubernetesDescribeVersionsRequest:JDCloudRequest

/// 集群的大版本，如 1.12.4-jcs.1
@property (strong,nonatomic,nonnull)  NSString*  masterVersion;
-(id) initWithRegion:(NSString *)regionId
masterVersion:(NSString*)masterVersion;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
masterVersion:(NSString*)masterVersion;

@end

@interface KubernetesDescribeUpgradableMasterVersionsRequest:JDCloudRequest

/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clusterId:(NSString*)clusterId;

@end

@interface KubernetesDescribeNodeVersionRequest:JDCloudRequest

/// 节点版本
@property (strong,nonatomic,nonnull)  NSString*  nodeVersion;
-(id) initWithRegion:(NSString *)regionId
nodeVersion:(NSString*)nodeVersion;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
nodeVersion:(NSString*)nodeVersion;

@end

@interface KubernetesDescribeUpgradableNodeVersionsRequest:JDCloudRequest

/// 节点组 id
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  nodeGroupIds;
/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
nodeGroupIds:(NSArray<NSString*>*)nodeGroupIds
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
nodeGroupIds:(NSArray<NSString*>*)nodeGroupIds
clusterId:(NSString*)clusterId;

@end

@interface KubernetesDescribeNodeGroupRequest:JDCloudRequest

/// 工作节点组 ID
@property (strong,nonatomic,nonnull)  NSString*  nodeGroupId;
-(id) initWithRegion:(NSString *)regionId
nodeGroupId:(NSString*)nodeGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
nodeGroupId:(NSString*)nodeGroupId;

@end

@interface KubernetesModifyNodeGroupRequest:JDCloudRequest

/// 工作节点组名称
@property (strong,nonatomic,nonnull)  NSString*  name;
/// 工作节点组描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 工作节点组 ID
@property (strong,nonatomic,nonnull)  NSString*  nodeGroupId;
-(id) initWithRegion:(NSString *)regionId
name:(NSString*)name
descriptionValue:(NSString*)descriptionValue
nodeGroupId:(NSString*)nodeGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
name:(NSString*)name
descriptionValue:(NSString*)descriptionValue
nodeGroupId:(NSString*)nodeGroupId;

@end

@interface KubernetesSetNodeGroupSizeRequest:JDCloudRequest

/// 预期目标节点数量
@property (strong,nonatomic,nonnull)  NSNumber*  expectCount;
/// 工作节点组 ID
@property (strong,nonatomic,nonnull)  NSString*  nodeGroupId;
-(id) initWithRegion:(NSString *)regionId
expectCount:(NSNumber*)expectCount
nodeGroupId:(NSString*)nodeGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
expectCount:(NSNumber*)expectCount
nodeGroupId:(NSString*)nodeGroupId;

@end

@interface KubernetesCreateNodeGroupResult : NSObject
/// NodeGroupId
 @property (strong,nonatomic,nonnull)  NSString*  nodeGroupId;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithNodeGroupId:(NSString*) nodeGroupId;
@end

@interface KubernetesSetAutoRepairRequest:JDCloudRequest

/// 是否开启自动修复
@property (strong,nonatomic,nonnull)  NSNumber*  enabled;
/// 工作节点组 ID
@property (strong,nonatomic,nonnull)  NSString*  nodeGroupId;
-(id) initWithRegion:(NSString *)regionId
enabled:(NSNumber*)enabled
nodeGroupId:(NSString*)nodeGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
enabled:(NSNumber*)enabled
nodeGroupId:(NSString*)nodeGroupId;

@end

@interface KubernetesRollbackNodeGroupUpgradeRequest:JDCloudRequest

/// 工作节点组 ID
@property (strong,nonatomic,nonnull)  NSString*  nodeGroupId;
-(id) initWithRegion:(NSString *)regionId
nodeGroupId:(NSString*)nodeGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
nodeGroupId:(NSString*)nodeGroupId;

@end

@interface KubernetesDeleteNodeGroupRequest:JDCloudRequest

/// 工作节点组 ID
@property (strong,nonatomic,nonnull)  NSString*  nodeGroupId;
-(id) initWithRegion:(NSString *)regionId
nodeGroupId:(NSString*)nodeGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
nodeGroupId:(NSString*)nodeGroupId;

@end

@interface KubernetesDescribeClusterRequest:JDCloudRequest

/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clusterId:(NSString*)clusterId;

@end

@interface KubernetesModifyClusterRequest:JDCloudRequest

/// 集群名称
@property (strong,nonatomic,nonnull)  NSString*  name;
/// 集群描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
name:(NSString*)name
descriptionValue:(NSString*)descriptionValue
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
name:(NSString*)name
descriptionValue:(NSString*)descriptionValue
clusterId:(NSString*)clusterId;

@end

@interface KubernetesSetUserMetricsRequest:JDCloudRequest

/// 是否开启自定义监控
@property (strong,nonatomic,nonnull)  NSNumber*  enabled;
/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
enabled:(NSNumber*)enabled
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
enabled:(NSNumber*)enabled
clusterId:(NSString*)clusterId;

@end

@interface KubernetesDescribeProgressRequest:JDCloudRequest

/// 节点组 ID
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  nodeGroupIds;
/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
nodeGroupIds:(NSArray<NSString*>*)nodeGroupIds
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
nodeGroupIds:(NSArray<NSString*>*)nodeGroupIds
clusterId:(NSString*)clusterId;

@end

@interface KubernetesCreateClusterResult : NSObject
/// ClusterId
 @property (strong,nonatomic,nonnull)  NSString*  clusterId;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithClusterId:(NSString*) clusterId;
@end

@interface KubernetesUpgradeClusterRequest:JDCloudRequest

/// 升级范围
@property (strong,nonatomic,nonnull)  NSString*  scope;
/// 节点组 id
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  nodeGroupIds;
/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
scope:(NSString*)scope
nodeGroupIds:(NSArray<NSString*>*)nodeGroupIds
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
scope:(NSString*)scope
nodeGroupIds:(NSArray<NSString*>*)nodeGroupIds
clusterId:(NSString*)clusterId;

@end

@interface KubernetesDeleteClusterRequest:JDCloudRequest

/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clusterId:(NSString*)clusterId;

@end

@interface KubernetesAbortUpgradeRequest:JDCloudRequest

/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clusterId:(NSString*)clusterId;

@end

@interface KubernetesDescribeVersionsResult : NSObject
/// MasterVersions
 @property (strong,nonatomic,nonnull)  NSArray<MasterVersion*>*  masterVersions;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMasterVersions:(NSArray<MasterVersion*>*) masterVersions;
@end

@interface KubernetesDescribeNodeVersionResult : NSObject
/// NodeVersion
 @property (strong,nonatomic,nonnull)  NodeVersion*  nodeVersion;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithNodeVersion:(NodeVersion*) nodeVersion;
@end

@interface KubernetesDescribeVersionsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeVersionsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeVersionsResult*) result;
@end

@interface KubernetesDescribeUpgradableMasterVersionsResult : NSObject
/// MasterVersions
 @property (strong,nonatomic,nonnull)  NSArray<MasterVersion*>*  masterVersions;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMasterVersions:(NSArray<MasterVersion*>*) masterVersions;
@end

@interface KubernetesDescribeServerConfigRequest:JDCloudRequest

@end

@interface KubernetesDescribeServerConfigResult : NSObject
/// ServerConfig
 @property (strong,nonatomic,nonnull)  ServerConfig*  serverConfig;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithServerConfig:(ServerConfig*) serverConfig;
@end

@interface KubernetesDescribeUpgradableNodeVersionsResult : NSObject
/// NdoeVersions
 @property (strong,nonatomic,nonnull)  NSArray<NodeVersion*>*  ndoeVersions;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithNdoeVersions:(NSArray<NodeVersion*>*) ndoeVersions;
@end

@interface KubernetesDescribeUpgradableMasterVersionsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeUpgradableMasterVersionsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeUpgradableMasterVersionsResult*) result;
@end

@interface KubernetesDescribeServerConfigResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeServerConfigResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeServerConfigResult*) result;
@end

@interface KubernetesDescribeNodeVersionResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeNodeVersionResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeNodeVersionResult*) result;
@end

@interface KubernetesDescribeUpgradableNodeVersionsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeUpgradableNodeVersionsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeUpgradableNodeVersionsResult*) result;
@end

@interface KubernetesDescribeNodeGroupsRequest:JDCloudRequest

/// 页码；默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为20；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// Tag筛选条件
@property (strong,nonatomic,nonnull)  NSArray<KubernetesTagFilter*>*  tags;
/// name - 节点组名称，模糊匹配，支持单个
   /// id - 节点组 id，支持多个
   /// clusterId - 根据 clusterId 查询
   /// clusterName - 根据 cluster 名称查询
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
tags:(NSArray<KubernetesTagFilter*>*)tags
filters:(NSArray<Filter*>*)filters;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
tags:(NSArray<KubernetesTagFilter*>*)tags
filters:(NSArray<Filter*>*)filters;

@end

@interface KubernetesSetAutoRepairResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesSetAutoRepairResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesSetAutoRepairResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesSetAutoRepairResult*) result;
@end

@interface KubernetesSetNodeGroupSizeResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesDeleteNodeGroupResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesDeleteNodeGroupResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDeleteNodeGroupResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDeleteNodeGroupResult*) result;
@end

@interface KubernetesCreateNodeGroupResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesCreateNodeGroupResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesCreateNodeGroupResult*) result;
@end

@interface KubernetesDescribeNodeGroupsResult : NSObject
/// NodeGroups
 @property (strong,nonatomic,nonnull)  NSArray<NodeGroup*>*  nodeGroups;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithNodeGroups:(NSArray<NodeGroup*>*) nodeGroups

    totalCount:(NSNumber*)totalCount;
@end

@interface KubernetesDescribeNodeGroupsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeNodeGroupsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeNodeGroupsResult*) result;
@end

@interface KubernetesDescribeNodeGroupResult : NSObject
/// NodeGroup
 @property (strong,nonatomic,nonnull)  NodeGroup*  nodeGroup;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithNodeGroup:(NodeGroup*) nodeGroup;
@end

@interface KubernetesRollbackNodeGroupUpgradeResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesDescribeNodeGroupResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeNodeGroupResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeNodeGroupResult*) result;
@end

@interface KubernetesRollbackNodeGroupUpgradeResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesRollbackNodeGroupUpgradeResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesRollbackNodeGroupUpgradeResult*) result;
@end

@interface KubernetesCreateNodeGroupRequest:JDCloudRequest

/// 名称（同一用户的 cluster 内部唯一）
@property (strong,nonatomic,nonnull)  NSString*  name;
/// 描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 工作节点所属的集群
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
/// 工作节点配置信息
@property (strong,nonatomic,nonnull)  NodeConfigSpec*  nodeConfig;
/// 工作节点组的 az，必须为集群az的子集，默认为集群az
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  azs;
/// 工作节点组初始化大小
@property (strong,nonatomic,nonnull)  NSNumber*  initialNodeCount;
/// 工作节点组初始化大小运行的VPC
@property (strong,nonatomic,nonnull)  NSString*  vpcId;
/// 工作节点组的cidr
@property (strong,nonatomic,nonnull)  NSString*  nodeCidr;
/// 是否开启工作节点组的自动修复，默认关闭
@property (strong,nonatomic,nonnull)  NSNumber*  autoRepair;
-(id) initWithRegion:(NSString *)regionId
name:(NSString*)name
descriptionValue:(NSString*)descriptionValue
clusterId:(NSString*)clusterId
nodeConfig:(NodeConfigSpec*)nodeConfig
azs:(NSArray<NSString*>*)azs
initialNodeCount:(NSNumber*)initialNodeCount
vpcId:(NSString*)vpcId
nodeCidr:(NSString*)nodeCidr
autoRepair:(NSNumber*)autoRepair;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
name:(NSString*)name
descriptionValue:(NSString*)descriptionValue
clusterId:(NSString*)clusterId
nodeConfig:(NodeConfigSpec*)nodeConfig
azs:(NSArray<NSString*>*)azs
initialNodeCount:(NSNumber*)initialNodeCount
vpcId:(NSString*)vpcId
nodeCidr:(NSString*)nodeCidr
autoRepair:(NSNumber*)autoRepair;

@end

@interface KubernetesModifyNodeGroupResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesModifyNodeGroupResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesModifyNodeGroupResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesModifyNodeGroupResult*) result;
@end

@interface KubernetesSetNodeGroupSizeResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesSetNodeGroupSizeResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesSetNodeGroupSizeResult*) result;
@end

@interface KubernetesDescribeQuotasResult : NSObject
/// Quotas
 @property (strong,nonatomic,nonnull)  NSArray<KubernetesQuota*>*  quotas;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithQuotas:(NSArray<KubernetesQuota*>*) quotas;
@end

@interface KubernetesDescribeQuotasResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeQuotasResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeQuotasResult*) result;
@end

@interface KubernetesDescribeQuotasRequest:JDCloudRequest

/// resourceTypes - 资源类型，暂时只支持[kubernetes]
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
-(id) initWithRegion:(NSString *)regionId
filters:(NSArray<Filter*>*)filters;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
filters:(NSArray<Filter*>*)filters;

@end

@interface KubernetesDescribeProgressResult : NSObject
/// MasterProgress
 @property (strong,nonatomic,nonnull)  MasterProgress*  masterProgress;
/// NodeGroupProgresses
 @property (strong,nonatomic,nonnull)  NSArray<NodeGroupProgress*>*  nodeGroupProgresses;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMasterProgress:(MasterProgress*) masterProgress

    nodeGroupProgresses:(NSArray<NodeGroupProgress*>*)nodeGroupProgresses;
@end

@interface KubernetesDescribeProgressResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeProgressResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeProgressResult*) result;
@end

@interface KubernetesDeleteClusterResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesDeleteClusterResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDeleteClusterResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDeleteClusterResult*) result;
@end

@interface KubernetesSetAddonsResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesDescribeClustersResult : NSObject
/// Clusters
 @property (strong,nonatomic,nonnull)  NSArray<Cluster*>*  clusters;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithClusters:(NSArray<Cluster*>*) clusters

    totalCount:(NSNumber*)totalCount;
@end

@interface KubernetesSetAddonsRequest:JDCloudRequest

/// 需要设置的集群组件配置
@property (strong,nonatomic,nonnull)  NSArray<AddonConfigSpec*>*  addonsConfig;
/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
addonsConfig:(NSArray<AddonConfigSpec*>*)addonsConfig
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
addonsConfig:(NSArray<AddonConfigSpec*>*)addonsConfig
clusterId:(NSString*)clusterId;

@end

@interface KubernetesAbortUpgradeResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesAbortUpgradeResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesAbortUpgradeResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesAbortUpgradeResult*) result;
@end

@interface KubernetesModifyClusterResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesSetUserMetricsResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesCreateClusterResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesCreateClusterResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesCreateClusterResult*) result;
@end

@interface KubernetesDescribeClustersResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeClustersResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeClustersResult*) result;
@end

@interface KubernetesDescribeClusterResult : NSObject
/// Cluster
 @property (strong,nonatomic,nonnull)  Cluster*  cluster;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithCluster:(Cluster*) cluster;
@end

@interface KubernetesDescribeClusterResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesDescribeClusterResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesDescribeClusterResult*) result;
@end

@interface KubernetesSetAutoUpgradeResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesSetAutoUpgradeResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesSetAutoUpgradeResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesSetAutoUpgradeResult*) result;
@end

@interface KubernetesSetAutoUpgradeRequest:JDCloudRequest

/// 开启或者关闭集群自动升级，开启时必须指定 maintenancePolicy
@property (strong,nonatomic,nonnull)  NSNumber*  autoUpgrade;
/// 开启集群自动升级, 必须配置集群维护策略
@property (strong,nonatomic,nonnull)  MaintenanceWindowSpec*  maintenanceWindow;
/// 集群 ID
@property (strong,nonatomic,nonnull)  NSString*  clusterId;
-(id) initWithRegion:(NSString *)regionId
autoUpgrade:(NSNumber*)autoUpgrade
maintenanceWindow:(MaintenanceWindowSpec*)maintenanceWindow
clusterId:(NSString*)clusterId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
autoUpgrade:(NSNumber*)autoUpgrade
maintenanceWindow:(MaintenanceWindowSpec*)maintenanceWindow
clusterId:(NSString*)clusterId;

@end

@interface KubernetesUpgradeClusterResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface KubernetesUpgradeClusterResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesUpgradeClusterResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesUpgradeClusterResult*) result;
@end

@interface KubernetesModifyClusterResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesModifyClusterResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesModifyClusterResult*) result;
@end

@interface KubernetesDescribeClustersRequest:JDCloudRequest

/// 页码；默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为20；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// name - 集群名称，模糊匹配，仅支持单个   
   /// id - id，支持多个   
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
filters:(NSArray<Filter*>*)filters;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
filters:(NSArray<Filter*>*)filters;

@end

@interface KubernetesSetAddonsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesSetAddonsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesSetAddonsResult*) result;
@end

@interface KubernetesSetUserMetricsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property KubernetesSetUserMetricsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(KubernetesSetUserMetricsResult*) result;
@end

@interface KubernetesCreateClusterRequest:JDCloudRequest

/// 名称（同一用户的 cluster 允许重名）
@property (strong,nonatomic,nonnull)  NSString*  name;
/// 描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 默认开启 basicAuth与clientCertificate最少选择一个
@property (strong,nonatomic,nonnull)  NSNumber*  basicAuth;
/// 默认开启 clientCertificate
@property (strong,nonatomic,nonnull)  NSNumber*  clientCertificate;
/// 集群所在的az
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  azs;
/// 集群节点组
@property (strong,nonatomic,nonnull)  NodeGroupSpec*  nodeGroup;
/// k8s的master的cidr
@property (strong,nonatomic,nonnull)  NSString*  masterCidr;
/// 用户的AccessKey，插件调用open-api时的认证凭证
@property (strong,nonatomic,nonnull)  NSString*  accessKey;
/// 用户的SecretKey，插件调用open-api时的认证凭证
@property (strong,nonatomic,nonnull)  NSString*  secretKey;
/// deprecated 在addonsConfig中同时指定，将被addonsConfig的设置覆盖 &lt;br&gt;是否启用用户自定义监控
@property (strong,nonatomic,nonnull)  NSNumber*  userMetrics;
/// 集群组件配置
@property (strong,nonatomic,nonnull)  NSArray<AddonConfigSpec*>*  addonsConfig;
-(id) initWithRegion:(NSString *)regionId
name:(NSString*)name
descriptionValue:(NSString*)descriptionValue
basicAuth:(NSNumber*)basicAuth
clientCertificate:(NSNumber*)clientCertificate
azs:(NSArray<NSString*>*)azs
nodeGroup:(NodeGroupSpec*)nodeGroup
masterCidr:(NSString*)masterCidr
accessKey:(NSString*)accessKey
secretKey:(NSString*)secretKey
userMetrics:(NSNumber*)userMetrics
addonsConfig:(NSArray<AddonConfigSpec*>*)addonsConfig;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
name:(NSString*)name
descriptionValue:(NSString*)descriptionValue
basicAuth:(NSNumber*)basicAuth
clientCertificate:(NSNumber*)clientCertificate
azs:(NSArray<NSString*>*)azs
nodeGroup:(NodeGroupSpec*)nodeGroup
masterCidr:(NSString*)masterCidr
accessKey:(NSString*)accessKey
secretKey:(NSString*)secretKey
userMetrics:(NSNumber*)userMetrics
addonsConfig:(NSArray<AddonConfigSpec*>*)addonsConfig;

@end

#endif /* KubernetesApiModel_h */
