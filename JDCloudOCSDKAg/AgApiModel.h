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

Availability-Group
高可用组的接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef AgApiModel_h
#define AgApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKCommon/JDCloudOCSDKCommon.h>
#import <JDCloudOCSDKAg/AgModel.h>


@interface AgDescribeQuotasResult : NSObject
/// Quotas
 @property (strong,nonatomic,nonnull)  NSArray<AgQuota*>*  quotas;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithQuotas:(NSArray<AgQuota*>*) quotas;
@end

@interface AgDescribeQuotasResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property AgDescribeQuotasResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(AgDescribeQuotasResult*) result;
@end

@interface AgDescribeQuotasRequest:JDCloudRequest

/// resourceTypes - 资源类型，暂时只支持[ag]
   /// 
@property (strong,nonatomic,nonnull)  NSArray<Filter*>*  filters;
-(id) initWithRegion:(NSString *)regionId
filters:(NSArray<Filter*>*)filters;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
filters:(NSArray<Filter*>*)filters;

@end

@interface AgSetInstanceTemplateRequest:JDCloudRequest

/// 实例模板 id
@property (strong,nonatomic,nonnull)  NSString*  instanceTemplateId;
/// 高可用组 ID
@property (strong,nonatomic,nonnull)  NSString*  agId;
-(id) initWithRegion:(NSString *)regionId
instanceTemplateId:(NSString*)instanceTemplateId
agId:(NSString*)agId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceTemplateId:(NSString*)instanceTemplateId
agId:(NSString*)agId;

@end

@interface AgSetInstanceTemplateResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface AgSetInstanceTemplateResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property AgSetInstanceTemplateResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(AgSetInstanceTemplateResult*) result;
@end

@interface AgUpdateAgRequest:JDCloudRequest

/// 描述，长度不超过 256 字符
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 高可用组名称，只支持中文、数字、大小写字母、英文下划线 “_” 及中划线 “-”，且不能超过 32 字符
@property (strong,nonatomic,nonnull)  NSString*  name;
/// 高可用组 ID
@property (strong,nonatomic,nonnull)  NSString*  agId;
-(id) initWithRegion:(NSString *)regionId
descriptionValue:(NSString*)descriptionValue
name:(NSString*)name
agId:(NSString*)agId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
descriptionValue:(NSString*)descriptionValue
name:(NSString*)name
agId:(NSString*)agId;

@end

@interface AgAbandonInstancesResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface AgUpdateAgResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface AgUpdateAgResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property AgUpdateAgResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(AgUpdateAgResult*) result;
@end

@interface AgCreateAgRequest:JDCloudRequest

/// 支持的可用区，最少一个
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  azs;
/// 高可用组名称，只支持中文、数字、大小写字母、英文下划线 “_” 及中划线 “-”，且不能超过 32 字符
@property (strong,nonatomic,nonnull)  NSString*  agName;
/// 高可用组类型，支持vm
@property (strong,nonatomic,nonnull)  NSString*  agType;
/// 实例模板的Id
@property (strong,nonatomic,nonnull)  NSString*  instanceTemplateId;
/// 描述，长度不超过 256 字符
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
-(id) initWithRegion:(NSString *)regionId
azs:(NSArray<NSString*>*)azs
agName:(NSString*)agName
agType:(NSString*)agType
instanceTemplateId:(NSString*)instanceTemplateId
descriptionValue:(NSString*)descriptionValue;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
azs:(NSArray<NSString*>*)azs
agName:(NSString*)agName
agType:(NSString*)agType
instanceTemplateId:(NSString*)instanceTemplateId
descriptionValue:(NSString*)descriptionValue;

@end

@interface AgAbandonInstancesResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property AgAbandonInstancesResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(AgAbandonInstancesResult*) result;
@end

@interface AgDescribeAgsResult : NSObject
/// Ags
 @property (strong,nonatomic,nonnull)  NSArray<AvailabilityGroup*>*  ags;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithAgs:(NSArray<AvailabilityGroup*>*) ags

    totalCount:(NSNumber*)totalCount;
@end

@interface AgDescribeAgsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property AgDescribeAgsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(AgDescribeAgsResult*) result;
@end

@interface AgCreateAgResult : NSObject
/// 创建成功的高可用组 id
 @property (strong,nonatomic,nonnull)  NSString*  agId;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithAgId:(NSString*) agId;
@end

@interface AgCreateAgResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property AgCreateAgResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(AgCreateAgResult*) result;
@end

@interface AgDescribeAgResult : NSObject
/// Ag
 @property (strong,nonatomic,nonnull)  AvailabilityGroup*  ag;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithAg:(AvailabilityGroup*) ag;
@end

@interface AgDescribeAgResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property AgDescribeAgResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(AgDescribeAgResult*) result;
@end

@interface AgDeleteAgResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface AgDeleteAgResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property AgDeleteAgResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(AgDeleteAgResult*) result;
@end

@interface AgDeleteAgRequest:JDCloudRequest

/// 高可用组 ID
@property (strong,nonatomic,nonnull)  NSString*  agId;
-(id) initWithRegion:(NSString *)regionId
agId:(NSString*)agId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
agId:(NSString*)agId;

@end

@interface AgDescribeAgRequest:JDCloudRequest

/// 高可用组 ID
@property (strong,nonatomic,nonnull)  NSString*  agId;
-(id) initWithRegion:(NSString *)regionId
agId:(NSString*)agId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
agId:(NSString*)agId;

@end

@interface AgDescribeAgsRequest:JDCloudRequest

/// 页码；默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为20；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// agName - ag名字，支持模糊匹配
   /// agId - ag id，精确匹配
   /// instanceTemplateId - 实例模板id，精确匹配
   /// vpcId - vpc id，精确匹配
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

@interface AgAbandonInstancesRequest:JDCloudRequest

/// 准备剔除出高可用组的实例 id
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  instanceIds;
/// 高可用组 ID
@property (strong,nonatomic,nonnull)  NSString*  agId;
-(id) initWithRegion:(NSString *)regionId
instanceIds:(NSArray<NSString*>*)instanceIds
agId:(NSString*)agId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceIds:(NSArray<NSString*>*)instanceIds
agId:(NSString*)agId;

@end

#endif /* AgApiModel_h */
