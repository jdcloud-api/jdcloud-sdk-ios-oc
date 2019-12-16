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

back source configuration openapi
back source configuration openapi

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

 

#ifndef OssopenapiModel_h
#define OssopenapiModel_h

@interface BucketCapacityStatistic :NSObject

/// Bucket Name
@property (strong,nonatomic,nonnull)  NSString*  bucketName;

/// 用量数值，单位Byte
@property (strong,nonatomic,nonnull)  NSNumber*  value;

/// 时间
@property (strong,nonatomic,nonnull)  NSString*  time;

/// 用量类型
@property (strong,nonatomic,nonnull)  NSNumber*  capacityType;


-(id) initWithBucketName:(NSString*) bucketName
    value:(NSNumber*)value
    time:(NSString*)time
    capacityType:(NSNumber*)capacityType;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SingleBucketCapacityRequestCondition :NSObject

/// &lt;p&gt;查询用量数据类型：&lt;/p&gt;&lt;br&gt;&lt;code&gt;1000040&lt;/code&gt;:标准存储&lt;br&gt;&lt;code&gt;1000041&lt;/code&gt;:低冗余存储&lt;br&gt;&lt;code&gt;1000042&lt;/code&gt;:归档存储&lt;br&gt;&lt;code&gt;1000043&lt;/code&gt;归档overHead存储:&lt;br&gt;&lt;code&gt;1000044&lt;/code&gt;低频存储:&lt;br&gt;&lt;code&gt;1000045&lt;/code&gt;低频overHead存储:&lt;br&gt;&lt;code&gt;1&lt;/code&gt;:内网GET流量&lt;br&gt;&lt;code&gt;2&lt;/code&gt;:内网HEAD流量&lt;br&gt;&lt;code&gt;3&lt;/code&gt;:内网PUT流量&lt;br&gt;&lt;code&gt;4&lt;/code&gt;:内网POST流量&lt;br&gt;&lt;code&gt;5&lt;/code&gt;:内网DELETE流量&lt;br&gt;&lt;code&gt;6&lt;/code&gt;:内网OPTIONS流量&lt;br&gt;&lt;code&gt;7&lt;/code&gt;:内网TRACE流量&lt;br&gt;&lt;code&gt;11&lt;/code&gt;:外网GET流量&lt;br&gt;&lt;code&gt;12&lt;/code&gt;:外网HEAD流量&lt;br&gt;&lt;code&gt;13&lt;/code&gt;:外网PUT流量&lt;br&gt;&lt;code&gt;14&lt;/code&gt;:外网POST流量&lt;br&gt;&lt;code&gt;15&lt;/code&gt;:外网DELETE流量&lt;br&gt;&lt;code&gt;16&lt;/code&gt;:外网OPTIONS流量&lt;br&gt;&lt;code&gt;17&lt;/code&gt;:外网TRACE流量&lt;br&gt;&lt;code&gt;21&lt;/code&gt;:CDN GET流量&lt;br&gt;&lt;code&gt;22&lt;/code&gt;:CDN HEAD流量&lt;br&gt;&lt;code&gt;23&lt;/code&gt;:CDN PUT流量&lt;br&gt;&lt;code&gt;24&lt;/code&gt;:CDN POST流量&lt;br&gt;&lt;code&gt;25&lt;/code&gt;:CDN DELETE流量&lt;br&gt;&lt;code&gt;26&lt;/code&gt;:CDN OPTIONS流量&lt;br&gt;&lt;code&gt;27&lt;/code&gt;:CDN TRACE流量&lt;br&gt;&lt;code&gt;31&lt;/code&gt;:内网GET数&lt;br&gt;&lt;code&gt;32&lt;/code&gt;:内网HEAD数&lt;br&gt;&lt;code&gt;33&lt;/code&gt;:内网PUT数&lt;br&gt;&lt;code&gt;34&lt;/code&gt;:内网POST数&lt;br&gt;&lt;code&gt;35&lt;/code&gt;:内网DELETE数&lt;br&gt;&lt;code&gt;36&lt;/code&gt;:内网OPTIONS数&lt;br&gt;&lt;code&gt;37&lt;/code&gt;:内网TRACE数&lt;br&gt;&lt;code&gt;51&lt;/code&gt;:外网GET数&lt;br&gt;&lt;code&gt;52&lt;/code&gt;:外网HEAD数&lt;br&gt;&lt;code&gt;53&lt;/code&gt;:外网PUT数&lt;br&gt;&lt;code&gt;54&lt;/code&gt;:外网POST数&lt;br&gt;&lt;code&gt;55&lt;/code&gt;:外网DELETE数&lt;br&gt;&lt;code&gt;56&lt;/code&gt;:外网OPTIONS数&lt;br&gt;&lt;code&gt;57&lt;/code&gt;:外网TRACE数&lt;br&gt;&lt;code&gt;61&lt;/code&gt;:CDN GET数&lt;br&gt;&lt;code&gt;62&lt;/code&gt;:CDN HEAD数&lt;br&gt;&lt;code&gt;63&lt;/code&gt;:CDN PUT数&lt;br&gt;&lt;code&gt;64&lt;/code&gt;:CDN POST数&lt;br&gt;&lt;code&gt;65&lt;/code&gt;:CDN DELETE数&lt;br&gt;&lt;code&gt;66&lt;/code&gt;:CDN OPTIONS数&lt;br&gt;&lt;code&gt;67&lt;/code&gt;:CDN TRACE数&lt;br&gt;&lt;code&gt;71&lt;/code&gt;:归档提前删除&lt;br&gt;&lt;code&gt;72&lt;/code&gt;:低频提前删除&lt;br&gt;&lt;code&gt;81&lt;/code&gt;:归档取回Bulk&lt;br&gt;&lt;code&gt;82&lt;/code&gt;:归档取回Std&lt;br&gt;&lt;code&gt;83&lt;/code&gt;:归档取回Exp&lt;br&gt;&lt;code&gt;84&lt;/code&gt;:低频数据取回
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSNumber*>*  capacityTypes;

