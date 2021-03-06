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





Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

 

#ifndef PipelineModel_h
#define PipelineModel_h

@interface NameLabelPair :NSObject

/// 实际使用的名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 显示只用的名称
@property (strong,nonatomic,nonnull)  NSString*  label;


-(id) initWithName:(NSString*) name
    label:(NSString*)label;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ActionTypeId :NSObject

/// 源提供商
@property (strong,nonatomic,nonnull)  NSString*  category;

/// 源提供商归属
@property (strong,nonatomic,nonnull)  NSString*  owner;

/// 操作提供商
@property (strong,nonatomic,nonnull)  NSString*  provider;

/// 版本
@property (strong,nonatomic,nonnull)  NSNumber*  version;


-(id) initWithCategory:(NSString*) category
    owner:(NSString*)owner
    provider:(NSString*)provider
    version:(NSNumber*)version;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ActionLink :NSObject

/// 超链接显示的名称
@property (strong,nonatomic,nonnull)  NSString*  label;

/// 超链接的url
@property (strong,nonatomic,nonnull)  NSString*  url;


-(id) initWithLabel:(NSString*) label
    url:(NSString*)url;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface PipelineParams :NSObject

/// 流水线的名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 流水线定义的json字符串。因为配置灵活且会支持用户直接上传json配置文件的方式配置，所以不对其在提交和显示的时候做解析或反解析。
@property (strong,nonatomic,nonnull)  NSString*  content;

/// 创建方式， 值为CREATE_DEMO时，为创建流水线demo
@property (strong,nonatomic,nonnull)  NSString*  method;


-(id) initWithName:(NSString*) name
    content:(NSString*)content
    method:(NSString*)method;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SimplePipeline :NSObject

/// 流水线的uuid
@property (strong,nonatomic,nonnull)  NSString*  uuid;

/// 流水线名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 开始执行流水线的时间
@property (strong,nonatomic,nonnull)  NSNumber*  startedAt;

/// 最近一次执行的状态(数据结构待商定)
@property (strong,nonatomic,nonnull)  NSString*  latestStatus;

/// 最新一次执行的实例ID
@property (strong,nonatomic,nonnull)  NSString*  latestInstanceUuid;


-(id) initWithUuid:(NSString*) uuid
    name:(NSString*)name
    startedAt:(NSNumber*)startedAt
    latestStatus:(NSString*)latestStatus
    latestInstanceUuid:(NSString*)latestInstanceUuid;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Pipeline :NSObject

/// 流水线的uuid
@property (strong,nonatomic,nonnull)  NSString*  uuid;

/// 流水线创建时间戳
@property (strong,nonatomic,nonnull)  NSNumber*  createdAt;

/// 流水线最后一次更新时间戳
@property (strong,nonatomic,nonnull)  NSNumber*  updatedAt;

/// 流水线的名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 流水线定义的json字符串。因为配置灵活且会支持用户直接上传json配置文件的方式配置，所以不对其在提交和显示的时候做解析或反解析。
@property (strong,nonatomic,nonnull)  NSString*  content;


-(id) initWithUuid:(NSString*) uuid
    createdAt:(NSNumber*)createdAt
    updatedAt:(NSNumber*)updatedAt
    name:(NSString*)name
    content:(NSString*)content;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ActionLinks :NSObject

/// Provider
@property (strong,nonatomic,nonnull)  ActionLink*  provider;

/// Status
@property (strong,nonatomic,nonnull)  ActionLink*  status;

/// Detail
@property (strong,nonatomic,nonnull)  ActionLink*  detail;


-(id) initWithProvider:(ActionLink*) provider
    status:(ActionLink*)status
    detail:(ActionLink*)detail;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface PipelineAction :NSObject

/// 操作(action)的UUID
@property (strong,nonatomic,nonnull)  NSString*  uuid;

