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

AccessPoint
接入点相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef JcqApiModel_h
#define JcqApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKCommon/JDCloudOCSDKCommon.h>
#import <JDCloudOCSDKJcq/JcqModel.h>


@interface JcqDescribeSubscriptionsRequest:JDCloudRequest

/// consumerGroupFilter，consumerGroupId的过滤条件
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupFilter;
/// 分页大小；默认为10；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 页码
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
consumerGroupFilter:(NSString*)consumerGroupFilter
pageSize:(NSNumber*)pageSize
pageNumber:(NSNumber*)pageNumber
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
consumerGroupFilter:(NSString*)consumerGroupFilter
pageSize:(NSNumber*)pageSize
pageNumber:(NSNumber*)pageNumber
topicName:(NSString*)topicName;

@end

@interface JcqCleanMessagesRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

@end

@interface JcqDeleteSubscriptionRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

@end

@interface JcqCreateSubscriptionRequest:JDCloudRequest

/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
/// 消息隐藏时间单位秒
@property (strong,nonatomic,nonnull)  NSNumber*  messageInvisibleTimeInSeconds;
/// 是否开启死信队列[true, false]
@property (strong,nonatomic,nonnull)  NSNumber*  dlqEnable;
/// 最大重试次数dlqEnable为true必填,范围[0,16]
@property (strong,nonatomic,nonnull)  NSNumber*  maxRetryTimes;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
consumerGroupId:(NSString*)consumerGroupId
messageInvisibleTimeInSeconds:(NSNumber*)messageInvisibleTimeInSeconds
dlqEnable:(NSNumber*)dlqEnable
maxRetryTimes:(NSNumber*)maxRetryTimes
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
consumerGroupId:(NSString*)consumerGroupId
messageInvisibleTimeInSeconds:(NSNumber*)messageInvisibleTimeInSeconds
dlqEnable:(NSNumber*)dlqEnable
maxRetryTimes:(NSNumber*)maxRetryTimes
topicName:(NSString*)topicName;

@end

@interface JcqModifySubscriptionAttributeRequest:JDCloudRequest

/// 最大重试次数
@property (strong,nonatomic,nonnull)  NSNumber*  maxRetryTimes;
/// 消息ack超时时间
@property (strong,nonatomic,nonnull)  NSNumber*  messageInvisibleTimeInSeconds;
/// 是否开启死信队列[true, false]
@property (strong,nonatomic,nonnull)  NSNumber*  dlqEnable;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
-(id) initWithRegion:(NSString *)regionId
maxRetryTimes:(NSNumber*)maxRetryTimes
messageInvisibleTimeInSeconds:(NSNumber*)messageInvisibleTimeInSeconds
dlqEnable:(NSNumber*)dlqEnable
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
maxRetryTimes:(NSNumber*)maxRetryTimes
messageInvisibleTimeInSeconds:(NSNumber*)messageInvisibleTimeInSeconds
dlqEnable:(NSNumber*)dlqEnable
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

@end

@interface JcqResetConsumeOffsetRequest:JDCloudRequest

/// 时间
@property (strong,nonatomic,nonnull)  NSString*  time;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
-(id) initWithRegion:(NSString *)regionId
time:(NSString*)time
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
time:(NSString*)time
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

@end

@interface JcqDescribeSubscriptionRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

@end

@interface JcqResendDeadLettersRequest:JDCloudRequest

/// messageIds,多个逗号隔开，不传该值就是重发所有死信
@property (strong,nonatomic,nonnull)  NSString*  messageIds;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
-(id) initWithRegion:(NSString *)regionId
messageIds:(NSString*)messageIds
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
messageIds:(NSString*)messageIds
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

@end

@interface JcqListDeadLettersRequest:JDCloudRequest

/// 页码
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为10；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 开始时间
@property (strong,nonatomic,nonnull)  NSString*  startTime;
/// 结束时间
@property (strong,nonatomic,nonnull)  NSString*  endTime;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
-(id) initWithRegion:(NSString *)regionId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
startTime:(NSString*)startTime
endTime:(NSString*)endTime
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
startTime:(NSString*)startTime
endTime:(NSString*)endTime
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

@end

@interface JcqDeleteDeadLettersRequest:JDCloudRequest