/// 开始时间，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ss&#39;Z&#39;
@property (strong,nonatomic,nonnull)  NSString*  beginTime;

/// 结束时间，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ss&#39;Z&#39;
@property (strong,nonatomic,nonnull)  NSString*  endTime;

/// 查询数据的聚合方式:&lt;br&gt;&lt;code&gt;0&lt;/code&gt;:all, 最大查询区间365天 &lt;br&gt;&lt;code&gt;1&lt;/code&gt;:hour，最大查询区间31天。默认1&lt;br&gt;&lt;code&gt;2&lt;/code&gt;:day, 最大查询区间365天。
@property (strong,nonatomic,nonnull)  NSNumber*  periodType;

/// 返回数据的方式： &lt;code&gt;1&lt;/code&gt;:recent(区间值), &lt;code&gt;2&lt;/code&gt;:current(当前值。method &#x3D; 2 时如果查询当前值时传入beginTime，则按照beginTime时间来进行查询；如果不传beginTime，则按照后端系统时间查询。)
@property (strong,nonatomic,nonnull)  NSNumber*  method;


-(id) initWithCapacityTypes:(NSArray<NSNumber*>*) capacityTypes
    beginTime:(NSString*)beginTime
    endTime:(NSString*)endTime
    periodType:(NSNumber*)periodType
    method:(NSNumber*)method;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BucketCapacityCondition :NSObject

