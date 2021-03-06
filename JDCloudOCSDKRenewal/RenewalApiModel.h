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

Renew Management APIs
续费管理相关接口

OpenAPI spec version: v2
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef RenewalApiModel_h
#define RenewalApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKRenewal/RenewalModel.h>


@interface RenewalSetRenewalResult : NSObject
/// 设置成功条数
 @property (strong,nonatomic,nonnull)  NSString*  stringResult;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStringResult:(NSString*) stringResult;
@end

@interface RenewalRenewInstanceResult : NSObject
/// 创建成功的订单ID
 @property (strong,nonatomic,nonnull)  NSString*  orderNumber;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithOrderNumber:(NSString*) orderNumber;
@end

@interface RenewalSetRenewalRequest:JDCloudRequest

/// SetRenewalParam
@property (strong,nonatomic,nonnull)  SetRenewalParam*  setRenewalParam;
-(id) initWithRegion:(NSString *)regionId
setRenewalParam:(SetRenewalParam*)setRenewalParam;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
setRenewalParam:(SetRenewalParam*)setRenewalParam;

@end

@interface RenewalQueryInstanceResult : NSObject
/// ListQueries
 @property (strong,nonatomic,nonnull)  NSArray<ListQuery*>*  listQueries;
/// 查询总数
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithListQueries:(NSArray<ListQuery*>*) listQueries

    totalCount:(NSNumber*)totalCount;
@end

@interface RenewalQueryInstanceRequest:JDCloudRequest

/// QueryInstanceParam
@property (strong,nonatomic,nonnull)  QueryInstanceParam*  queryInstanceParam;
-(id) initWithRegion:(NSString *)regionId
queryInstanceParam:(QueryInstanceParam*)queryInstanceParam;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
queryInstanceParam:(QueryInstanceParam*)queryInstanceParam;

@end

@interface RenewalRenewInstanceResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property RenewalRenewInstanceResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(RenewalRenewInstanceResult*) result;
@end

@interface RenewalSetRenewalResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property RenewalSetRenewalResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(RenewalSetRenewalResult*) result;
@end

@interface RenewalQueryInstanceResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property RenewalQueryInstanceResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(RenewalQueryInstanceResult*) result;
@end

@interface RenewalRenewInstanceRequest:JDCloudRequest

/// RenewInstanceParam
@property (strong,nonatomic,nonnull)  RenewInstanceParam*  renewInstanceParam;
-(id) initWithRegion:(NSString *)regionId
renewInstanceParam:(RenewInstanceParam*)renewInstanceParam;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
renewInstanceParam:(RenewInstanceParam*)renewInstanceParam;

@end

#endif /* RenewalApiModel_h */