/// messageIds,多个逗号隔开，不传该值就是删除所有的死信
@property (strong,nonatomic,nonnull)  NSString*  messageIds;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// consumerGroupId
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
-(id) initWithRegion:(NSString *)regionId
messageIds:(NSString*)messageIds
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
messageIds:(NSString*)messageIds
topicName:(NSString*)topicName
consumerGroupId:(NSString*)consumerGroupId;

@end

@interface JcqDeleteDeadLettersResult : NSObject
/// 被删除的消息的id列表
 @property (strong,nonatomic,nonnull)  NSArray<NSString*>*  messageIds;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMessageIds:(NSArray<NSString*>*) messageIds;
@end

@interface JcqDescribeDeadLetterNumbersRequest:JDCloudRequest

/// consumerGroupId为空则显示该用户所有订阅关系里的死信数量
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
/// 页码
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为10；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
-(id) initWithRegion:(NSString *)regionId
consumerGroupId:(NSString*)consumerGroupId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
consumerGroupId:(NSString*)consumerGroupId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize;

@end

@interface JcqDescribeDeadLetterNumbersWithTopicRequest:JDCloudRequest

/// consumerGroupId为空则显示该Topic下所有订阅关系里的死信数量
@property (strong,nonatomic,nonnull)  NSString*  consumerGroupId;
/// 页码
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// 分页大小；默认为10；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
consumerGroupId:(NSString*)consumerGroupId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
consumerGroupId:(NSString*)consumerGroupId
pageNumber:(NSNumber*)pageNumber
pageSize:(NSNumber*)pageSize
topicName:(NSString*)topicName;

@end

@interface JcqResendDeadLettersResult : NSObject
/// 重发成功的消息id列表
 @property (strong,nonatomic,nonnull)  NSArray<NSString*>*  messageIds;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMessageIds:(NSArray<NSString*>*) messageIds;
@end

@interface JcqDeleteTopicRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName;

@end

@interface JcqDescribeTopicRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName;

@end

@interface JcqCreateTopicRequest:JDCloudRequest

/// topic名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// 类型，[normal,global_order]
@property (strong,nonatomic,nonnull)  NSString*  type;
/// 描述，长度不大于255
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName
type:(NSString*)type
descriptionValue:(NSString*)descriptionValue;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName
type:(NSString*)type
descriptionValue:(NSString*)descriptionValue;

@end

@interface JcqDescribeConsumerGroupIdsResult : NSObject
/// consumerGroupId列表
 @property (strong,nonatomic,nonnull)  NSArray<NSString*>*  consumerGroupIds;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithConsumerGroupIds:(NSArray<NSString*>*) consumerGroupIds;
@end

@interface JcqAddPermissionRequest:JDCloudRequest

/// 权限类型，[PUB,SUB,PUBSUB]
@property (strong,nonatomic,nonnull)  NSString*  permission;
/// 目标用户UserId
@property (strong,nonatomic,nonnull)  NSString*  targetUserId;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
permission:(NSString*)permission
targetUserId:(NSString*)targetUserId
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
permission:(NSString*)permission
targetUserId:(NSString*)targetUserId
topicName:(NSString*)topicName;

@end

@interface JcqRemovePermissionRequest:JDCloudRequest

/// 权限类型, [PUB, SUB, PUBSUB]
@property (strong,nonatomic,nonnull)  NSString*  permission;
/// 目标用户UserId
@property (strong,nonatomic,nonnull)  NSString*  targetUserId;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
permission:(NSString*)permission
targetUserId:(NSString*)targetUserId
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
permission:(NSString*)permission
targetUserId:(NSString*)targetUserId
topicName:(NSString*)topicName;

@end

@interface JcqDescribePermissionRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName;

@end

@interface JcqDescribeMessageRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// message Id
@property (strong,nonatomic,nonnull)  NSString*  messageId;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName
messageId:(NSString*)messageId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName
messageId:(NSString*)messageId;

@end

@interface JcqDescribeMessagesByBusinessIdRequest:JDCloudRequest

/// business id
@property (strong,nonatomic,nonnull)  NSString*  businessId;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
businessId:(NSString*)businessId
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
businessId:(NSString*)businessId
topicName:(NSString*)topicName;

@end

@interface JcqDescribeMessageTraceRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
/// message Id
@property (strong,nonatomic,nonnull)  NSString*  messageId;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName
messageId:(NSString*)messageId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName
messageId:(NSString*)messageId;

@end

@interface JcqDescribeMessagesRequest:JDCloudRequest