/// &lt;p&gt;查询用量数据类型：&lt;/p&gt;&lt;br&gt;&lt;code&gt;1000040&lt;/code&gt;:标准存储&lt;br&gt;&lt;code&gt;1000041&lt;/code&gt;:低冗余存储&lt;br&gt;&lt;code&gt;1000042&lt;/code&gt;:归档存储&lt;br&gt;&lt;code&gt;1000043&lt;/code&gt;归档overHead存储:&lt;br&gt;&lt;code&gt;1000044&lt;/code&gt;低频存储:&lt;br&gt;&lt;code&gt;1000045&lt;/code&gt;低频overHead存储:&lt;br&gt;&lt;code&gt;1&lt;/code&gt;:内网GET流量&lt;br&gt;&lt;code&gt;2&lt;/code&gt;:内网HEAD流量&lt;br&gt;&lt;code&gt;3&lt;/code&gt;:内网PUT流量&lt;br&gt;&lt;code&gt;4&lt;/code&gt;:内网POST流量&lt;br&gt;&lt;code&gt;5&lt;/code&gt;:内网DELETE流量&lt;br&gt;&lt;code&gt;6&lt;/code&gt;:内网OPTIONS流量&lt;br&gt;&lt;code&gt;7&lt;/code&gt;:内网TRACE流量&lt;br&gt;&lt;code&gt;11&lt;/code&gt;:外网GET流量&lt;br&gt;&lt;code&gt;12&lt;/code&gt;:外网HEAD流量&lt;br&gt;&lt;code&gt;13&lt;/code&gt;:外网PUT流量&lt;br&gt;&lt;code&gt;14&lt;/code&gt;:外网POST流量&lt;br&gt;&lt;code&gt;15&lt;/code&gt;:外网DELETE流量&lt;br&gt;&lt;code&gt;16&lt;/code&gt;:外网OPTIONS流量&lt;br&gt;&lt;code&gt;17&lt;/code&gt;:外网TRACE流量&lt;br&gt;&lt;code&gt;21&lt;/code&gt;:CDN GET流量&lt;br&gt;&lt;code&gt;22&lt;/code&gt;:CDN HEAD流量&lt;br&gt;&lt;code&gt;23&lt;/code&gt;:CDN PUT流量&lt;br&gt;&lt;code&gt;24&lt;/code&gt;:CDN POST流量&lt;br&gt;&lt;code&gt;25&lt;/code&gt;:CDN DELETE流量&lt;br&gt;&lt;code&gt;26&lt;/code&gt;:CDN OPTIONS流量&lt;br&gt;&lt;code&gt;27&lt;/code&gt;:CDN TRACE流量&lt;br&gt;&lt;code&gt;31&lt;/code&gt;:内网GET数&lt;br&gt;&lt;code&gt;32&lt;/code&gt;:内网HEAD数&lt;br&gt;&lt;code&gt;33&lt;/code&gt;:内网PUT数&lt;br&gt;&lt;code&gt;34&lt;/code&gt;:内网POST数&lt;br&gt;&lt;code&gt;35&lt;/code&gt;:内网DELETE数&lt;br&gt;&lt;code&gt;36&lt;/code&gt;:内网OPTIONS数&lt;br&gt;&lt;code&gt;37&lt;/code&gt;:内网TRACE数&lt;br&gt;&lt;code&gt;51&lt;/code&gt;:外网GET数&lt;br&gt;&lt;code&gt;52&lt;/code&gt;:外网HEAD数&lt;br&gt;&lt;code&gt;53&lt;/code&gt;:外网PUT数&lt;br&gt;&lt;code&gt;54&lt;/code&gt;:外网POST数&lt;br&gt;&lt;code&gt;55&lt;/code&gt;:外网DELETE数&lt;br&gt;&lt;code&gt;56&lt;/code&gt;:外网OPTIONS数&lt;br&gt;&lt;code&gt;57&lt;/code&gt;:外网TRACE数&lt;br&gt;&lt;code&gt;61&lt;/code&gt;:CDN GET数&lt;br&gt;&lt;code&gt;62&lt;/code&gt;:CDN HEAD数&lt;br&gt;&lt;code&gt;63&lt;/code&gt;:CDN PUT数&lt;br&gt;&lt;code&gt;64&lt;/code&gt;:CDN POST数&lt;br&gt;&lt;code&gt;65&lt;/code&gt;:CDN DELETE数&lt;br&gt;&lt;code&gt;66&lt;/code&gt;:CDN OPTIONS数&lt;br&gt;&lt;code&gt;67&lt;/code&gt;:CDN TRACE数&lt;br&gt;&lt;code&gt;71&lt;/code&gt;:归档提前删除&lt;br&gt;&lt;code&gt;72&lt;/code&gt;:低频提前删除&lt;br&gt;&lt;code&gt;81&lt;/code&gt;:归档取回Bulk&lt;br&gt;&lt;code&gt;82&lt;/code&gt;:归档取回Std&lt;br&gt;&lt;code&gt;83&lt;/code&gt;:归档取回Exp&lt;br&gt;&lt;code&gt;84&lt;/code&gt;:低频数据取回
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSNumber*>*  capacityTypes;

/// 开始时间，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ss&#39;Z&#39;
@property (strong,nonatomic,nonnull)  NSString*  beginTime;

/// 结束时间，使用UTC时间，格式为：YYYY-MM-DDTHH:mm:ss&#39;Z&#39;
@property (strong,nonatomic,nonnull)  NSString*  endTime;

