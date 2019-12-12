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

JDCLOUD 流数据总线 API
提供流数据总线topic操作的相关接口。

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef StreambusClient_h
#define StreambusClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKStreambus/StreambusApiModel.h>

@interface StreambusClient : NSObject<JDCloudClient>{
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
    updateTopic sync request
    @param updateTopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `updateTopicResponse` the request response data model
    */
    -(NSDictionary*) updateTopicSyncWithRequest:(StreambusUpdateTopicRequest*) updateTopicRequest;

    -(void)updateTopicAsyncWithRequest:(StreambusUpdateTopicRequest*) updateTopicRequest
    completionHandler:(void(^)(int statusCode,StreambusUpdateTopicResponse* _Nullable updateTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getConsumerGroupList sync request
    @param getConsumerGroupListRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getConsumerGroupListResponse` the request response data model
    */
    -(NSDictionary*) getConsumerGroupListSyncWithRequest:(StreambusGetConsumerGroupListRequest*) getConsumerGroupListRequest;

    -(void)getConsumerGroupListAsyncWithRequest:(StreambusGetConsumerGroupListRequest*) getConsumerGroupListRequest
    completionHandler:(void(^)(int statusCode,StreambusGetConsumerGroupListResponse* _Nullable getConsumerGroupListResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    getTopicList sync request
    @param getTopicListRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `getTopicListResponse` the request response data model
    */
    -(NSDictionary*) getTopicListSyncWithRequest:(StreambusGetTopicListRequest*) getTopicListRequest;

    -(void)getTopicListAsyncWithRequest:(StreambusGetTopicListRequest*) getTopicListRequest
    completionHandler:(void(^)(int statusCode,StreambusGetTopicListResponse* _Nullable getTopicListResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteConsumerGroup sync request
    @param deleteConsumerGroupRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteConsumerGroupResponse` the request response data model
    */
    -(NSDictionary*) deleteConsumerGroupSyncWithRequest:(StreambusDeleteConsumerGroupRequest*) deleteConsumerGroupRequest;

    -(void)deleteConsumerGroupAsyncWithRequest:(StreambusDeleteConsumerGroupRequest*) deleteConsumerGroupRequest
    completionHandler:(void(^)(int statusCode,StreambusDeleteConsumerGroupResponse* _Nullable deleteConsumerGroupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    addTopic sync request
    @param addTopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `addTopicResponse` the request response data model
    */
    -(NSDictionary*) addTopicSyncWithRequest:(StreambusAddTopicRequest*) addTopicRequest;

    -(void)addTopicAsyncWithRequest:(StreambusAddTopicRequest*) addTopicRequest
    completionHandler:(void(^)(int statusCode,StreambusAddTopicResponse* _Nullable addTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    createConsumerGroup sync request
    @param createConsumerGroupRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `createConsumerGroupResponse` the request response data model
    */
    -(NSDictionary*) createConsumerGroupSyncWithRequest:(StreambusCreateConsumerGroupRequest*) createConsumerGroupRequest;

    -(void)createConsumerGroupAsyncWithRequest:(StreambusCreateConsumerGroupRequest*) createConsumerGroupRequest
    completionHandler:(void(^)(int statusCode,StreambusCreateConsumerGroupResponse* _Nullable createConsumerGroupResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeTopic sync request
    @param describeTopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeTopicResponse` the request response data model
    */
    -(NSDictionary*) describeTopicSyncWithRequest:(StreambusDescribeTopicRequest*) describeTopicRequest;

    -(void)describeTopicAsyncWithRequest:(StreambusDescribeTopicRequest*) describeTopicRequest
    completionHandler:(void(^)(int statusCode,StreambusDescribeTopicResponse* _Nullable describeTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteTopic sync request
    @param deleteTopicRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteTopicResponse` the request response data model
    */
    -(NSDictionary*) deleteTopicSyncWithRequest:(StreambusDeleteTopicRequest*) deleteTopicRequest;

    -(void)deleteTopicAsyncWithRequest:(StreambusDeleteTopicRequest*) deleteTopicRequest
    completionHandler:(void(^)(int statusCode,StreambusDeleteTopicResponse* _Nullable deleteTopicResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    streambus common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) streambusCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)streambusCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* StreambusClient_h */
