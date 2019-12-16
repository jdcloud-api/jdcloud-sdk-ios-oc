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

 

#ifndef FunctionModel_h
#define FunctionModel_h

@interface FunctionSpec :NSObject

/// 函数Id
@property (strong,nonatomic,nonnull)  NSString*  functionId;

/// 函数名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 函数描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 函数运行环境，目前有python3
@property (strong,nonatomic,nonnull)  NSString*  runtime;

/// 函数创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 函数最后更新时间
@property (strong,nonatomic,nonnull)  NSString*  updateTime;

/// 函数版本名称
@property (strong,nonatomic,nonnull)  NSString*  version;

/// 代码包下载的url地址
@property (strong,nonatomic,nonnull)  NSString*  downloadUrl;


-(id) initWithFunctionId:(NSString*) functionId
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue
    runtime:(NSString*)runtime
    createTime:(NSString*)createTime
    updateTime:(NSString*)updateTime
    version:(NSString*)version
    downloadUrl:(NSString*)downloadUrl;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface FunctionInvokeResult :NSObject

/// 函数执行结果
@property (strong,nonatomic,nonnull)  NSString*  result;

/// 代码包校验和
@property (strong,nonatomic,nonnull)  NSString*  codeCheckSum;

/// 函数执行时间
@property (strong,nonatomic,nonnull)  NSNumber*  invokeTime;

/// 函数收费时间
@property (strong,nonatomic,nonnull)  NSNumber*  billingTime;

/// 函数设置内存大小
@property (strong,nonatomic,nonnull)  NSNumber*  setupMem;

/// 函数实际使用内存大小
@property (strong,nonatomic,nonnull)  NSNumber*  realMem;

/// 函数执行日志
@property (strong,nonatomic,nonnull)  NSString*  logStr;


-(id) initWithResult:(NSString*) result
    codeCheckSum:(NSString*)codeCheckSum
    invokeTime:(NSNumber*)invokeTime
    billingTime:(NSNumber*)billingTime
    setupMem:(NSNumber*)setupMem
    realMem:(NSNumber*)realMem
    logStr:(NSString*)logStr;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Code :NSObject

/// 代码压缩文件，base64编码
@property (strong,nonatomic,nonnull)  NSString*  zipFile;

/// 在线编辑代码
@property (strong,nonatomic,nonnull)  NSString*  onlineCode;

/// 代码所在对象存储的bucket名称
@property (strong,nonatomic,nonnull)  NSString*  bucketName;

/// 代码所在对象存储的object名称
@property (strong,nonatomic,nonnull)  NSString*  objectName;


-(id) initWithZipFile:(NSString*) zipFile
    onlineCode:(NSString*)onlineCode
    bucketName:(NSString*)bucketName
    objectName:(NSString*)objectName;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Env :NSObject

/// Data
@property (strong,nonatomic,nonnull)  NSMutableDictionary<NSString*,NSString*>*  data;


-(id) initWithData:(NSMutableDictionary<NSString*,NSString*>*) data;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Statistics :NSObject

/// 用户目前已经创建的函数数量
@property (strong,nonatomic,nonnull)  NSNumber*  currentFunctionNumber;

/// 用户可创建函数的最大数量
@property (strong,nonatomic,nonnull)  NSNumber*  maxFunctionNumber;

/// 用户当前使用的代码存储空间
@property (strong,nonatomic,nonnull)  NSNumber*  currentCodeSize;

/// 用户可使用的最大代码存储空间
@property (strong,nonatomic,nonnull)  NSNumber*  maxCodeSize;


-(id) initWithCurrentFunctionNumber:(NSNumber*) currentFunctionNumber
    maxFunctionNumber:(NSNumber*)maxFunctionNumber
    currentCodeSize:(NSNumber*)currentCodeSize
    maxCodeSize:(NSNumber*)maxCodeSize;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface OssTrigger :NSObject

/// 桶名
@property (strong,nonatomic,nonnull)  NSString*  bucket;

/// oss配置id
@property (strong,nonatomic,nonnull)  NSString*  configId;

/// trigger事件
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  events;

/// 前缀
@property (strong,nonatomic,nonnull)  NSString*  prefix;

/// 后缀
@property (strong,nonatomic,nonnull)  NSString*  suffix;


-(id) initWithBucket:(NSString*) bucket
    configId:(NSString*)configId
    events:(NSArray<NSString*>*)events
    prefix:(NSString*)prefix
    suffix:(NSString*)suffix;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Trigger :NSObject

/// 触发器Id
@property (strong,nonatomic,nonnull)  NSString*  triggerId;

/// 触发器所属的函数名称
@property (strong,nonatomic,nonnull)  NSString*  functionName;

/// 触发器所属的函数版本名称
@property (strong,nonatomic,nonnull)  NSString*  versionName;

/// 触发器对应的事件源类型，目前有oss和apigateway
@property (strong,nonatomic,nonnull)  NSString*  eventSource;