/// 查询数据的聚合方式:&lt;br&gt;&lt;code&gt;0&lt;/code&gt;:all, 最大查询区间365天 &lt;br&gt;&lt;code&gt;1&lt;/code&gt;:hour，最大查询区间31天。默认1&lt;br&gt;&lt;code&gt;2&lt;/code&gt;:day, 最大查询区间365天。
@property (strong,nonatomic,nonnull)  NSNumber*  periodType;

/// 返回数据的方式： &lt;code&gt;1&lt;/code&gt;:recent(区间值), &lt;code&gt;2&lt;/code&gt;:current(当前值。method &#x3D; 2 时如果查询当前值时传入beginTime，则按照beginTime时间来进行查询；如果不传beginTime，则按照后端系统时间查询。)
@property (strong,nonatomic,nonnull)  NSNumber*  method;

/// 查询的bucket Names。如果查询用户全部Bucket,则不传
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  bucketNames;


-(id) initWithCapacityTypes:(NSArray<NSNumber*>*) capacityTypes
    beginTime:(NSString*)beginTime
    endTime:(NSString*)endTime
    periodType:(NSNumber*)periodType
    method:(NSNumber*)method
    bucketNames:(NSArray<NSString*>*)bucketNames;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CName :NSObject

/// 自定义域名id
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  pin;

/// 源站域名
@property (strong,nonatomic,nonnull)  NSString*  originDomain;

/// 自定义域名
@property (strong,nonatomic,nonnull)  NSString*  cname;

/// 自定义域名状态
@property (strong,nonatomic,nonnull)  NSNumber*  status;

/// bucket name
@property (strong,nonatomic,nonnull)  NSString*  bucketName;

/// cname是否成功，1：已解析；0:未解析
@property (strong,nonatomic,nonnull)  NSNumber*  isCName;

/// 创建时间
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// http版本，0：http，1：https
@property (strong,nonatomic,nonnull)  NSNumber*  protoType;


-(id) initWithId:(NSNumber*) idValue
    pin:(NSString*)pin
    originDomain:(NSString*)originDomain
    cname:(NSString*)cname
    status:(NSNumber*)status
    bucketName:(NSString*)bucketName
    isCName:(NSNumber*)isCName
    createTime:(NSString*)createTime
    protoType:(NSNumber*)protoType;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CNameInfo :NSObject

/// 自定义域名
@property (strong,nonatomic,nonnull)  NSString*  cname;

/// http版本，0：http，1：https
@property (strong,nonatomic,nonnull)  NSNumber*  protoType;

/// 域名
@property (strong,nonatomic,nonnull)  NSString*  endPoint;

/// 是否拦截内部域名添，任意值跳过拦截
@property (strong,nonatomic,nonnull)  NSString*  internal;


-(id) initWithCname:(NSString*) cname
    protoType:(NSNumber*)protoType
    endPoint:(NSString*)endPoint
    internal:(NSString*)internal;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface UserBillCode :NSObject

/// 用户的AppCode
@property (strong,nonatomic,nonnull)  NSString*  appCode;

/// 用户的ServiceCode
@property (strong,nonatomic,nonnull)  NSString*  serviceCode;

/// 用户的StorageResourceType
@property (strong,nonatomic,nonnull)  NSString*  storageResourceType;

/// 用户的ProcessResourceType
@property (strong,nonatomic,nonnull)  NSString*  processResourceType;


-(id) initWithAppCode:(NSString*) appCode
    serviceCode:(NSString*)serviceCode
    storageResourceType:(NSString*)storageResourceType
    processResourceType:(NSString*)processResourceType;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ImageExtensions :NSObject

/// 原图保护图像格式列表，符合固定XML格式，例如\&lt;?xml version&#x3D;&quot;1.0&quot; encoding&#x3D;&quot;UTF-8&quot;?&gt;\&lt;Condition&gt;\&lt;Extension&gt;jpg\&lt;/Extension&gt;\&lt;/Condition&gt;
@property (strong,nonatomic,nonnull)  NSString*  imageExtensionsValue;


-(id) initWithImageExtensionsValue:(NSString*) imageExtensionsValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BucketMonitorStatistic :NSObject

/// bucket name
@property (strong,nonatomic,nonnull)  NSString*  bucketName;

/// 统计数值
@property (strong,nonatomic,nonnull)  NSNumber*  count;

/// 时间
@property (strong,nonatomic,nonnull)  NSString*  time;