/// 开始时间
@property (strong,nonatomic,nonnull)  NSString*  startTime;
/// 结束时间
@property (strong,nonatomic,nonnull)  NSString*  endTime;
/// 分页大小；默认为10；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 页码
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
startTime:(NSString*)startTime
endTime:(NSString*)endTime
pageSize:(NSNumber*)pageSize
pageNumber:(NSNumber*)pageNumber
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
startTime:(NSString*)startTime
endTime:(NSString*)endTime
pageSize:(NSNumber*)pageSize
pageNumber:(NSNumber*)pageNumber
topicName:(NSString*)topicName;

@end

@interface JcqDescribeAccessPointRequest:JDCloudRequest

/// topic 名称
@property (strong,nonatomic,nonnull)  NSString*  topicName;
-(id) initWithRegion:(NSString *)regionId
topicName:(NSString*)topicName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
topicName:(NSString*)topicName;

@end

@interface JcqDeleteSubscriptionResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqCleanMessagesResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqDeleteSubscriptionResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDeleteSubscriptionResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDeleteSubscriptionResult*) result;
@end

@interface JcqDescribeSubscriptionResult : NSObject
/// 订阅详情
 @property (strong,nonatomic,nonnull)  Subscription*  subscription;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithSubscription:(Subscription*) subscription;
@end

@interface JcqDescribeSubscriptionResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeSubscriptionResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeSubscriptionResult*) result;
@end

@interface JcqResetConsumeOffsetResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqModifySubscriptionAttributeResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqModifySubscriptionAttributeResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqModifySubscriptionAttributeResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqModifySubscriptionAttributeResult*) result;
@end

@interface JcqResetConsumeOffsetResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqResetConsumeOffsetResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqResetConsumeOffsetResult*) result;
@end

@interface JcqDescribeSubscriptionsResult : NSObject
/// Subscriptions
 @property (strong,nonatomic,nonnull)  NSArray<Subscription*>*  subscriptions;
/// 订阅关系的总数
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithSubscriptions:(NSArray<Subscription*>*) subscriptions

    totalCount:(NSNumber*)totalCount;
@end

@interface JcqCreateSubscriptionResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqCreateSubscriptionResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqCreateSubscriptionResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqCreateSubscriptionResult*) result;
@end

@interface JcqDescribeSubscriptionsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeSubscriptionsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeSubscriptionsResult*) result;
@end

@interface JcqCleanMessagesResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqCleanMessagesResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqCleanMessagesResult*) result;
@end

@interface JcqDescribeDeadLetterNumbersResult : NSObject
/// DeadLetterNumbers
 @property (strong,nonatomic,nonnull)  NSArray<DeadLetterNumber*>*  deadLetterNumbers;
/// 总数
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithDeadLetterNumbers:(NSArray<DeadLetterNumber*>*) deadLetterNumbers

    totalCount:(NSNumber*)totalCount;
@end

@interface JcqDeleteDeadLettersResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDeleteDeadLettersResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDeleteDeadLettersResult*) result;
@end

@interface JcqDescribeDeadLetterNumbersWithTopicResult : NSObject
/// DeadLetterNumbers
 @property (strong,nonatomic,nonnull)  NSArray<DeadLetterNumber*>*  deadLetterNumbers;
/// 总数
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithDeadLetterNumbers:(NSArray<DeadLetterNumber*>*) deadLetterNumbers

    totalCount:(NSNumber*)totalCount;
@end

@interface JcqDescribeDeadLetterNumbersResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeDeadLetterNumbersResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeDeadLetterNumbersResult*) result;
@end

@interface JcqDescribeDeadLetterNumbersWithTopicResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeDeadLetterNumbersWithTopicResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeDeadLetterNumbersWithTopicResult*) result;
@end

@interface JcqListDeadLettersResult : NSObject
/// DeadLetters
 @property (strong,nonatomic,nonnull)  NSArray<DeadLetter*>*  deadLetters;
/// 总数
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithDeadLetters:(NSArray<DeadLetter*>*) deadLetters

    totalCount:(NSNumber*)totalCount;
@end

@interface JcqListDeadLettersResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqListDeadLettersResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqListDeadLettersResult*) result;
@end

@interface JcqResendDeadLettersResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqResendDeadLettersResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqResendDeadLettersResult*) result;
@end

@interface JcqDeleteTopicResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqDescribeTopicsResult : NSObject
/// Topics
 @property (strong,nonatomic,nonnull)  NSArray<Topic*>*  topics;