/// 触发器对应的事件源Id
@property (strong,nonatomic,nonnull)  NSString*  eventSourceId;

/// 触发器创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 触发器最后修改时间
@property (strong,nonatomic,nonnull)  NSString*  updateTime;


-(id) initWithTriggerId:(NSString*) triggerId
    functionName:(NSString*)functionName
    versionName:(NSString*)versionName
    eventSource:(NSString*)eventSource
    eventSourceId:(NSString*)eventSourceId
    createTime:(NSString*)createTime
    updateTime:(NSString*)updateTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ApiTrigger :NSObject

/// 接口ID
@property (strong,nonatomic,nonnull)  NSString*  apiId;

/// 分组ID
@property (strong,nonatomic,nonnull)  NSString*  apiGroupId;

/// 分组名称
@property (strong,nonatomic,nonnull)  NSString*  groupName;

/// 修订版本号
@property (strong,nonatomic,nonnull)  NSString*  revision;

/// API名称
@property (strong,nonatomic,nonnull)  NSString*  apiName;

/// 请求方式
@property (strong,nonatomic,nonnull)  NSString*  action;

/// 请求路径，同时发布多个环境后会有多个路径
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  path;

/// API描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 部署状态(1:已部署)
@property (strong,nonatomic,nonnull)  NSNumber*  deploymentStatus;


-(id) initWithApiId:(NSString*) apiId
    apiGroupId:(NSString*)apiGroupId
    groupName:(NSString*)groupName
    revision:(NSString*)revision
    apiName:(NSString*)apiName
    action:(NSString*)action
    path:(NSArray<NSString*>*)path
    descriptionValue:(NSString*)descriptionValue
    deploymentStatus:(NSNumber*)deploymentStatus;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Flavor :NSObject

/// flavor键
@property (strong,nonatomic,nonnull)  NSString*  flavorKey;

/// cpu规格
@property (strong,nonatomic,nonnull)  NSNumber*  cpu;

/// 内存规格
@property (strong,nonatomic,nonnull)  NSNumber*  memory;

/// 硬盘规格
@property (strong,nonatomic,nonnull)  NSNumber*  disk;


-(id) initWithFlavorKey:(NSString*) flavorKey
    cpu:(NSNumber*)cpu
    memory:(NSNumber*)memory
    disk:(NSNumber*)disk;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Alias :NSObject

/// 别名Id
@property (strong,nonatomic,nonnull)  NSString*  aliasId;

/// 别名名称
@property (strong,nonatomic,nonnull)  NSString*  aliasName;

/// 别名对应的函数名称
@property (strong,nonatomic,nonnull)  NSString*  functionName;

/// 别名描述信息
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 别名对应的版本名称
@property (strong,nonatomic,nonnull)  NSString*  version;


-(id) initWithAliasId:(NSString*) aliasId
    aliasName:(NSString*)aliasName
    functionName:(NSString*)functionName
    descriptionValue:(NSString*)descriptionValue
    version:(NSString*)version;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ListFunctionResult :NSObject

/// 函数列表
@property (strong,nonatomic,nonnull)  NSArray<FunctionSpec*>*  functions;

/// 函数总数
@property (strong,nonatomic,nonnull)  NSNumber*  totalCount;


-(id) initWithFunctions:(NSArray<FunctionSpec*>*) functions
    totalCount:(NSNumber*)totalCount;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Function :NSObject

/// 函数Id
@property (strong,nonatomic,nonnull)  NSString*  functionId;

/// 函数名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 函数描述
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 函数入口，格式为入口文件.入口函数名
@property (strong,nonatomic,nonnull)  NSString*  entrance;

/// 函数运行最大内存
@property (strong,nonatomic,nonnull)  NSNumber*  memory;

/// 函数运行环境，目前有python3.6
@property (strong,nonatomic,nonnull)  NSString*  runTime;

/// 函数超时时间
@property (strong,nonatomic,nonnull)  NSNumber*  overTime;

/// 函数版本名称
@property (strong,nonatomic,nonnull)  NSString*  version;

/// 函数代码
@property (strong,nonatomic,nonnull)  Code*  code;

/// 函数环境变量
@property (strong,nonatomic,nonnull)  Env*  environment;

/// 函数指定的日志集id
@property (strong,nonatomic,nonnull)  NSString*  logSetId;

/// 函数指定的日志主题id
@property (strong,nonatomic,nonnull)  NSString*  logTopicId;

/// 代码包校验和
@property (strong,nonatomic,nonnull)  NSString*  codeCheckSum;

/// 代码包大小，单位为字节
@property (strong,nonatomic,nonnull)  NSNumber*  codeSize;

/// 代码包下载的url地址
@property (strong,nonatomic,nonnull)  NSString*  downloadUrl;

/// 函数配置的VPCid
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 函数配置的子网id
@property (strong,nonatomic,nonnull)  NSString*  subnetId;

