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


#ifndef PodClient_h
#define PodClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKPod/PodApiModel.h>

@interface PodClient : NSObject<JDCloudClient>{
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
    describeQuota sync request
    @param describeQuotaRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeQuotaResponse` the request response data model
    */
    -(NSDictionary*) describeQuotaSyncWithRequest:(PodDescribeQuotaRequest*) describeQuotaRequest;

    -(void)describeQuotaAsyncWithRequest:(PodDescribeQuotaRequest*) describeQuotaRequest
    completionHandler:(void(^)(int statusCode,PodDescribeQuotaResponse* _Nullable describeQuotaResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeContainer sync request
    @param describeContainerRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeContainerResponse` the request response data model
    */
    -(NSDictionary*) describeContainerSyncWithRequest:(PodDescribeContainerRequest*) describeContainerRequest;

    -(void)describeContainerAsyncWithRequest:(PodDescribeContainerRequest*) describeContainerRequest
    completionHandler:(void(^)(int statusCode,PodDescribeContainerResponse* _Nullable describeContainerResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeSecrets sync request
    @param describeSecretsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeSecretsResponse` the request response data model
    */
    -(NSDictionary*) describeSecretsSyncWithRequest:(PodDescribeSecretsRequest*) describeSecretsRequest;

    -(void)describeSecretsAsyncWithRequest:(PodDescribeSecretsRequest*) describeSecretsRequest
    completionHandler:(void(^)(int statusCode,PodDescribeSecretsResponse* _Nullable describeSecretsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createSecret sync request
    @param createSecretRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createSecretResponse` the request response data model
    */
    -(NSDictionary*) createSecretSyncWithRequest:(PodCreateSecretRequest*) createSecretRequest;

    -(void)createSecretAsyncWithRequest:(PodCreateSecretRequest*) createSecretRequest
    completionHandler:(void(^)(int statusCode,PodCreateSecretResponse* _Nullable createSecretResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeSecret sync request
    @param describeSecretRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeSecretResponse` the request response data model
    */
    -(NSDictionary*) describeSecretSyncWithRequest:(PodDescribeSecretRequest*) describeSecretRequest;

    -(void)describeSecretAsyncWithRequest:(PodDescribeSecretRequest*) describeSecretRequest
    completionHandler:(void(^)(int statusCode,PodDescribeSecretResponse* _Nullable describeSecretResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    disassociateElasticIp sync request
    @param disassociateElasticIpRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `disassociateElasticIpResponse` the request response data model
    */
    -(NSDictionary*) disassociateElasticIpSyncWithRequest:(PodDisassociateElasticIpRequest*) disassociateElasticIpRequest;

    -(void)disassociateElasticIpAsyncWithRequest:(PodDisassociateElasticIpRequest*) disassociateElasticIpRequest
    completionHandler:(void(^)(int statusCode,PodDisassociateElasticIpResponse* _Nullable disassociateElasticIpResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    resizeTTY sync request
    @param resizeTTYRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `resizeTTYResponse` the request response data model
    */
    -(NSDictionary*) resizeTTYSyncWithRequest:(PodResizeTTYRequest*) resizeTTYRequest;

    -(void)resizeTTYAsyncWithRequest:(PodResizeTTYRequest*) resizeTTYRequest
    completionHandler:(void(^)(int statusCode,PodResizeTTYResponse* _Nullable resizeTTYResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    attach sync request
    @param attachRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `attachResponse` the request response data model
    */
    -(NSDictionary*) attachSyncWithRequest:(PodAttachRequest*) attachRequest;

    -(void)attachAsyncWithRequest:(PodAttachRequest*) attachRequest
    completionHandler:(void(^)(int statusCode,PodAttachResponse* _Nullable attachResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    execStart sync request
    @param execStartRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `execStartResponse` the request response data model
    */
    -(NSDictionary*) execStartSyncWithRequest:(PodExecStartRequest*) execStartRequest;

    -(void)execStartAsyncWithRequest:(PodExecStartRequest*) execStartRequest
    completionHandler:(void(^)(int statusCode,PodExecStartResponse* _Nullable execStartResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    startPod sync request
    @param startPodRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `startPodResponse` the request response data model
    */
    -(NSDictionary*) startPodSyncWithRequest:(PodStartPodRequest*) startPodRequest;

    -(void)startPodAsyncWithRequest:(PodStartPodRequest*) startPodRequest
    completionHandler:(void(^)(int statusCode,PodStartPodResponse* _Nullable startPodResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describePods sync request
    @param describePodsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describePodsResponse` the request response data model
    */
    -(NSDictionary*) describePodsSyncWithRequest:(PodDescribePodsRequest*) describePodsRequest;

    -(void)describePodsAsyncWithRequest:(PodDescribePodsRequest*) describePodsRequest
    completionHandler:(void(^)(int statusCode,PodDescribePodsResponse* _Nullable describePodsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    execGetExitCode sync request
    @param execGetExitCodeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `execGetExitCodeResponse` the request response data model
    */
    -(NSDictionary*) execGetExitCodeSyncWithRequest:(PodExecGetExitCodeRequest*) execGetExitCodeRequest;

    -(void)execGetExitCodeAsyncWithRequest:(PodExecGetExitCodeRequest*) execGetExitCodeRequest
    completionHandler:(void(^)(int statusCode,PodExecGetExitCodeResponse* _Nullable execGetExitCodeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createPods sync request
    @param createPodsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createPodsResponse` the request response data model
    */
    -(NSDictionary*) createPodsSyncWithRequest:(PodCreatePodsRequest*) createPodsRequest;

    -(void)createPodsAsyncWithRequest:(PodCreatePodsRequest*) createPodsRequest
    completionHandler:(void(^)(int statusCode,PodCreatePodsResponse* _Nullable createPodsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    checkPodName sync request
    @param checkPodNameRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `checkPodNameResponse` the request response data model
    */
    -(NSDictionary*) checkPodNameSyncWithRequest:(PodCheckPodNameRequest*) checkPodNameRequest;

    -(void)checkPodNameAsyncWithRequest:(PodCheckPodNameRequest*) checkPodNameRequest
    completionHandler:(void(^)(int statusCode,PodCheckPodNameResponse* _Nullable checkPodNameResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getContainerLogs sync request
    @param getContainerLogsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getContainerLogsResponse` the request response data model
    */
    -(NSDictionary*) getContainerLogsSyncWithRequest:(PodGetContainerLogsRequest*) getContainerLogsRequest;

    -(void)getContainerLogsAsyncWithRequest:(PodGetContainerLogsRequest*) getContainerLogsRequest
    completionHandler:(void(^)(int statusCode,PodGetContainerLogsResponse* _Nullable getContainerLogsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeInstanceTypes sync request
    @param describeInstanceTypesRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeInstanceTypesResponse` the request response data model
    */
    -(NSDictionary*) describeInstanceTypesSyncWithRequest:(PodDescribeInstanceTypesRequest*) describeInstanceTypesRequest;

    -(void)describeInstanceTypesAsyncWithRequest:(PodDescribeInstanceTypesRequest*) describeInstanceTypesRequest
    completionHandler:(void(^)(int statusCode,PodDescribeInstanceTypesResponse* _Nullable describeInstanceTypesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    modifyPodAttribute sync request
    @param modifyPodAttributeRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `modifyPodAttributeResponse` the request response data model
    */
    -(NSDictionary*) modifyPodAttributeSyncWithRequest:(PodModifyPodAttributeRequest*) modifyPodAttributeRequest;

    -(void)modifyPodAttributeAsyncWithRequest:(PodModifyPodAttributeRequest*) modifyPodAttributeRequest
    completionHandler:(void(^)(int statusCode,PodModifyPodAttributeResponse* _Nullable modifyPodAttributeResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deletePod sync request
    @param deletePodRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deletePodResponse` the request response data model
    */
    -(NSDictionary*) deletePodSyncWithRequest:(PodDeletePodRequest*) deletePodRequest;

    -(void)deletePodAsyncWithRequest:(PodDeletePodRequest*) deletePodRequest
    completionHandler:(void(^)(int statusCode,PodDeletePodResponse* _Nullable deletePodResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    rebuildPod sync request
    @param rebuildPodRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `rebuildPodResponse` the request response data model
    */
    -(NSDictionary*) rebuildPodSyncWithRequest:(PodRebuildPodRequest*) rebuildPodRequest;

    -(void)rebuildPodAsyncWithRequest:(PodRebuildPodRequest*) rebuildPodRequest
    completionHandler:(void(^)(int statusCode,PodRebuildPodResponse* _Nullable rebuildPodResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    associateElasticIp sync request
    @param associateElasticIpRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `associateElasticIpResponse` the request response data model
    */
    -(NSDictionary*) associateElasticIpSyncWithRequest:(PodAssociateElasticIpRequest*) associateElasticIpRequest;

    -(void)associateElasticIpAsyncWithRequest:(PodAssociateElasticIpRequest*) associateElasticIpRequest
    completionHandler:(void(^)(int statusCode,PodAssociateElasticIpResponse* _Nullable associateElasticIpResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    resizePod sync request
    @param resizePodRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `resizePodResponse` the request response data model
    */
    -(NSDictionary*) resizePodSyncWithRequest:(PodResizePodRequest*) resizePodRequest;

    -(void)resizePodAsyncWithRequest:(PodResizePodRequest*) resizePodRequest
    completionHandler:(void(^)(int statusCode,PodResizePodResponse* _Nullable resizePodResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    execCreate sync request
    @param execCreateRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `execCreateResponse` the request response data model
    */
    -(NSDictionary*) execCreateSyncWithRequest:(PodExecCreateRequest*) execCreateRequest;

    -(void)execCreateAsyncWithRequest:(PodExecCreateRequest*) execCreateRequest
    completionHandler:(void(^)(int statusCode,PodExecCreateResponse* _Nullable execCreateResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    stopPod sync request
    @param stopPodRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `stopPodResponse` the request response data model
    */
    -(NSDictionary*) stopPodSyncWithRequest:(PodStopPodRequest*) stopPodRequest;

    -(void)stopPodAsyncWithRequest:(PodStopPodRequest*) stopPodRequest
    completionHandler:(void(^)(int statusCode,PodStopPodResponse* _Nullable stopPodResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describePod sync request
    @param describePodRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describePodResponse` the request response data model
    */
    -(NSDictionary*) describePodSyncWithRequest:(PodDescribePodRequest*) describePodRequest;

    -(void)describePodAsyncWithRequest:(PodDescribePodRequest*) describePodRequest
    completionHandler:(void(^)(int statusCode,PodDescribePodResponse* _Nullable describePodResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteSecret sync request
    @param deleteSecretRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteSecretResponse` the request response data model
    */
    -(NSDictionary*) deleteSecretSyncWithRequest:(PodDeleteSecretRequest*) deleteSecretRequest;

    -(void)deleteSecretAsyncWithRequest:(PodDeleteSecretRequest*) deleteSecretRequest
    completionHandler:(void(^)(int statusCode,PodDeleteSecretResponse* _Nullable deleteSecretResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    pod common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) podCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)podCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* PodClient_h */
