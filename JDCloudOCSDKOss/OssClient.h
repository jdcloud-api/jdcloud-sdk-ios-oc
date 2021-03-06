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

云存储API
云存储API，主要包含查询Bucket列表，创建Bucket, 删除Bucket，查询Bucket是否存在, 更多API见：https://www.jdcloud.com/help/detail/1901/isCatalog/1

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef OssClient_h
#define OssClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKOss/OssApiModel.h>

@interface OssClient : NSObject<JDCloudClient>{
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
    listBuckets sync request
    @param listBucketsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `listBucketsResponse` the request response data model
    */
    -(NSDictionary*) listBucketsSyncWithRequest:(OssListBucketsRequest*) listBucketsRequest;

    -(void)listBucketsAsyncWithRequest:(OssListBucketsRequest*) listBucketsRequest
    completionHandler:(void(^)(int statusCode,OssListBucketsResponse* _Nullable listBucketsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    deleteBucket sync request
    @param deleteBucketRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `deleteBucketResponse` the request response data model
    */
    -(NSDictionary*) deleteBucketSyncWithRequest:(OssDeleteBucketRequest*) deleteBucketRequest;

    -(void)deleteBucketAsyncWithRequest:(OssDeleteBucketRequest*) deleteBucketRequest
    completionHandler:(void(^)(int statusCode,OssDeleteBucketResponse* _Nullable deleteBucketResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    headBucket sync request
    @param headBucketRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `headBucketResponse` the request response data model
    */
    -(NSDictionary*) headBucketSyncWithRequest:(OssHeadBucketRequest*) headBucketRequest;

    -(void)headBucketAsyncWithRequest:(OssHeadBucketRequest*) headBucketRequest
    completionHandler:(void(^)(int statusCode,OssHeadBucketResponse* _Nullable headBucketResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    putBucket sync request
    @param putBucketRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `putBucketResponse` the request response data model
    */
    -(NSDictionary*) putBucketSyncWithRequest:(OssPutBucketRequest*) putBucketRequest;

    -(void)putBucketAsyncWithRequest:(OssPutBucketRequest*) putBucketRequest
    completionHandler:(void(^)(int statusCode,OssPutBucketResponse* _Nullable putBucketResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    oss common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) ossCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)ossCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* OssClient_h */