/// 函数创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// 函数最后更新时间
@property (strong,nonatomic,nonnull)  NSString*  updateTime;


-(id) initWithFunctionId:(NSString*) functionId
    name:(NSString*)name
    descriptionValue:(NSString*)descriptionValue
    entrance:(NSString*)entrance
    memory:(NSNumber*)memory
    runTime:(NSString*)runTime
    overTime:(NSNumber*)overTime
    version:(NSString*)version
    code:(Code*)code
    environment:(Env*)environment
    logSetId:(NSString*)logSetId
    logTopicId:(NSString*)logTopicId
    codeCheckSum:(NSString*)codeCheckSum
    codeSize:(NSNumber*)codeSize
    downloadUrl:(NSString*)downloadUrl
    vpcId:(NSString*)vpcId
    subnetId:(NSString*)subnetId
    createTime:(NSString*)createTime
    updateTime:(NSString*)updateTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CreateFunctionInput :NSObject

/// 函数名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 函数描述信息
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 函数入口，格式为入口文件.入口函数名
@property (strong,nonatomic,nonnull)  NSString*  entrance;

/// 函数运行最大内存
@property (strong,nonatomic,nonnull)  NSNumber*  memory;

/// 函数运行环境
@property (strong,nonatomic,nonnull)  NSString*  runTime;

/// 函数运行超时时间
@property (strong,nonatomic,nonnull)  NSNumber*  overTime;

/// 函数版本，默认为LATEST
@property (strong,nonatomic,nonnull)  NSString*  version;

/// 函数代码包
@property (strong,nonatomic,nonnull)  Code*  code;

/// 函数运行时环境变量
@property (strong,nonatomic,nonnull)  Env*  environment;

/// 函数指定的日志集Id
@property (strong,nonatomic,nonnull)  NSString*  logSetId;

/// 函数指定的日志主题Id
@property (strong,nonatomic,nonnull)  NSString*  logTopicId;

/// 函数配置的VPCId
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 函数配置的子网Id
@property (strong,nonatomic,nonnull)  NSString*  subnetId;


-(id) initWithName:(NSString*) name
    descriptionValue:(NSString*)descriptionValue
    entrance:(NSString*)entrance
    memory:(NSNumber*)memory
    runTime:(NSString*)runTime
    overTime:(NSNumber*)overTime
    version:(NSString*)version
    code:(Code*)code
    environment:(Env*)environment
    logSetId:(NSString*)logSetId
    logTopicId:(NSString*)logTopicId
    vpcId:(NSString*)vpcId
    subnetId:(NSString*)subnetId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface UpdateFunctionInput :NSObject

/// 函数描述信息
@property (strong,nonatomic,nonnull)  NSString*  descriptionValue;

/// 函数入口，格式为入口文件.入口函数名
@property (strong,nonatomic,nonnull)  NSString*  entrance;

/// 函数运行最大内存
@property (strong,nonatomic,nonnull)  NSNumber*  memory;

/// 函数运行环境
@property (strong,nonatomic,nonnull)  NSString*  runTime;

/// 函数运行超时时间
@property (strong,nonatomic,nonnull)  NSNumber*  overTime;

/// 函数版本
@property (strong,nonatomic,nonnull)  NSString*  version;

/// 函数代码包
@property (strong,nonatomic,nonnull)  Code*  code;

/// 函数运行时环境变量
@property (strong,nonatomic,nonnull)  Env*  environment;

/// 函数指定的日志集Id
@property (strong,nonatomic,nonnull)  NSString*  logSetId;

/// 函数指定的日志主题Id
@property (strong,nonatomic,nonnull)  NSString*  logTopicId;

/// 函数配置的VPCId
@property (strong,nonatomic,nonnull)  NSString*  vpcId;

/// 函数配置的子网Id
@property (strong,nonatomic,nonnull)  NSString*  subnetId;


-(id) initWithDescription:(NSString*) descriptionValue
    entrance:(NSString*)entrance
    memory:(NSNumber*)memory
    runTime:(NSString*)runTime
    overTime:(NSNumber*)overTime
    version:(NSString*)version
    code:(Code*)code
    environment:(Env*)environment
    logSetId:(NSString*)logSetId
    logTopicId:(NSString*)logTopicId
    vpcId:(NSString*)vpcId
    subnetId:(NSString*)subnetId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ListTriggerData :NSObject

/// oss触发器列表
@property (strong,nonatomic,nonnull)  NSArray<OssTrigger*>*  ossTriggers;

/// apiGateWay触发器列表
@property (strong,nonatomic,nonnull)  NSArray<ApiTrigger*>*  apiGwTriggers;


-(id) initWithOssTriggers:(NSArray<OssTrigger*>*) ossTriggers
    apiGwTriggers:(NSArray<ApiTrigger*>*)apiGwTriggers;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* FunctionModel_h */
