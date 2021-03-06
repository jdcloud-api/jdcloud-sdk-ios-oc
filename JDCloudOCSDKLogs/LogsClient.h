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


#ifndef LogsClient_h
#define LogsClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKLogs/LogsApiModel.h>

@interface LogsClient : NSObject<JDCloudClient>{
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
    describeLogtopic sync request
    @param describeLogtopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeLogtopicResponse` the request response data model
    */
    -(NSDictionary*) describeLogtopicSyncWithRequest:(LogsDescribeLogtopicRequest*) describeLogtopicRequest;

    -(void)describeLogtopicAsyncWithRequest:(LogsDescribeLogtopicRequest*) describeLogtopicRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeLogtopicResponse* _Nullable describeLogtopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeLogdCA sync request
    @param describeLogdCARequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeLogdCAResponse` the request response data model
    */
    -(NSDictionary*) describeLogdCASyncWithRequest:(LogsDescribeLogdCARequest*) describeLogdCARequest;

    -(void)describeLogdCAAsyncWithRequest:(LogsDescribeLogdCARequest*) describeLogdCARequest
    completionHandler:(void(^)(int statusCode,LogsDescribeLogdCAResponse* _Nullable describeLogdCAResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeCollectResources sync request
    @param describeCollectResourcesRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeCollectResourcesResponse` the request response data model
    */
    -(NSDictionary*) describeCollectResourcesSyncWithRequest:(LogsDescribeCollectResourcesRequest*) describeCollectResourcesRequest;

    -(void)describeCollectResourcesAsyncWithRequest:(LogsDescribeCollectResourcesRequest*) describeCollectResourcesRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeCollectResourcesResponse* _Nullable describeCollectResourcesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateLogtopic sync request
    @param updateLogtopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateLogtopicResponse` the request response data model
    */
    -(NSDictionary*) updateLogtopicSyncWithRequest:(LogsUpdateLogtopicRequest*) updateLogtopicRequest;

    -(void)updateLogtopicAsyncWithRequest:(LogsUpdateLogtopicRequest*) updateLogtopicRequest
    completionHandler:(void(^)(int statusCode,LogsUpdateLogtopicResponse* _Nullable updateLogtopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeLogsets sync request
    @param describeLogsetsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeLogsetsResponse` the request response data model
    */
    -(NSDictionary*) describeLogsetsSyncWithRequest:(LogsDescribeLogsetsRequest*) describeLogsetsRequest;

    -(void)describeLogsetsAsyncWithRequest:(LogsDescribeLogsetsRequest*) describeLogsetsRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeLogsetsResponse* _Nullable describeLogsetsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeMetricTasks sync request
    @param describeMetricTasksRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeMetricTasksResponse` the request response data model
    */
    -(NSDictionary*) describeMetricTasksSyncWithRequest:(LogsDescribeMetricTasksRequest*) describeMetricTasksRequest;

    -(void)describeMetricTasksAsyncWithRequest:(LogsDescribeMetricTasksRequest*) describeMetricTasksRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeMetricTasksResponse* _Nullable describeMetricTasksResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeMetricTask sync request
    @param describeMetricTaskRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeMetricTaskResponse` the request response data model
    */
    -(NSDictionary*) describeMetricTaskSyncWithRequest:(LogsDescribeMetricTaskRequest*) describeMetricTaskRequest;

    -(void)describeMetricTaskAsyncWithRequest:(LogsDescribeMetricTaskRequest*) describeMetricTaskRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeMetricTaskResponse* _Nullable describeMetricTaskResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    put sync request
    @param putRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `putResponse` the request response data model
    */
    -(NSDictionary*) putSyncWithRequest:(LogsPutRequest*) putRequest;

    -(void)putAsyncWithRequest:(LogsPutRequest*) putRequest
    completionHandler:(void(^)(int statusCode,LogsPutResponse* _Nullable putResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    searchLogContext sync request
    @param searchLogContextRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `searchLogContextResponse` the request response data model
    */
    -(NSDictionary*) searchLogContextSyncWithRequest:(LogsSearchLogContextRequest*) searchLogContextRequest;

    -(void)searchLogContextAsyncWithRequest:(LogsSearchLogContextRequest*) searchLogContextRequest
    completionHandler:(void(^)(int statusCode,LogsSearchLogContextResponse* _Nullable searchLogContextResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteLogset sync request
    @param deleteLogsetRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteLogsetResponse` the request response data model
    */
    -(NSDictionary*) deleteLogsetSyncWithRequest:(LogsDeleteLogsetRequest*) deleteLogsetRequest;

    -(void)deleteLogsetAsyncWithRequest:(LogsDeleteLogsetRequest*) deleteLogsetRequest
    completionHandler:(void(^)(int statusCode,LogsDeleteLogsetResponse* _Nullable deleteLogsetResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    search sync request
    @param searchRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `searchResponse` the request response data model
    */
    -(NSDictionary*) searchSyncWithRequest:(LogsSearchRequest*) searchRequest;

    -(void)searchAsyncWithRequest:(LogsSearchRequest*) searchRequest
    completionHandler:(void(^)(int statusCode,LogsSearchResponse* _Nullable searchResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    testMetricTask sync request
    @param testMetricTaskRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `testMetricTaskResponse` the request response data model
    */
    -(NSDictionary*) testMetricTaskSyncWithRequest:(LogsTestMetricTaskRequest*) testMetricTaskRequest;

    -(void)testMetricTaskAsyncWithRequest:(LogsTestMetricTaskRequest*) testMetricTaskRequest
    completionHandler:(void(^)(int statusCode,LogsTestMetricTaskResponse* _Nullable testMetricTaskResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeLogset sync request
    @param describeLogsetRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeLogsetResponse` the request response data model
    */
    -(NSDictionary*) describeLogsetSyncWithRequest:(LogsDescribeLogsetRequest*) describeLogsetRequest;

    -(void)describeLogsetAsyncWithRequest:(LogsDescribeLogsetRequest*) describeLogsetRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeLogsetResponse* _Nullable describeLogsetResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeInstanceCollectConfs sync request
    @param describeInstanceCollectConfsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeInstanceCollectConfsResponse` the request response data model
    */
    -(NSDictionary*) describeInstanceCollectConfsSyncWithRequest:(LogsDescribeInstanceCollectConfsRequest*) describeInstanceCollectConfsRequest;

    -(void)describeInstanceCollectConfsAsyncWithRequest:(LogsDescribeInstanceCollectConfsRequest*) describeInstanceCollectConfsRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeInstanceCollectConfsResponse* _Nullable describeInstanceCollectConfsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteLogtopic sync request
    @param deleteLogtopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteLogtopicResponse` the request response data model
    */
    -(NSDictionary*) deleteLogtopicSyncWithRequest:(LogsDeleteLogtopicRequest*) deleteLogtopicRequest;

    -(void)deleteLogtopicAsyncWithRequest:(LogsDeleteLogtopicRequest*) deleteLogtopicRequest
    completionHandler:(void(^)(int statusCode,LogsDeleteLogtopicResponse* _Nullable deleteLogtopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createMetricTask sync request
    @param createMetricTaskRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createMetricTaskResponse` the request response data model
    */
    -(NSDictionary*) createMetricTaskSyncWithRequest:(LogsCreateMetricTaskRequest*) createMetricTaskRequest;

    -(void)createMetricTaskAsyncWithRequest:(LogsCreateMetricTaskRequest*) createMetricTaskRequest
    completionHandler:(void(^)(int statusCode,LogsCreateMetricTaskResponse* _Nullable createMetricTaskResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateCollectInfo sync request
    @param updateCollectInfoRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateCollectInfoResponse` the request response data model
    */
    -(NSDictionary*) updateCollectInfoSyncWithRequest:(LogsUpdateCollectInfoRequest*) updateCollectInfoRequest;

    -(void)updateCollectInfoAsyncWithRequest:(LogsUpdateCollectInfoRequest*) updateCollectInfoRequest
    completionHandler:(void(^)(int statusCode,LogsUpdateCollectInfoResponse* _Nullable updateCollectInfoResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createLogset sync request
    @param createLogsetRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createLogsetResponse` the request response data model
    */
    -(NSDictionary*) createLogsetSyncWithRequest:(LogsCreateLogsetRequest*) createLogsetRequest;

    -(void)createLogsetAsyncWithRequest:(LogsCreateLogsetRequest*) createLogsetRequest
    completionHandler:(void(^)(int statusCode,LogsCreateLogsetResponse* _Nullable createLogsetResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateLogset sync request
    @param updateLogsetRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateLogsetResponse` the request response data model
    */
    -(NSDictionary*) updateLogsetSyncWithRequest:(LogsUpdateLogsetRequest*) updateLogsetRequest;

    -(void)updateLogsetAsyncWithRequest:(LogsUpdateLogsetRequest*) updateLogsetRequest
    completionHandler:(void(^)(int statusCode,LogsUpdateLogsetResponse* _Nullable updateLogsetResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeCollectInfo sync request
    @param describeCollectInfoRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeCollectInfoResponse` the request response data model
    */
    -(NSDictionary*) describeCollectInfoSyncWithRequest:(LogsDescribeCollectInfoRequest*) describeCollectInfoRequest;

    -(void)describeCollectInfoAsyncWithRequest:(LogsDescribeCollectInfoRequest*) describeCollectInfoRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeCollectInfoResponse* _Nullable describeCollectInfoResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeLogtopics sync request
    @param describeLogtopicsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeLogtopicsResponse` the request response data model
    */
    -(NSDictionary*) describeLogtopicsSyncWithRequest:(LogsDescribeLogtopicsRequest*) describeLogtopicsRequest;

    -(void)describeLogtopicsAsyncWithRequest:(LogsDescribeLogtopicsRequest*) describeLogtopicsRequest
    completionHandler:(void(^)(int statusCode,LogsDescribeLogtopicsResponse* _Nullable describeLogtopicsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createCollectInfo sync request
    @param createCollectInfoRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createCollectInfoResponse` the request response data model
    */
    -(NSDictionary*) createCollectInfoSyncWithRequest:(LogsCreateCollectInfoRequest*) createCollectInfoRequest;

    -(void)createCollectInfoAsyncWithRequest:(LogsCreateCollectInfoRequest*) createCollectInfoRequest
    completionHandler:(void(^)(int statusCode,LogsCreateCollectInfoResponse* _Nullable createCollectInfoResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateMetricTask sync request
    @param updateMetricTaskRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateMetricTaskResponse` the request response data model
    */
    -(NSDictionary*) updateMetricTaskSyncWithRequest:(LogsUpdateMetricTaskRequest*) updateMetricTaskRequest;

    -(void)updateMetricTaskAsyncWithRequest:(LogsUpdateMetricTaskRequest*) updateMetricTaskRequest
    completionHandler:(void(^)(int statusCode,LogsUpdateMetricTaskResponse* _Nullable updateMetricTaskResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteMetricTask sync request
    @param deleteMetricTaskRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteMetricTaskResponse` the request response data model
    */
    -(NSDictionary*) deleteMetricTaskSyncWithRequest:(LogsDeleteMetricTaskRequest*) deleteMetricTaskRequest;

    -(void)deleteMetricTaskAsyncWithRequest:(LogsDeleteMetricTaskRequest*) deleteMetricTaskRequest
    completionHandler:(void(^)(int statusCode,LogsDeleteMetricTaskResponse* _Nullable deleteMetricTaskResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    updateCollectResources sync request
    @param updateCollectResourcesRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateCollectResourcesResponse` the request response data model
    */
    -(NSDictionary*) updateCollectResourcesSyncWithRequest:(LogsUpdateCollectResourcesRequest*) updateCollectResourcesRequest;

    -(void)updateCollectResourcesAsyncWithRequest:(LogsUpdateCollectResourcesRequest*) updateCollectResourcesRequest
    completionHandler:(void(^)(int statusCode,LogsUpdateCollectResourcesResponse* _Nullable updateCollectResourcesResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createLogtopic sync request
    @param createLogtopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createLogtopicResponse` the request response data model
    */
    -(NSDictionary*) createLogtopicSyncWithRequest:(LogsCreateLogtopicRequest*) createLogtopicRequest;

    -(void)createLogtopicAsyncWithRequest:(LogsCreateLogtopicRequest*) createLogtopicRequest
    completionHandler:(void(^)(int statusCode,LogsCreateLogtopicResponse* _Nullable createLogtopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    logs common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) logsCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)logsCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* LogsClient_h */
