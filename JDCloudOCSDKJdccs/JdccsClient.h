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

Cloud Cabinet Service API
提供云托管服务的相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef JdccsClient_h
#define JdccsClient_h


#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKJdccs/JdccsApiModel.h>

@interface JdccsClient : NSObject<JDCloudClient>{
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
    describeMetricData sync request
    @param describeMetricDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeMetricDataResponse` the request response data model
    */
    -(NSDictionary*) describeMetricDataSyncWithRequest:(JdccsDescribeMetricDataRequest*) describeMetricDataRequest;

    -(void)describeMetricDataAsyncWithRequest:(JdccsDescribeMetricDataRequest*) describeMetricDataRequest
    completionHandler:(void(^)(int statusCode,JdccsDescribeMetricDataResponse* _Nullable describeMetricDataResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    lastDownsample sync request
    @param lastDownsampleRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `lastDownsampleResponse` the request response data model
    */
    -(NSDictionary*) lastDownsampleSyncWithRequest:(JdccsLastDownsampleRequest*) lastDownsampleRequest;

    -(void)lastDownsampleAsyncWithRequest:(JdccsLastDownsampleRequest*) lastDownsampleRequest
    completionHandler:(void(^)(int statusCode,JdccsLastDownsampleResponse* _Nullable lastDownsampleResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeMetrics sync request
    @param describeMetricsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeMetricsResponse` the request response data model
    */
    -(NSDictionary*) describeMetricsSyncWithRequest:(JdccsDescribeMetricsRequest*) describeMetricsRequest;

    -(void)describeMetricsAsyncWithRequest:(JdccsDescribeMetricsRequest*) describeMetricsRequest
    completionHandler:(void(^)(int statusCode,JdccsDescribeMetricsResponse* _Nullable describeMetricsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeRooms sync request
    @param describeRoomsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeRoomsResponse` the request response data model
    */
    -(NSDictionary*) describeRoomsSyncWithRequest:(JdccsDescribeRoomsRequest*) describeRoomsRequest;

    -(void)describeRoomsAsyncWithRequest:(JdccsDescribeRoomsRequest*) describeRoomsRequest
    completionHandler:(void(^)(int statusCode,JdccsDescribeRoomsResponse* _Nullable describeRoomsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeBandwidthTraffic sync request
    @param describeBandwidthTrafficRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeBandwidthTrafficResponse` the request response data model
    */
    -(NSDictionary*) describeBandwidthTrafficSyncWithRequest:(JdccsDescribeBandwidthTrafficRequest*) describeBandwidthTrafficRequest;

    -(void)describeBandwidthTrafficAsyncWithRequest:(JdccsDescribeBandwidthTrafficRequest*) describeBandwidthTrafficRequest
    completionHandler:(void(^)(int statusCode,JdccsDescribeBandwidthTrafficResponse* _Nullable describeBandwidthTrafficResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeBandwidthTraffics sync request
    @param describeBandwidthTrafficsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeBandwidthTrafficsResponse` the request response data model
    */
    -(NSDictionary*) describeBandwidthTrafficsSyncWithRequest:(JdccsDescribeBandwidthTrafficsRequest*) describeBandwidthTrafficsRequest;

    -(void)describeBandwidthTrafficsAsyncWithRequest:(JdccsDescribeBandwidthTrafficsRequest*) describeBandwidthTrafficsRequest
    completionHandler:(void(^)(int statusCode,JdccsDescribeBandwidthTrafficsResponse* _Nullable describeBandwidthTrafficsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeIdcs sync request
    @param describeIdcsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeIdcsResponse` the request response data model
    */
    -(NSDictionary*) describeIdcsSyncWithRequest:(JdccsDescribeIdcsRequest*) describeIdcsRequest;

    -(void)describeIdcsAsyncWithRequest:(JdccsDescribeIdcsRequest*) describeIdcsRequest
    completionHandler:(void(^)(int statusCode,JdccsDescribeIdcsResponse* _Nullable describeIdcsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;
    /**
    describeCabinets sync request
    @param describeCabinetsRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
            `describeCabinetsResponse` the request response data model
    */
    -(NSDictionary*) describeCabinetsSyncWithRequest:(JdccsDescribeCabinetsRequest*) describeCabinetsRequest;

    -(void)describeCabinetsAsyncWithRequest:(JdccsDescribeCabinetsRequest*) describeCabinetsRequest
    completionHandler:(void(^)(int statusCode,JdccsDescribeCabinetsResponse* _Nullable describeCabinetsResponse, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    /**
    jdccs common sync request
    @param  jdcloudDataRequest request param
    @return key `statusCode` http request status code type is int
            `dataResult` the http request response data  type is NSData
            `requestError` the request error type is NSError
    */
    -(NSDictionary*) jdccsCommonSyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                           url:(NSString*) url
                                        method:(NSString*) method;

    -(void)jdccsCommonAsyncWithRequest:(JDCloudDataRequest*) jdcloudDataRequest
                                  url:(NSString*) url
                               method:(NSString*) method
                    completionHandler:(void(^)(int statusCode, NSData* _Nullable responseData,NSError * _Nullable error))completionHandler;

    @end


    #endif /* JdccsClient_h */