/// 总数
 @property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithTopics:(NSArray<Topic*>*) topics

    totalCount:(NSNumber*)totalCount;
@end

@interface JcqDescribeTopicResult : NSObject
/// Topic
 @property (strong,nonatomic,nonnull)  Topic*  topic;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithTopic:(Topic*) topic;
@end

@interface JcqDescribeTopicResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeTopicResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeTopicResult*) result;
@end

@interface JcqDescribeTopicsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeTopicsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeTopicsResult*) result;
@end

@interface JcqCreateTopicResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqDescribeTopicsRequest:JDCloudRequest

/// 分页大小；默认为10；取值范围[10, 100]
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// 页码
@property (strong,nonatomic,nonnull)  NSNumber*  pageNumber;
/// topic名称的过滤条件，大小写不敏感
@property (strong,nonatomic,nonnull)  NSString*  topicFilter;
/// 标签过滤条件
@property (strong,nonatomic,nonnull)  NSArray<TagFilter*>*  tagFilters;
-(id) initWithRegion:(NSString *)regionId
pageSize:(NSNumber*)pageSize
pageNumber:(NSNumber*)pageNumber
topicFilter:(NSString*)topicFilter
tagFilters:(NSArray<TagFilter*>*)tagFilters;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pageSize:(NSNumber*)pageSize
pageNumber:(NSNumber*)pageNumber
topicFilter:(NSString*)topicFilter
tagFilters:(NSArray<TagFilter*>*)tagFilters;

@end

@interface JcqCreateTopicResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqCreateTopicResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqCreateTopicResult*) result;
@end

@interface JcqDeleteTopicResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDeleteTopicResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDeleteTopicResult*) result;
@end

@interface JcqDescribeConsumerGroupIdsRequest:JDCloudRequest

@end

@interface JcqDescribeConsumerGroupIdsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeConsumerGroupIdsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeConsumerGroupIdsResult*) result;
@end

@interface JcqDescribePermissionResult : NSObject
/// Permissions
 @property (strong,nonatomic,nonnull)  NSArray<Permission*>*  permissions;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithPermissions:(NSArray<Permission*>*) permissions;
@end

@interface JcqDescribePermissionResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribePermissionResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribePermissionResult*) result;
@end

@interface JcqRemovePermissionResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqAddPermissionResult : NSObject

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
@end

@interface JcqAddPermissionResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqAddPermissionResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqAddPermissionResult*) result;
@end

@interface JcqRemovePermissionResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqRemovePermissionResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqRemovePermissionResult*) result;
@end

@interface JcqDescribeMessagesByBusinessIdResult : NSObject
/// Messages
 @property (strong,nonatomic,nonnull)  NSArray<Message*>*  messages;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMessages:(NSArray<Message*>*) messages;
@end

@interface JcqDescribeMessagesByBusinessIdResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeMessagesByBusinessIdResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeMessagesByBusinessIdResult*) result;
@end

@interface JcqDescribeMessagesResult : NSObject
/// Messages
 @property (strong,nonatomic,nonnull)  NSArray<Message*>*  messages;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMessages:(NSArray<Message*>*) messages;
@end

@interface JcqDescribeMessagesResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeMessagesResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeMessagesResult*) result;
@end

@interface JcqDescribeMessageResult : NSObject
/// 消息详情
 @property (strong,nonatomic,nonnull)  Message*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMessage:(Message*) message;
@end

@interface JcqDescribeMessageTraceResult : NSObject
/// 消息轨迹信息
 @property (strong,nonatomic,nonnull)  MessageTraceInfo*  messageTraceInfo;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithMessageTraceInfo:(MessageTraceInfo*) messageTraceInfo;
@end

@interface JcqDescribeMessageTraceResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeMessageTraceResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeMessageTraceResult*) result;
@end

@interface JcqDescribeMessageResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeMessageResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeMessageResult*) result;
@end

@interface JcqDescribeAccessPointResult : NSObject
/// AccessPoint
 @property (strong,nonatomic,nonnull)  AccessPoint*  accessPoint;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithAccessPoint:(AccessPoint*) accessPoint;
@end

@interface JcqDescribeAccessPointResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property JcqDescribeAccessPointResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(JcqDescribeAccessPointResult*) result;
@end

#endif /* JcqApiModel_h */
