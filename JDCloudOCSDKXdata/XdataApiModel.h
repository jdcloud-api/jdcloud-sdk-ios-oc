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

table
API related to XDATA-DW table

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef XdataApiModel_h
#define XdataApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKXdata/XdataModel.h>


@interface XdataGetRasQueryLogRequest:JDCloudRequest

/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 查询id
@property (strong,nonatomic,nonnull)  NSString*  queryId;
-(id) initWithRegion:(NSString *)regionId
userName:(NSString*)userName
queryId:(NSString*)queryId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
userName:(NSString*)userName
queryId:(NSString*)queryId;

@end

@interface XdataGetRasQueryResultResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message;
@end

@interface XdataExecutePySparkQueryResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  NSNumber*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(NSNumber*)data;
@end

@interface XdataGetRasQueryLogResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message;
@end

@interface XdataGetRasQueryLogResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataGetRasQueryLogResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataGetRasQueryLogResult*) result;
@end

@interface XdataGetPySparkExecuteResultResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message;
@end

@interface XdataCancelPySparkJobResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message;
@end

@interface XdataCancelPySparkJobResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataCancelPySparkJobResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataCancelPySparkJobResult*) result;
@end

@interface XdataGetRasQueryResultRequest:JDCloudRequest

/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 查询id
@property (strong,nonatomic,nonnull)  NSString*  queryId;
-(id) initWithRegion:(NSString *)regionId
userName:(NSString*)userName
queryId:(NSString*)queryId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
userName:(NSString*)userName
queryId:(NSString*)queryId;

@end

@interface XdataExecuteRasQueryRequest:JDCloudRequest

/// 数据库名称
@property (strong,nonatomic,nonnull)  NSString*  databaseName;
/// sql脚本
@property (strong,nonatomic,nonnull)  NSString*  sql;
/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 队列名称
@property (strong,nonatomic,nonnull)  NSString*  queueName;
/// 资源名称
@property (strong,nonatomic,nonnull)  NSString*  source;
/// 回调地址名称
@property (strong,nonatomic,nonnull)  NSString*  callBackURL;
/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 实例拥有者名称
@property (strong,nonatomic,nonnull)  NSString*  instanceOwnerName;
/// 是否需要解释
@property (strong,nonatomic,nonnull)  NSString*  isExplain;
-(id) initWithRegion:(NSString *)regionId
databaseName:(NSString*)databaseName
sql:(NSString*)sql
userName:(NSString*)userName
queueName:(NSString*)queueName
source:(NSString*)source
callBackURL:(NSString*)callBackURL
instanceName:(NSString*)instanceName
instanceOwnerName:(NSString*)instanceOwnerName
isExplain:(NSString*)isExplain;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
databaseName:(NSString*)databaseName
sql:(NSString*)sql
userName:(NSString*)userName
queueName:(NSString*)queueName
source:(NSString*)source
callBackURL:(NSString*)callBackURL
instanceName:(NSString*)instanceName
instanceOwnerName:(NSString*)instanceOwnerName
isExplain:(NSString*)isExplain;

@end

@interface XdataExecuteRasQueryResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  NSNumber*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(NSNumber*)data;
@end

@interface XdataCancelPySparkJobRequest:JDCloudRequest

/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 查询id
@property (strong,nonatomic,nonnull)  NSString*  queryId;
-(id) initWithRegion:(NSString *)regionId
userName:(NSString*)userName
queryId:(NSString*)queryId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
userName:(NSString*)userName
queryId:(NSString*)queryId;

@end

@interface XdataGetPySparkExecuteStateResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  NSString*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(NSString*)data;
@end

@interface XdataGetRasQueryStateRequest:JDCloudRequest

/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 查询id名称
@property (strong,nonatomic,nonnull)  NSString*  queryId;
-(id) initWithRegion:(NSString *)regionId
userName:(NSString*)userName
queryId:(NSString*)queryId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
userName:(NSString*)userName
queryId:(NSString*)queryId;

@end

@interface XdataGetPySparkExecuteStateResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataGetPySparkExecuteStateResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataGetPySparkExecuteStateResult*) result;
@end

@interface XdataExecuteRasQueryResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataExecuteRasQueryResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataExecuteRasQueryResult*) result;
@end

@interface XdataCancelRasQueryResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message;
@end

@interface XdataGetPySparkExecuteResultResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataGetPySparkExecuteResultResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataGetPySparkExecuteResultResult*) result;
@end

@interface XdataGetRasQueryStateResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  NSString*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(NSString*)data;
@end

@interface XdataGetRasQueryResultResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataGetRasQueryResultResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataGetRasQueryResultResult*) result;
@end

@interface XdataCancelRasQueryRequest:JDCloudRequest

/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 查询id
@property (strong,nonatomic,nonnull)  NSString*  queryId;
-(id) initWithRegion:(NSString *)regionId
userName:(NSString*)userName
queryId:(NSString*)queryId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
userName:(NSString*)userName
queryId:(NSString*)queryId;

@end

@interface XdataGetPySparkExecuteResultRequest:JDCloudRequest

/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 查询id
@property (strong,nonatomic,nonnull)  NSString*  queryId;
-(id) initWithRegion:(NSString *)regionId
userName:(NSString*)userName
queryId:(NSString*)queryId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
userName:(NSString*)userName
queryId:(NSString*)queryId;

@end

@interface XdataGetRasQueryStateResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataGetRasQueryStateResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataGetRasQueryStateResult*) result;
@end

@interface XdataExecutePySparkQueryRequest:JDCloudRequest

/// PySpark脚本
@property (strong,nonatomic,nonnull)  NSString*  script;
/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 实例拥有者名称
@property (strong,nonatomic,nonnull)  NSString*  instanceOwnerName;
/// 脚本类型名称
@property (strong,nonatomic,nonnull)  NSString*  scriptType;
-(id) initWithRegion:(NSString *)regionId
script:(NSString*)script
userName:(NSString*)userName
instanceName:(NSString*)instanceName
instanceOwnerName:(NSString*)instanceOwnerName
scriptType:(NSString*)scriptType;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
script:(NSString*)script
userName:(NSString*)userName
instanceName:(NSString*)instanceName
instanceOwnerName:(NSString*)instanceOwnerName
scriptType:(NSString*)scriptType;

@end

@interface XdataExecutePySparkQueryResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataExecutePySparkQueryResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataExecutePySparkQueryResult*) result;
@end

@interface XdataGetPySparkExecuteStateRequest:JDCloudRequest

/// 用户名称
@property (strong,nonatomic,nonnull)  NSString*  userName;
/// 查询id
@property (strong,nonatomic,nonnull)  NSString*  queryId;
-(id) initWithRegion:(NSString *)regionId
userName:(NSString*)userName
queryId:(NSString*)queryId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
userName:(NSString*)userName
queryId:(NSString*)queryId;

@end

@interface XdataCancelRasQueryResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataCancelRasQueryResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataCancelRasQueryResult*) result;
@end

@interface XdataDeleteDatabaseResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message;
@end

@interface XdataListDatabaseInfoResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  NSArray<DwDatabaseInfo*>*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(NSArray<DwDatabaseInfo*>*)data;
@end

@interface XdataGetDatabaseInfoResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  DwDatabase*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(DwDatabase*)data;
@end

@interface XdataDeleteDatabaseResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataDeleteDatabaseResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataDeleteDatabaseResult*) result;
@end

@interface XdataListDatabaseInfoResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataListDatabaseInfoResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataListDatabaseInfoResult*) result;
@end

@interface XdataGetDatabaseInfoRequest:JDCloudRequest

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 数据库名
@property (strong,nonatomic,nonnull)  NSString*  databaseName;
-(id) initWithRegion:(NSString *)regionId
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName;

@end

@interface XdataCreateDatabaseResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message;
@end

@interface XdataGetDatabaseInfoResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataGetDatabaseInfoResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataGetDatabaseInfoResult*) result;
@end

