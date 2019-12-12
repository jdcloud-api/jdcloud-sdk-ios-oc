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

 

#ifndef StreamcomputerModel_h
#define StreamcomputerModel_h

@interface Namespace :NSObject

/// Id
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// Name
@property (strong,nonatomic,nonnull)  NSString*  name;

/// Pods
@property (strong,nonatomic,nonnull)  NSString*  pods;

/// Type
@property (strong,nonatomic,nonnull)  NSString*  type;

/// TypeValue
@property (strong,nonatomic,nonnull)  NSString*  typeValue;

/// Deleted
@property (strong,nonatomic,nonnull)  NSNumber*  deleted;

/// CreateTime
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// UpdateTime
@property (strong,nonatomic,nonnull)  NSString*  updateTime;

/// UserName
@property (strong,nonatomic,nonnull)  NSString*  userName;

/// Status
@property (strong,nonatomic,nonnull)  NSString*  status;

/// SourceId
@property (strong,nonatomic,nonnull)  NSString*  sourceId;

/// ResourceId
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// PodsUpdateTime
@property (strong,nonatomic,nonnull)  NSString*  podsUpdateTime;


-(id) initWithId:(NSNumber*) idValue
    name:(NSString*)name
    pods:(NSString*)pods
    type:(NSString*)type
    typeValue:(NSString*)typeValue
    deleted:(NSNumber*)deleted
    createTime:(NSString*)createTime
    updateTime:(NSString*)updateTime
    userName:(NSString*)userName
    status:(NSString*)status
    sourceId:(NSString*)sourceId
    resourceId:(NSString*)resourceId
    podsUpdateTime:(NSString*)podsUpdateTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface OkInfo :NSObject

/// Status
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// 状态信息
@property (strong,nonatomic,nonnull)  NSString*  message;


-(id) initWithStatus:(NSNumber*) status
    message:(NSString*)message;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface StorageParameter :NSObject

/// Id
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// Uid
@property (strong,nonatomic,nonnull)  NSString*  uid;

/// PKey
@property (strong,nonatomic,nonnull)  NSString*  pKey;

/// PValue
@property (strong,nonatomic,nonnull)  NSString*  pValue;

/// StorageId
@property (strong,nonatomic,nonnull)  NSNumber*  storageId;

/// Deleted
@property (strong,nonatomic,nonnull)  NSString*  deleted;

/// CreateTime
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// UpdateTime
@property (strong,nonatomic,nonnull)  NSString*  updateTime;


-(id) initWithId:(NSNumber*) idValue
    uid:(NSString*)uid
    pKey:(NSString*)pKey
    pValue:(NSString*)pValue
    storageId:(NSNumber*)storageId
    deleted:(NSString*)deleted
    createTime:(NSString*)createTime
    updateTime:(NSString*)updateTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface JobStr :NSObject

/// NamespaceId
@property (strong,nonatomic,nonnull)  NSString*  namespaceId;

/// Name
@property (strong,nonatomic,nonnull)  NSString*  name;

/// Description
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// ResourceConsume
@property (strong,nonatomic,nonnull)  NSNumber*  resourceConsume;

/// Id
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// Uid
@property (strong,nonatomic,nonnull)  NSString*  uid;

/// Status
@property (strong,nonatomic,nonnull)  NSString*  status;

/// Duration
@property (strong,nonatomic,nonnull)  NSNumber*  duration;

/// AppName
@property (strong,nonatomic,nonnull)  NSString*  appName;

/// Deleted
@property (strong,nonatomic,nonnull)  NSString*  deleted;

/// CreateTime
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// UpdateTime
@property (strong,nonatomic,nonnull)  NSString*  updateTime;

/// UserName
@property (strong,nonatomic,nonnull)  NSString*  userName;

/// SqlStatement
@property (strong,nonatomic,nonnull)  NSString*  sqlStatement;

/// JobType
@property (strong,nonatomic,nonnull)  NSString*  jobType;


-(id) initWithNamespaceId:(NSString*) namespaceId
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue
    resourceConsume:(NSNumber*)resourceConsume
    idValue:(NSNumber*)idValue
    uid:(NSString*)uid
    status:(NSString*)status
    duration:(NSNumber*)duration
    appName:(NSString*)appName
    deleted:(NSString*)deleted
    createTime:(NSString*)createTime
    updateTime:(NSString*)updateTime
    userName:(NSString*)userName
    sqlStatement:(NSString*)sqlStatement
    jobType:(NSString*)jobType;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Storage :NSObject

/// Id
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// Name
@property (strong,nonatomic,nonnull)  NSString*  name;

/// Uid
@property (strong,nonatomic,nonnull)  NSString*  uid;

/// Type
@property (strong,nonatomic,nonnull)  NSString*  type;

/// 这个参数有input和ouput两个可选值，取决于创建输入还是输出
@property (strong,nonatomic,nonnull)  NSString*  storageType;

/// UserName
@property (strong,nonatomic,nonnull)  NSString*  userName;

/// CreateTime
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// UpdateTime
@property (strong,nonatomic,nonnull)  NSString*  updateTime;

/// NamespaceId
@property (strong,nonatomic,nonnull)  NSString*  namespaceId;

/// Deleted
@property (strong,nonatomic,nonnull)  NSString*  deleted;

/// Storage的具体参数。&lt;br&gt;1、创建源类型为流式数据输入时，则需要传输source，topicName，duration，format，delimiter，schema 。&lt;br&gt; 2、创建输出如果输出位置为流数据总线，需要传topicName，format，delimiter，ossFlag，bucketName，directory，objectName。&lt;br&gt;3、创建输出如果输出位置为数据计算服务，则需要传输database，table，ossFlag，bucketName，directory，objectName。
@property (strong,nonatomic,nonnull)  NSArray<StorageParameter*>*  storageParameterList;


-(id) initWithId:(NSNumber*) idValue
    name:(NSString*)name
    uid:(NSString*)uid
    type:(NSString*)type
    storageType:(NSString*)storageType
    userName:(NSString*)userName
    createTime:(NSString*)createTime
    updateTime:(NSString*)updateTime
    namespaceId:(NSString*)namespaceId
    deleted:(NSString*)deleted
    storageParameterList:(NSArray<StorageParameter*>*)storageParameterList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* StreamcomputerModel_h */
