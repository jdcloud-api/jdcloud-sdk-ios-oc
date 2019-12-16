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

Resource
Interface of Resource

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef JdroApiModel_h
#define JdroApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKJdro/JdroModel.h>


@interface JdroValidateTemplateResult : NSObject
/// Describe
 @property (strong,nonatomic,nonnull)  NSString*  describe;
/// 验证模板结果信息，JSON格式
 @property (strong,nonatomic,nonnull)  NSObject*  result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithDescribe:(NSString*) describe

    result:(NSObject*)result;
@end

@interface JdroDescribeStacksRequest:JDCloudRequest

/// 当前所在页，默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 页面大小，默认为20；取值范围[1, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 资源栈名称
@property (strong,nonatomic,nonnull)  NSString*  stackName;
/// 资源栈正在执行的动作
@property (strong,nonatomic,nonnull)  NSString*  action;
/// 资源栈正在执行的动作的状态
@property (strong,nonatomic,nonnull)  NSString*  status;
/// 创建开始时间
@property (strong,nonatomic,nonnull)  NSString*  createStartTime;
/// 创建结束时间
@property (strong,nonatomic,nonnull)  NSString*  createEndTime;
/// 更新开始时间
@property (strong,nonatomic,nonnull)  NSString*  updateStartTime;
/// 更新结束时间
@property (strong,nonatomic,nonnull)  NSString*  updateEndTime;
/// 排序字段, createtime, updatetime
@property (strong,nonatomic,nonnull)  NSString*  sortField;
/// 排序方式，asc，desc
@property (strong,nonatomic,nonnull)  NSString*  sortBy;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
stackName:(NSString*)stackName
action:(NSString*)action
status:(NSString*)status
createStartTime:(NSString*)createStartTime
createEndTime:(NSString*)createEndTime
updateStartTime:(NSString*)updateStartTime
updateEndTime:(NSString*)updateEndTime
sortField:(NSString*)sortField
sortBy:(NSString*)sortBy;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
stackName:(NSString*)stackName
action:(NSString*)action
status:(NSString*)status
createStartTime:(NSString*)createStartTime
createEndTime:(NSString*)createEndTime
updateStartTime:(NSString*)updateStartTime
updateEndTime:(NSString*)updateEndTime
sortField:(NSString*)sortField
sortBy:(NSString*)sortBy;

@end

@interface JdroDescribeStackTemplateResult : NSObject
/// 模板信息
 @property (strong,nonatomic,nonnull)  NSString*  template;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithTemplate:(NSString*) template;
@end

@interface JdroDescribeStackRequest:JDCloudRequest

/// 资源栈 ID
@property (strong,nonatomic,nonnull)  NSString*  stackId;
-(id) initWithRegion:(NSString *)regionId
stackId:(NSString*)stackId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
stackId:(NSString*)stackId;

@end

@interface JdroCreateChangeSetResult : NSObject
/// Id
 @property (strong,nonatomic,nonnull)  NSString*  idValue;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithId:(NSString*) idValue;
@end

@interface JdroExecuteChangeSetRequest:JDCloudRequest

/// 资源栈 ID
@property (strong,nonatomic,nonnull)  NSString*  stackId;
/// 更改集 ID
@property (strong,nonatomic,nonnull)  NSString*  changesetId;
-(id) initWithRegion:(NSString *)regionId
stackId:(NSString*)stackId
changesetId:(NSString*)changesetId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
stackId:(NSString*)stackId
changesetId:(NSString*)changesetId;

@end

@interface JdroDeleteStackRequest:JDCloudRequest

/// 资源栈 ID
@property (strong,nonatomic,nonnull)  NSString*  stackId;
-(id) initWithRegion:(NSString *)regionId
stackId:(NSString*)stackId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
stackId:(NSString*)stackId;

@end

@interface JdroCreateStackResult : NSObject
/// StackID
 @property (strong,nonatomic,nonnull)  NSString*  stackID;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStackID:(NSString*) stackID;