-(id) initWithBucketName:(NSString*) bucketName
    count:(NSNumber*)count
    time:(NSString*)time;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BucketSpaceStatistic :NSObject

/// bucket name
@property (strong,nonatomic,nonnull)  NSString*  bucketName;

/// bucket 存储空间
@property (strong,nonatomic,nonnull)  NSNumber*  space;


-(id) initWithBucketName:(NSString*) bucketName
    space:(NSNumber*)space;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ICP :NSObject

/// true为备案，false为未备案
@property (strong,nonatomic,nonnull)  NSNumber*  icp;


-(id) initWithIcp:(NSNumber*) icp;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SignatureInfo :NSObject

/// 签名的endpoint, 例如 http://s3.cn-east-1.jcloudcs.com
@property (strong,nonatomic,nonnull)  NSString*  endpoint;

/// http method
@property (strong,nonatomic,nonnull)  NSString*  httpMethod;

/// 资源路径,不包含query string
@property (strong,nonatomic,nonnull)  NSString*  resourcePath;

/// 上传文件的sha256
@property (strong,nonatomic,nonnull)  NSString*  xAmzContentSha256;

/// 附加的签名header
@property (strong,nonatomic,nonnull)  NSMutableDictionary<NSString*,NSString*>*  additionalSignatureHeaders;

/// 签名的参数，query string
@property (strong,nonatomic,nonnull)  NSMutableDictionary<NSString*,NSString*>*  signatureParameters;


-(id) initWithEndpoint:(NSString*) endpoint
    httpMethod:(NSString*)httpMethod
    resourcePath:(NSString*)resourcePath
    xAmzContentSha256:(NSString*)xAmzContentSha256
    additionalSignatureHeaders:(NSMutableDictionary<NSString*,NSString*>*)additionalSignatureHeaders
    signatureParameters:(NSMutableDictionary<NSString*,NSString*>*)signatureParameters;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SignatureResult :NSObject

/// 签名的endpoint, 例如 http://s3.cn-east-1.jcloudcs.com
@property (strong,nonatomic,nonnull)  NSString*  endpoint;

/// http method
@property (strong,nonatomic,nonnull)  NSString*  httpMethod;

/// 资源路径
@property (strong,nonatomic,nonnull)  NSString*  resourcePath;

/// 时间, 由openapi返回
@property (strong,nonatomic,nonnull)  NSString*  xAmzDate;

/// content hash
@property (strong,nonatomic,nonnull)  NSString*  xAmzContentSha256;

/// 用户pin
@property (strong,nonatomic,nonnull)  NSString*  xAmzMetaRequesterPin;

/// 用户userId
@property (strong,nonatomic,nonnull)  NSString*  xAmzMetaRequesterId;

/// 附加的签名header
@property (strong,nonatomic,nonnull)  NSMutableDictionary<NSString*,NSString*>*  additionalSignatureHeaders;

/// 签名的参数，query string
@property (strong,nonatomic,nonnull)  NSMutableDictionary<NSString*,NSString*>*  signatureParameters;

/// authorization信息, 由openapi计算返回
@property (strong,nonatomic,nonnull)  NSString*  authorization;


-(id) initWithEndpoint:(NSString*) endpoint
    httpMethod:(NSString*)httpMethod
    resourcePath:(NSString*)resourcePath
    xAmzDate:(NSString*)xAmzDate
    xAmzContentSha256:(NSString*)xAmzContentSha256
    xAmzMetaRequesterPin:(NSString*)xAmzMetaRequesterPin
    xAmzMetaRequesterId:(NSString*)xAmzMetaRequesterId
    additionalSignatureHeaders:(NSMutableDictionary<NSString*,NSString*>*)additionalSignatureHeaders
    signatureParameters:(NSMutableDictionary<NSString*,NSString*>*)signatureParameters
    authorization:(NSString*)authorization;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BackSourceAddress :NSObject

/// 地址协议, 如http
@property (strong,nonatomic,nonnull)  NSString*  protocol;

/// 域名
@property (strong,nonatomic,nonnull)  NSString*  hostName;

/// 将前缀替换为指定的内容
@property (strong,nonatomic,nonnull)  NSString*  replaceKeyPrefixWith;

/// 将key替换为指定内容
@property (strong,nonatomic,nonnull)  NSString*  replaceKeyWith;