/// 操作(action)的名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 操作(action)创建时间
@property (strong,nonatomic,nonnull)  NSNumber*  createdAt;

/// 操作(action)开始时间
@property (strong,nonatomic,nonnull)  NSNumber*  startedAt;

/// 操作(action)结束时间
@property (strong,nonatomic,nonnull)  NSNumber*  doneAt;

/// 操作(action)当前状态
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// 操作(action)当前状态说明
@property (strong,nonatomic,nonnull)  NSString*  statusHuman;

/// Links
@property (strong,nonatomic,nonnull)  ActionLinks*  links;

/// ActionTypeId
@property (strong,nonatomic,nonnull)  ActionTypeId*  actionTypeId;


-(id) initWithUuid:(NSString*) uuid
    name:(NSString*)name
    createdAt:(NSNumber*)createdAt
    startedAt:(NSNumber*)startedAt
    doneAt:(NSNumber*)doneAt
    status:(NSNumber*)status
    statusHuman:(NSString*)statusHuman
    links:(ActionLinks*)links
    actionTypeId:(ActionTypeId*)actionTypeId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface PipelineStage :NSObject

/// 阶段(stage)的UUID
@property (strong,nonatomic,nonnull)  NSString*  uuid;

/// 阶段(stage)的名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 阶段(stage)创建时间
@property (strong,nonatomic,nonnull)  NSNumber*  createdAt;

/// 阶段(stage)开始时间
@property (strong,nonatomic,nonnull)  NSNumber*  startedAt;

/// 阶段(stage)结束时间
@property (strong,nonatomic,nonnull)  NSNumber*  doneAt;

/// 阶段(stage)当前状态
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// 阶段(stage)当前状态说明
@property (strong,nonatomic,nonnull)  NSString*  statusHuman;

/// 第几个阶段(stage)
@property (strong,nonatomic,nonnull)  NSNumber*  position;

/// Actions
@property (strong,nonatomic,nonnull)  NSArray<PipelineAction*>*  actions;


-(id) initWithUuid:(NSString*) uuid
    name:(NSString*)name
    createdAt:(NSNumber*)createdAt
    startedAt:(NSNumber*)startedAt
    doneAt:(NSNumber*)doneAt
    status:(NSNumber*)status
    statusHuman:(NSString*)statusHuman
    position:(NSNumber*)position
    actions:(NSArray<PipelineAction*>*)actions;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface PipelineInstance :NSObject

/// 某一次流水线执行的uuid
@property (strong,nonatomic,nonnull)  NSString*  uuid;

/// 开始执行流水线的时间
@property (strong,nonatomic,nonnull)  NSNumber*  startedAt;

/// 结束执行流水线的时间
@property (strong,nonatomic,nonnull)  NSNumber*  doneAt;

/// 执行持续的时间(ms)
@property (strong,nonatomic,nonnull)  NSNumber*  durationMs;

/// 执行状态
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// 执行状态描述
@property (strong,nonatomic,nonnull)  NSString*  statusHuman;

/// 执行时环境变量
@property (strong,nonatomic,nonnull)  NSString*  env;

/// 失败原因
@property (strong,nonatomic,nonnull)  NSNumber*  failureReason;

/// 失败原因描述
@property (strong,nonatomic,nonnull)  NSString*  falseilureReasonHuman;

/// Stages
@property (strong,nonatomic,nonnull)  NSArray<PipelineStage*>*  stages;


-(id) initWithUuid:(NSString*) uuid
    startedAt:(NSNumber*)startedAt
    doneAt:(NSNumber*)doneAt
    durationMs:(NSNumber*)durationMs
    status:(NSNumber*)status
    statusHuman:(NSString*)statusHuman
    env:(NSString*)env
    failureReason:(NSNumber*)failureReason
    falseilureReasonHuman:(NSString*)falseilureReasonHuman
    stages:(NSArray<PipelineStage*>*)stages;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* PipelineModel_h */