@end

@interface JdroDescribeStackTemplateRequest:JDCloudRequest

/// 资源栈 ID
@property (strong,nonatomic,nonnull)  NSString*  stackId;
-(id) initWithRegion:(NSString *)regionId
stackId:(NSString*)stackId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
stackId:(NSString*)stackId;

@end

@interface JdroDeleteStackResult : NSObject
/// Details
 @property (strong,nonatomic,nonnull)  NSString*  details;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithDetails:(NSString*) details;
@end

@interface JdroDescribeStackResourcesRequest:JDCloudRequest

/// 当前所在页，默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 页面大小，默认为20；取值范围[1, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 按照京东云产品线名称或者资源逻辑ID进行模糊搜索
@property (strong,nonatomic,nonnull)  NSString*  search;
/// 只按照京东云产品线名称进行模糊搜索，比如VM，Disk等
@property (strong,nonatomic,nonnull)  NSString*  product;
/// 资源栈 ID
@property (strong,nonatomic,nonnull)  NSString*  stackId;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
search:(NSString*)search
product:(NSString*)product
stackId:(NSString*)stackId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
search:(NSString*)search
product:(NSString*)product
stackId:(NSString*)stackId;

@end

@interface JdroDescribeStackEventsRequest:JDCloudRequest

/// 当前所在页，默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 页面大小，默认为20；取值范围[1, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 事件开始时间
@property (strong,nonatomic,nonnull)  NSString*  startTime;
/// 事件结束时间
@property (strong,nonatomic,nonnull)  NSString*  endTime;
/// 资源栈 ID
@property (strong,nonatomic,nonnull)  NSString*  stackId;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
startTime:(NSString*)startTime
endTime:(NSString*)endTime
stackId:(NSString*)stackId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
startTime:(NSString*)startTime
endTime:(NSString*)endTime
stackId:(NSString*)stackId;

@end

@interface JdroDescribeResourceTypeSpecificationRequest:JDCloudRequest

/// 资源类型
@property (strong,nonatomic,nonnull)  NSString*  resourceType;
-(id) initWithRegion:(NSString *)regionId
resourceType:(NSString*)resourceType;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
resourceType:(NSString*)resourceType;

@end

@interface JdroDescribeResourceTypeListRequest:JDCloudRequest

/// 当前所在页，默认为1
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 页面大小，默认为20；取值范围[1, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 产品线类型，比如 VM
@property (strong,nonatomic,nonnull)  NSString*  product;
/// 搜索的内容
@property (strong,nonatomic,nonnull)  NSString*  search;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
product:(NSString*)product
search:(NSString*)search;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
product:(NSString*)product
search:(NSString*)search;

@end

@interface JdroValidateTemplateResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroValidateTemplateResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroValidateTemplateResult*) result;
@end

@interface JdroValidateTemplateRequest:JDCloudRequest

/// Environment
@property (strong,nonatomic,nonnull)  Environment*  environment;
/// 模板
@property (strong,nonatomic,nonnull)  NSObject*  template;
/// 可取值:(validateTemplate (检测模板), validateStack (检测模板和environment)) 默认validateTemplate
@property (strong,nonatomic,nonnull)  NSString*  validateMode;
-(id) initWithRegion:(NSString *)regionId
environment:(Environment*)environment
template:(NSObject*)template
validateMode:(NSString*)validateMode;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
environment:(Environment*)environment
template:(NSObject*)template
validateMode:(NSString*)validateMode;

@end

@interface JdroDescribeStacksResult : NSObject
/// List
 @property (strong,nonatomic,nonnull)  NSArray<StackOut*>*  list;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithList:(NSArray<StackOut*>*) list

    totalCount:(NSNumber*)totalCount;
@end

@interface JdroDescribeStacksResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroDescribeStacksResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroDescribeStacksResult*) result;
@end

@interface JdroExecuteChangeSetResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JdroDescribeStackResourcesResult : NSObject
/// List
 @property (strong,nonatomic,nonnull)  NSArray<ResourceOut*>*  list;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithList:(NSArray<ResourceOut*>*) list

    totalCount:(NSNumber*)totalCount;
@end

@interface JdroDescribeStackResourcesResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroDescribeStackResourcesResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroDescribeStackResourcesResult*) result;
@end

@interface JdroDescribeStackEventsResult : NSObject
/// List
 @property (strong,nonatomic,nonnull)  NSArray<EventOut*>*  list;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithList:(NSArray<EventOut*>*) list

    totalCount:(NSNumber*)totalCount;
@end

@interface JdroDescribeStackResult : NSObject
/// Stack
 @property (strong,nonatomic,nonnull)  StackOut*  stack;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStack:(StackOut*) stack;
@end

@interface JdroCreateStackRequest:JDCloudRequest

/// Environment
@property (strong,nonatomic,nonnull)  Environment*  environment;
/// 模板, JSON对象
@property (strong,nonatomic,nonnull)  NSObject*  template;
-(id) initWithRegion:(NSString *)regionId
environment:(Environment*)environment
template:(NSObject*)template;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
environment:(Environment*)environment
template:(NSObject*)template;

@end

@interface JdroDescribeStackEventsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroDescribeStackEventsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroDescribeStackEventsResult*) result;
@end

@interface JdroCreateStackResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroCreateStackResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroCreateStackResult*) result;
@end

@interface JdroDescribeStackResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroDescribeStackResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroDescribeStackResult*) result;
@end

@interface JdroCreateChangeSetResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroCreateChangeSetResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroCreateChangeSetResult*) result;
@end

@interface JdroDeleteStackResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroDeleteStackResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroDeleteStackResult*) result;
@end

@interface JdroDescribeStackTemplateResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroDescribeStackTemplateResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroDescribeStackTemplateResult*) result;
@end

@interface JdroExecuteChangeSetResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroExecuteChangeSetResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroExecuteChangeSetResult*) result;
@end

@interface JdroCreateChangeSetRequest:JDCloudRequest

/// Environment
@property (strong,nonatomic,nonnull)  Environment*  environment;
/// 模板, JSON对象
@property (strong,nonatomic,nonnull)  NSObject*  template;
/// 资源栈 ID
@property (strong,nonatomic,nonnull)  NSString*  stackId;
-(id) initWithRegion:(NSString *)regionId
environment:(Environment*)environment
template:(NSObject*)template
stackId:(NSString*)stackId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
environment:(Environment*)environment
template:(NSObject*)template
stackId:(NSString*)stackId;

@end

@interface JdroDescribeResourceTypeSpecificationResult : NSObject
/// PropertyTypes
 @property (strong,nonatomic,nonnull)  NSMutableDictionary<NSString*,PropertyTypes*>*  propertyTypes;
/// ResourceTypes
 @property (strong,nonatomic,nonnull)  ResourceTypes*  resourceTypes;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithPropertyTypes:(NSMutableDictionary<NSString*,PropertyTypes*>*) propertyTypes

    resourceTypes:(ResourceTypes*)resourceTypes;
@end

@interface JdroDescribeResourceTypeSpecificationResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroDescribeResourceTypeSpecificationResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroDescribeResourceTypeSpecificationResult*) result;
@end

@interface JdroDescribeResourceTypeListResult : NSObject
/// ResourceTypeList
 @property (strong,nonatomic,nonnull)  NSArray<DescribeResourceTypeListItem*>*  resourceTypeList;
/// TotalCount
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithResourceTypeList:(NSArray<DescribeResourceTypeListItem*>*) resourceTypeList

    totalCount:(NSNumber*)totalCount;
@end

@interface JdroDescribeResourceTypeListResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JdroDescribeResourceTypeListResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JdroDescribeResourceTypeListResult*) result;
@end

#endif /* JdroApiModel_h */