/// 将后缀替换为指定的内容
@property (strong,nonatomic,nonnull)  NSString*  replaceKeySuffixWith;


-(id) initWithProtocol:(NSString*) protocol
    hostName:(NSString*)hostName
    replaceKeyPrefixWith:(NSString*)replaceKeyPrefixWith
    replaceKeyWith:(NSString*)replaceKeyWith
    replaceKeySuffixWith:(NSString*)replaceKeySuffixWith;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BackSourceHeaderRule :NSObject

/// 是否允许所有的Http header
@property (strong,nonatomic,nonnull)  NSNumber*  allowAllHeaders;

/// 允许的http header列表
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  allowHeaders;

/// 禁止的http header列表
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  notAllowHeaders;

/// 设置指定http header参数，类型为Map\&lt;String, String&gt;
@property (strong,nonatomic,nonnull)  NSMutableDictionary<NSString*,NSString*>*  setHeaders;


-(id) initWithAllowAllHeaders:(NSNumber*) allowAllHeaders
    allowHeaders:(NSArray<NSString*>*)allowHeaders
    notAllowHeaders:(NSArray<NSString*>*)notAllowHeaders
    setHeaders:(NSMutableDictionary<NSString*,NSString*>*)setHeaders;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BackSourceRuleCondition :NSObject

/// 当前缀为指定的前缀时开启回源
@property (strong,nonatomic,nonnull)  NSString*  keyPrefixEquals;

/// 当http错误码为指定错误码时开启回源
@property (strong,nonatomic,nonnull)  NSNumber*  httpErrorCodeReturnedEquals;


-(id) initWithKeyPrefixEquals:(NSString*) keyPrefixEquals
    httpErrorCodeReturnedEquals:(NSNumber*)httpErrorCodeReturnedEquals;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BucketCapacityQueryResult :NSObject

/// bucket 用量统计列表
@property (strong,nonatomic,nonnull)  NSArray<BucketCapacityStatistic*>*  resultList;


-(id) initWithResultList:(NSArray<BucketCapacityStatistic*>*) resultList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CNameQueryResult :NSObject

/// 查询结果总数
@property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

/// ResultList
@property (strong,nonatomic,nonnull)  NSArray<CName*>*  resultList;


-(id) initWithTotalCount:(NSNumber*) totalCount
    resultList:(NSArray<CName*>*)resultList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BucketSpaceStatisticQueryResult :NSObject

/// 查询结果总数
@property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

/// bucket 统计列表
@property (strong,nonatomic,nonnull)  NSArray<BucketSpaceStatistic*>*  queryList;


-(id) initWithTotalCount:(NSNumber*) totalCount
    queryList:(NSArray<BucketSpaceStatistic*>*)queryList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BucketMonitorStatisticQueryResult :NSObject

/// 查询结果总数
@property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

/// bucket 统计列表
@property (strong,nonatomic,nonnull)  NSArray<BucketMonitorStatistic*>*  queryList;


-(id) initWithTotalCount:(NSNumber*) totalCount
    queryList:(NSArray<BucketMonitorStatistic*>*)queryList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BackSourceRule :NSObject

/// 回源类型
@property (strong,nonatomic,nonnull)  NSString*  backSourceType;

/// Condition
@property (strong,nonatomic,nonnull)  BackSourceRuleCondition*  condition;

/// Address
@property (strong,nonatomic,nonnull)  BackSourceAddress*  address;

/// 是否允许query String
@property (strong,nonatomic,nonnull)  NSNumber*  allowQueryString;

/// 是否跟随重定向
@property (strong,nonatomic,nonnull)  NSNumber*  followRedirects;

/// HeaderRule
@property (strong,nonatomic,nonnull)  BackSourceHeaderRule*  headerRule;


-(id) initWithBackSourceType:(NSString*) backSourceType
    condition:(BackSourceRuleCondition*)condition
    address:(BackSourceAddress*)address
    allowQueryString:(NSNumber*)allowQueryString
    followRedirects:(NSNumber*)followRedirects
    headerRule:(BackSourceHeaderRule*)headerRule;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BucketBackSourceConfiguration :NSObject

/// 回源配置规则
@property (strong,nonatomic,nonnull)  NSArray<BackSourceRule*>*  backSourceRules;


-(id) initWithBackSourceRules:(NSArray<BackSourceRule*>*) backSourceRules;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* OssopenapiModel_h */
