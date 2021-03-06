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


#ifndef KubernetesClient_h
#define KubernetesClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKKubernetes/KubernetesApiModel.h>

@interface KubernetesClient : NSObject<JDCloudClient>{
    @private
    NSString* _userAgent;
    NSString* _serviceName;
    NSString* _version;
    }

    @property (strong,readonly,nonatomic) NSString* userAgent;

    @property (strong,readonly,nonatomic) NSString* serviceName;

    @property (strong,readonly,nonatomic) NSString* version;

    @property (strong,nonatomic) NSString* contentType;

    @property (strong,nonatomic) Credential* credential;

    @property (strong,nonatomic) SDKEnvironment* sdkEnvironment;

    @property (strong,nonatomic) NSMutableDictionary* customHeader;

    @property  (strong,nonatomic) NSString* httpRequestProtocol;

    -(void) addCustomerHeaderWithKey:(NSString*) key
    value:(NSString*) value;

    -(id)initWithGlobalConfig;

    -(id)initWithCredential:(Credential*)credential
    sdkEnvironment:(SDKEnvironment*)sdkEnvironment;
    -(id)initWithCredential:(Credential*)credential;
    /**
    deleteNodeGroup sync request
    @param deleteNodeGroupRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteNodeGroupResponse` the request response data model
    */
    -(NSDictionary*) deleteNodeGroupSyncWithRequest:(KubernetesDeleteNodeGroupRequest*) deleteNodeGroupRequest;

    -(void)deleteNodeGroupAsyncWithRequest:(KubernetesDeleteNodeGroupRequest*) deleteNodeGroupRequest
    completionHandler:(void(^)(int statusCode,KubernetesDeleteNodeGroupResponse* _Nullable deleteNodeGroupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeNodeGroups sync request
    @param describeNodeGroupsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeNodeGroupsResponse` the request response data model
    */
    -(NSDictionary*) describeNodeGroupsSyncWithRequest:(KubernetesDescribeNodeGroupsRequest*) describeNodeGroupsRequest;

    -(void)describeNodeGroupsAsyncWithRequest:(KubernetesDescribeNodeGroupsRequest*) describeNodeGroupsRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeNodeGroupsResponse* _Nullable describeNodeGroupsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeUpgradableNodeVersions sync request
    @param describeUpgradableNodeVersionsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeUpgradableNodeVersionsResponse` the request response data model
    */
    -(NSDictionary*) describeUpgradableNodeVersionsSyncWithRequest:(KubernetesDescribeUpgradableNodeVersionsRequest*) describeUpgradableNodeVersionsRequest;

    -(void)describeUpgradableNodeVersionsAsyncWithRequest:(KubernetesDescribeUpgradableNodeVersionsRequest*) describeUpgradableNodeVersionsRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeUpgradableNodeVersionsResponse* _Nullable describeUpgradableNodeVersionsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createNodeGroup sync request
    @param createNodeGroupRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createNodeGroupResponse` the request response data model
    */
    -(NSDictionary*) createNodeGroupSyncWithRequest:(KubernetesCreateNodeGroupRequest*) createNodeGroupRequest;

    -(void)createNodeGroupAsyncWithRequest:(KubernetesCreateNodeGroupRequest*) createNodeGroupRequest
    completionHandler:(void(^)(int statusCode,KubernetesCreateNodeGroupResponse* _Nullable createNodeGroupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    setAddons sync request
    @param setAddonsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setAddonsResponse` the request response data model
    */
    -(NSDictionary*) setAddonsSyncWithRequest:(KubernetesSetAddonsRequest*) setAddonsRequest;

    -(void)setAddonsAsyncWithRequest:(KubernetesSetAddonsRequest*) setAddonsRequest
    completionHandler:(void(^)(int statusCode,KubernetesSetAddonsResponse* _Nullable setAddonsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    modifyNodeGroup sync request
    @param modifyNodeGroupRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifyNodeGroupResponse` the request response data model
    */
    -(NSDictionary*) modifyNodeGroupSyncWithRequest:(KubernetesModifyNodeGroupRequest*) modifyNodeGroupRequest;

    -(void)modifyNodeGroupAsyncWithRequest:(KubernetesModifyNodeGroupRequest*) modifyNodeGroupRequest
    completionHandler:(void(^)(int statusCode,KubernetesModifyNodeGroupResponse* _Nullable modifyNodeGroupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteCluster sync request
    @param deleteClusterRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteClusterResponse` the request response data model
    */
    -(NSDictionary*) deleteClusterSyncWithRequest:(KubernetesDeleteClusterRequest*) deleteClusterRequest;

    -(void)deleteClusterAsyncWithRequest:(KubernetesDeleteClusterRequest*) deleteClusterRequest
    completionHandler:(void(^)(int statusCode,KubernetesDeleteClusterResponse* _Nullable deleteClusterResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    setUserMetrics sync request
    @param setUserMetricsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setUserMetricsResponse` the request response data model
    */
    -(NSDictionary*) setUserMetricsSyncWithRequest:(KubernetesSetUserMetricsRequest*) setUserMetricsRequest;

    -(void)setUserMetricsAsyncWithRequest:(KubernetesSetUserMetricsRequest*) setUserMetricsRequest
    completionHandler:(void(^)(int statusCode,KubernetesSetUserMetricsResponse* _Nullable setUserMetricsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    setNodeGroupSize sync request
    @param setNodeGroupSizeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setNodeGroupSizeResponse` the request response data model
    */
    -(NSDictionary*) setNodeGroupSizeSyncWithRequest:(KubernetesSetNodeGroupSizeRequest*) setNodeGroupSizeRequest;

    -(void)setNodeGroupSizeAsyncWithRequest:(KubernetesSetNodeGroupSizeRequest*) setNodeGroupSizeRequest
    completionHandler:(void(^)(int statusCode,KubernetesSetNodeGroupSizeResponse* _Nullable setNodeGroupSizeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeServerConfig sync request
    @param describeServerConfigRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeServerConfigResponse` the request response data model
    */
    -(NSDictionary*) describeServerConfigSyncWithRequest:(KubernetesDescribeServerConfigRequest*) describeServerConfigRequest;

    -(void)describeServerConfigAsyncWithRequest:(KubernetesDescribeServerConfigRequest*) describeServerConfigRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeServerConfigResponse* _Nullable describeServerConfigResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    upgradeCluster sync request
    @param upgradeClusterRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `upgradeClusterResponse` the request response data model
    */
    -(NSDictionary*) upgradeClusterSyncWithRequest:(KubernetesUpgradeClusterRequest*) upgradeClusterRequest;

    -(void)upgradeClusterAsyncWithRequest:(KubernetesUpgradeClusterRequest*) upgradeClusterRequest
    completionHandler:(void(^)(int statusCode,KubernetesUpgradeClusterResponse* _Nullable upgradeClusterResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeVersions sync request
    @param describeVersionsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeVersionsResponse` the request response data model
    */
    -(NSDictionary*) describeVersionsSyncWithRequest:(KubernetesDescribeVersionsRequest*) describeVersionsRequest;

    -(void)describeVersionsAsyncWithRequest:(KubernetesDescribeVersionsRequest*) describeVersionsRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeVersionsResponse* _Nullable describeVersionsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    setAutoRepair sync request
    @param setAutoRepairRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setAutoRepairResponse` the request response data model
    */
    -(NSDictionary*) setAutoRepairSyncWithRequest:(KubernetesSetAutoRepairRequest*) setAutoRepairRequest;

    -(void)setAutoRepairAsyncWithRequest:(KubernetesSetAutoRepairRequest*) setAutoRepairRequest
    completionHandler:(void(^)(int statusCode,KubernetesSetAutoRepairResponse* _Nullable setAutoRepairResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeQuotas sync request
    @param describeQuotasRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeQuotasResponse` the request response data model
    */
    -(NSDictionary*) describeQuotasSyncWithRequest:(KubernetesDescribeQuotasRequest*) describeQuotasRequest;

    -(void)describeQuotasAsyncWithRequest:(KubernetesDescribeQuotasRequest*) describeQuotasRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeQuotasResponse* _Nullable describeQuotasResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeNodeGroup sync request
    @param describeNodeGroupRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeNodeGroupResponse` the request response data model
    */
    -(NSDictionary*) describeNodeGroupSyncWithRequest:(KubernetesDescribeNodeGroupRequest*) describeNodeGroupRequest;

    -(void)describeNodeGroupAsyncWithRequest:(KubernetesDescribeNodeGroupRequest*) describeNodeGroupRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeNodeGroupResponse* _Nullable describeNodeGroupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeProgress sync request
    @param describeProgressRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeProgressResponse` the request response data model
    */
    -(NSDictionary*) describeProgressSyncWithRequest:(KubernetesDescribeProgressRequest*) describeProgressRequest;

    -(void)describeProgressAsyncWithRequest:(KubernetesDescribeProgressRequest*) describeProgressRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeProgressResponse* _Nullable describeProgressResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeNodeVersion sync request
    @param describeNodeVersionRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeNodeVersionResponse` the request response data model
    */
    -(NSDictionary*) describeNodeVersionSyncWithRequest:(KubernetesDescribeNodeVersionRequest*) describeNodeVersionRequest;

    -(void)describeNodeVersionAsyncWithRequest:(KubernetesDescribeNodeVersionRequest*) describeNodeVersionRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeNodeVersionResponse* _Nullable describeNodeVersionResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    rollbackNodeGroupUpgrade sync request
    @param rollbackNodeGroupUpgradeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `rollbackNodeGroupUpgradeResponse` the request response data model
    */
    -(NSDictionary*) rollbackNodeGroupUpgradeSyncWithRequest:(KubernetesRollbackNodeGroupUpgradeRequest*) rollbackNodeGroupUpgradeRequest;

    -(void)rollbackNodeGroupUpgradeAsyncWithRequest:(KubernetesRollbackNodeGroupUpgradeRequest*) rollbackNodeGroupUpgradeRequest
    completionHandler:(void(^)(int statusCode,KubernetesRollbackNodeGroupUpgradeResponse* _Nullable rollbackNodeGroupUpgradeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    abortUpgrade sync request
    @param abortUpgradeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `abortUpgradeResponse` the request response data model
    */
    -(NSDictionary*) abortUpgradeSyncWithRequest:(KubernetesAbortUpgradeRequest*) abortUpgradeRequest;

    -(void)abortUpgradeAsyncWithRequest:(KubernetesAbortUpgradeRequest*) abortUpgradeRequest
    completionHandler:(void(^)(int statusCode,KubernetesAbortUpgradeResponse* _Nullable abortUpgradeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeUpgradableMasterVersions sync request
    @param describeUpgradableMasterVersionsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeUpgradableMasterVersionsResponse` the request response data model
    */
    -(NSDictionary*) describeUpgradableMasterVersionsSyncWithRequest:(KubernetesDescribeUpgradableMasterVersionsRequest*) describeUpgradableMasterVersionsRequest;

    -(void)describeUpgradableMasterVersionsAsyncWithRequest:(KubernetesDescribeUpgradableMasterVersionsRequest*) describeUpgradableMasterVersionsRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeUpgradableMasterVersionsResponse* _Nullable describeUpgradableMasterVersionsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    setAutoUpgrade sync request
    @param setAutoUpgradeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `setAutoUpgradeResponse` the request response data model
    */
    -(NSDictionary*) setAutoUpgradeSyncWithRequest:(KubernetesSetAutoUpgradeRequest*) setAutoUpgradeRequest;

    -(void)setAutoUpgradeAsyncWithRequest:(KubernetesSetAutoUpgradeRequest*) setAutoUpgradeRequest
    completionHandler:(void(^)(int statusCode,KubernetesSetAutoUpgradeResponse* _Nullable setAutoUpgradeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createCluster sync request
    @param createClusterRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createClusterResponse` the request response data model
    */
    -(NSDictionary*) createClusterSyncWithRequest:(KubernetesCreateClusterRequest*) createClusterRequest;

    -(void)createClusterAsyncWithRequest:(KubernetesCreateClusterRequest*) createClusterRequest
    completionHandler:(void(^)(int statusCode,KubernetesCreateClusterResponse* _Nullable createClusterResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeCluster sync request
    @param describeClusterRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeClusterResponse` the request response data model
    */
    -(NSDictionary*) describeClusterSyncWithRequest:(KubernetesDescribeClusterRequest*) describeClusterRequest;

    -(void)describeClusterAsyncWithRequest:(KubernetesDescribeClusterRequest*) describeClusterRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeClusterResponse* _Nullable describeClusterResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    modifyCluster sync request
    @param modifyClusterRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifyClusterResponse` the request response data model
    */
    -(NSDictionary*) modifyClusterSyncWithRequest:(KubernetesModifyClusterRequest*) modifyClusterRequest;

    -(void)modifyClusterAsyncWithRequest:(KubernetesModifyClusterRequest*) modifyClusterRequest
    completionHandler:(void(^)(int statusCode,KubernetesModifyClusterResponse* _Nullable modifyClusterResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeClusters sync request
    @param describeClustersRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeClustersResponse` the request response data model
    */
    -(NSDictionary*) describeClustersSyncWithRequest:(KubernetesDescribeClustersRequest*) describeClustersRequest;

    -(void)describeClustersAsyncWithRequest:(KubernetesDescribeClustersRequest*) describeClustersRequest
    completionHandler:(void(^)(int statusCode,KubernetesDescribeClustersResponse* _Nullable describeClustersResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    kubernetes common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) kubernetesCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)kubernetesCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* KubernetesClient_h */