@interface XdataListDatabaseInfoRequest:JDCloudRequest

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
-(id) initWithRegion:(NSString *)regionId
instanceName:(NSString*)instanceName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceName:(NSString*)instanceName;

@end

@interface XdataCreateDatabaseResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataCreateDatabaseResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataCreateDatabaseResult*) result;
@end

@interface XdataCreateDatabaseRequest:JDCloudRequest

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 数据库描述信息
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;
/// 数据库名
@property (strong,nonatomic,nonnull)  NSString*  databaseName;
-(id) initWithRegion:(NSString *)regionId
instanceName:(NSString*)instanceName
descriptionValue:(NSString*)descriptionValue
databaseName:(NSString*)databaseName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceName:(NSString*)instanceName
descriptionValue:(NSString*)descriptionValue
databaseName:(NSString*)databaseName;

@end

@interface XdataDeleteDatabaseRequest:JDCloudRequest

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 数据库名
@property (strong,nonatomic,nonnull)  NSString*  databaseName;
-(id) initWithRegion:(NSString *)regionId
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName;

@end

@interface XdataListInstanceInfoRequest:JDCloudRequest

@end

@interface XdataListInstanceInfoResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  NSArray<DwInstance*>*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(NSArray<DwInstance*>*)data;
@end

@interface XdataListInstanceInfoResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataListInstanceInfoResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataListInstanceInfoResult*) result;
@end

@interface XdataCreateTableResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message;
@end

@interface XdataCreateTableResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataCreateTableResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataCreateTableResult*) result;
@end

@interface XdataGetTableInfoRequest:JDCloudRequest

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 数据库名称
@property (strong,nonatomic,nonnull)  NSString*  databaseName;
/// 数据表名
@property (strong,nonatomic,nonnull)  NSString*  tableName;
-(id) initWithRegion:(NSString *)regionId
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName
tableName:(NSString*)tableName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName
tableName:(NSString*)tableName;

@end

@interface XdataListTableInfoResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  NSArray<DwTable*>*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(NSArray<DwTable*>*)data;
@end

@interface XdataListTableInfoResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataListTableInfoResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataListTableInfoResult*) result;
@end

@interface XdataGetTableInfoResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  DwTable*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(DwTable*)data;
@end

@interface XdataGetTableInfoResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataGetTableInfoResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataGetTableInfoResult*) result;
@end

@interface XdataDeleteTableRequest:JDCloudRequest

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 数据库名称
@property (strong,nonatomic,nonnull)  NSString*  databaseName;
/// 数据表名
@property (strong,nonatomic,nonnull)  NSString*  tableName;
-(id) initWithRegion:(NSString *)regionId
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName
tableName:(NSString*)tableName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName
tableName:(NSString*)tableName;

@end

@interface XdataDeleteTableResult : NSObject
/// Status
 @property (strong,nonatomic,nonnull)  NSNumber*  status;
/// Message
 @property (strong,nonatomic,nonnull)  NSString*  message;
/// Data
 @property (strong,nonatomic,nonnull)  NSObject*  data;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStatus:(NSNumber*) status

    message:(NSString*)message

    data:(NSObject*)data;
@end

@interface XdataCreateTableRequest:JDCloudRequest

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 数据表描述信息
@property (strong,nonatomic,nonnull)  DwTableDesc*  dbModelDBTable;
-(id) initWithRegion:(NSString *)regionId
instanceName:(NSString*)instanceName
dbModelDBTable:(DwTableDesc*)dbModelDBTable;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceName:(NSString*)instanceName
dbModelDBTable:(DwTableDesc*)dbModelDBTable;

@end

@interface XdataListTableInfoRequest:JDCloudRequest

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  instanceName;
/// 数据库名称
@property (strong,nonatomic,nonnull)  NSString*  databaseName;
-(id) initWithRegion:(NSString *)regionId
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
instanceName:(NSString*)instanceName
databaseName:(NSString*)databaseName;

@end

@interface XdataDeleteTableResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property XdataDeleteTableResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(XdataDeleteTableResult*) result;
@end

#endif /* XdataApiModel_h */
