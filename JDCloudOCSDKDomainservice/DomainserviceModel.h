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

 

#ifndef DomainserviceModel_h
#define DomainserviceModel_h

@interface UpdateRR :NSObject

/// 主域名
@property (strong,nonatomic,nonnull)  NSString*  domainName;

/// 主机记录
@property (strong,nonatomic,nonnull)  NSString*  hostRecord;

/// 解析记录的值
@property (strong,nonatomic,nonnull)  NSString*  hostValue;

/// 是否是京东云资源
@property (strong,nonatomic,nonnull)  NSNumber*  jcloudRes;

/// 优先级，只存在于MX, SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  mxPriority;

/// 端口，只存在于SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  port;

/// 解析记录的生存时间，单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  ttl;

/// 解析的类型，请参考&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/jd-cloud-dns/detailed-interpretation-of-parsed-records&quot;&gt;解析记录类型详解&lt;/a&gt;
@property (strong,nonatomic,nonnull)  NSString*  type;

/// 解析记录的权重，目前支持权重的有：A/AAAA/CNAME/JNAME，A/AAAA权重范围：0-100、CNAME/JNAME权重范围：1-100。
@property (strong,nonatomic,nonnull)  NSNumber*  weight;

/// 解析线路的ID，请调用describeViewTree接口获取基础解析线路的ID，使用describeUserView接口获取自定义线路的ID。
@property (strong,nonatomic,nonnull)  NSNumber*  viewValue;


-(id) initWithDomainName:(NSString*) domainName
    hostRecord:(NSString*)hostRecord
    hostValue:(NSString*)hostValue
    jcloudRes:(NSNumber*)jcloudRes
    mxPriority:(NSNumber*)mxPriority
    port:(NSNumber*)port
    ttl:(NSNumber*)ttl
    type:(NSString*)type
    weight:(NSNumber*)weight
    viewValue:(NSNumber*)viewValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Jdvpc :NSObject

/// 京东云IP
@property (strong,nonatomic,nonnull)  NSString*  ip;

/// 是否绑定
@property (strong,nonatomic,nonnull)  NSNumber*  binded;


-(id) initWithIp:(NSString*) ip
    binded:(NSNumber*)binded;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SubDomainExist :NSObject

/// 子域名
@property (strong,nonatomic,nonnull)  NSString*  domain;

/// 子域名的存在状态，1：存在，2：不存在，3：zone不存在
@property (strong,nonatomic,nonnull)  NSNumber*  isExist;


-(id) initWithDomain:(NSString*) domain
    isExist:(NSNumber*)isExist;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SetRecords :NSObject

/// 解析记录的值
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  records;

/// 解析记录所在的解析线路，请调用describeViewTree接口获取。如果不传是默认线路。
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  views;

/// 解析记录的类型，支持A, AAAA, CNAME类型
@property (strong,nonatomic,nonnull)  NSString*  type;


-(id) initWithRecords:(NSArray<NSString*>*) records
    views:(NSArray<NSString*>*)views
    type:(NSString*)type;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface RRInfo :NSObject

/// 创建者
@property (strong,nonatomic,nonnull)  NSString*  creator;

/// 线路名称
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// 域名解析的唯一ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 主机记录
@property (strong,nonatomic,nonnull)  NSString*  hostRecord;

/// 解析记录的值
@property (strong,nonatomic,nonnull)  NSString*  hostValue;

/// 是否是京东云资源
@property (strong,nonatomic,nonnull)  NSNumber*  jcloudRes;

/// 优先级，只存在于MX, SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  mxPriority;

/// 端口，只存在于SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  port;

/// 解析记录的生存时间，单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  ttl;

/// 解析记录的类型，请参考&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/jd-cloud-dns/detailed-interpretation-of-parsed-records&quot;&gt;解析记录类型详解&lt;/a&gt;
@property (strong,nonatomic,nonnull)  NSString*  type;

/// 解析记录的权重
@property (strong,nonatomic,nonnull)  NSNumber*  weight;

/// 解析线路的ID
@property (strong,nonatomic,nonnull)  NSArray<NSNumber*>*  viewValue;

/// 解析记录的状态，正常解析:2，暂停解析:4
@property (strong,nonatomic,nonnull)  NSString*  resolvingStatus;

/// 解析记录更新的时间
@property (strong,nonatomic,nonnull)  NSNumber*  updateTime;


-(id) initWithCreator:(NSString*) creator
    viewName:(NSString*)viewName
    idValue:(NSNumber*)idValue
    hostRecord:(NSString*)hostRecord
    hostValue:(NSString*)hostValue
    jcloudRes:(NSNumber*)jcloudRes
    mxPriority:(NSNumber*)mxPriority
    port:(NSNumber*)port
    ttl:(NSNumber*)ttl
    type:(NSString*)type
    weight:(NSNumber*)weight
    viewValue:(NSArray<NSNumber*>*)viewValue
    resolvingStatus:(NSString*)resolvingStatus
    updateTime:(NSNumber*)updateTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Setlb :NSObject

/// 解析记录的ID。在getLB接口中获取。
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 此条解析记录的权重。A,AAAA类型的权重范围为：0-100，CNAME, JNAME类型的权重范围为：1-100。
@property (strong,nonatomic,nonnull)  NSNumber*  weight;


-(id) initWithId:(NSNumber*) idValue
    weight:(NSNumber*)weight;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Records :NSObject

/// 解析记录值
@property (strong,nonatomic,nonnull)  NSString*  record;

/// 权重，A/AAAA权重范围：0-100、CNAME/JNAME权重范围：1-100。
@property (strong,nonatomic,nonnull)  NSNumber*  weight;

/// 这条解析记录的TTL
@property (strong,nonatomic,nonnull)  NSNumber*  ttl;

/// 优先级，只存在于MX类型的解析记录
@property (strong,nonatomic,nonnull)  NSNumber*  prior;

/// 端口，只存在于SRV类型解析记录
@property (strong,nonatomic,nonnull)  NSNumber*  port;


-(id) initWithRecord:(NSString*) record
    weight:(NSNumber*)weight
    ttl:(NSNumber*)ttl
    prior:(NSNumber*)prior
    port:(NSNumber*)port;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AddRR :NSObject

/// 主机记录
@property (strong,nonatomic,nonnull)  NSString*  hostRecord;

/// 解析记录的值
@property (strong,nonatomic,nonnull)  NSString*  hostValue;

/// 是否是京东云资源
@property (strong,nonatomic,nonnull)  NSNumber*  jcloudRes;

/// 优先级，只存在于MX, SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  mxPriority;

/// 端口，只存在于SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  port;

/// 解析记录的生存时间，单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  ttl;

/// 解析的类型，请参考&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/jd-cloud-dns/detailed-interpretation-of-parsed-records&quot;&gt;解析记录类型详解&lt;/a&gt;
@property (strong,nonatomic,nonnull)  NSString*  type;

/// 解析记录的权重，目前支持权重的有：A/AAAA/CNAME/JNAME，A/AAAA权重范围：0-100、CNAME/JNAME权重范围：1-100。
@property (strong,nonatomic,nonnull)  NSNumber*  weight;

/// 解析线路的ID，请调用describeViewTree接口获取基础解析线路的ID，使用describeUserView接口获取自定义线路的ID。
@property (strong,nonatomic,nonnull)  NSNumber*  viewValue;


-(id) initWithHostRecord:(NSString*) hostRecord
    hostValue:(NSString*)hostValue
    jcloudRes:(NSNumber*)jcloudRes
    mxPriority:(NSNumber*)mxPriority
    port:(NSNumber*)port
    ttl:(NSNumber*)ttl
    type:(NSString*)type
    weight:(NSNumber*)weight
    viewValue:(NSNumber*)viewValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface RR :NSObject

/// 域名解析的唯一ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 主机记录
@property (strong,nonatomic,nonnull)  NSString*  hostRecord;

/// 解析记录的值
@property (strong,nonatomic,nonnull)  NSString*  hostValue;

/// 是否是京东云资源
@property (strong,nonatomic,nonnull)  NSNumber*  jcloudRes;

/// 优先级，只存在于MX, SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  mxPriority;

/// 端口，只存在于SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  port;

/// 解析记录的生存时间，单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  ttl;

/// 解析记录的类型，有A, AAAA, CNAME, JNAME, TXT, MX, CAA, NS, SRV, IMPLICIT_URL，EXPLICIT_URL几种记录类型
@property (strong,nonatomic,nonnull)  NSString*  type;

/// 解析记录的权重
@property (strong,nonatomic,nonnull)  NSNumber*  weight;

/// 解析线路的ID
@property (strong,nonatomic,nonnull)  NSArray<NSNumber*>*  viewValue;


-(id) initWithId:(NSNumber*) idValue
    hostRecord:(NSString*)hostRecord
    hostValue:(NSString*)hostValue
    jcloudRes:(NSNumber*)jcloudRes
    mxPriority:(NSNumber*)mxPriority
    port:(NSNumber*)port
    ttl:(NSNumber*)ttl
    type:(NSString*)type
    weight:(NSNumber*)weight
    viewValue:(NSArray<NSNumber*>*)viewValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BatchSetDNS :NSObject

/// 主机记录
@property (strong,nonatomic,nonnull)  NSString*  hostRecord;

/// 解析记录的值
@property (strong,nonatomic,nonnull)  NSString*  hostValue;

/// 解析记录的ID, 如果是新增请填0，如果是更新，请使用describeResourceRecord接口查询解析记录ID。
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 是否是京东云资源
@property (strong,nonatomic,nonnull)  NSNumber*  jcloudRes;

/// 优先级，只存在于MX, SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  mxPriority;

/// 端口，只存在于SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  port;

/// 解析记录的生存时间，单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  ttl;

/// 解析的类型，请参考&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/jd-cloud-dns/detailed-interpretation-of-parsed-records&quot;&gt;解析记录类型详解&lt;/a&gt;
@property (strong,nonatomic,nonnull)  NSString*  type;

/// 解析记录的权重，目前支持权重的有：A/AAAA/CNAME/JNAME，A/AAAA权重范围：0-100、CNAME/JNAME权重范围：1-100。
@property (strong,nonatomic,nonnull)  NSNumber*  weight;

/// 解析线路的ID，请调用describeViewTree接口获取基础解析线路的ID，使用describeUserView接口获取自定义线路的ID。
@property (strong,nonatomic,nonnull)  NSNumber*  viewValue;


-(id) initWithHostRecord:(NSString*) hostRecord
    hostValue:(NSString*)hostValue
    idValue:(NSNumber*)idValue
    jcloudRes:(NSNumber*)jcloudRes
    mxPriority:(NSNumber*)mxPriority
    port:(NSNumber*)port
    ttl:(NSNumber*)ttl
    type:(NSString*)type
    weight:(NSNumber*)weight
    viewValue:(NSNumber*)viewValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface HostRRlb :NSObject

/// 解析记录的值
@property (strong,nonatomic,nonnull)  NSString*  hostValue;

/// 解析记录的ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 解析记录的权重
@property (strong,nonatomic,nonnull)  NSNumber*  weight;

/// 此条记录在总均衡中的比率的100倍
@property (strong,nonatomic,nonnull)  NSNumber*  rate;


-(id) initWithHostValue:(NSString*) hostValue
    idValue:(NSNumber*)idValue
    weight:(NSNumber*)weight
    rate:(NSNumber*)rate;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ImportDNS :NSObject

/// 主机记录
@property (strong,nonatomic,nonnull)  NSString*  hostRecord;

/// 解析记录的值
@property (strong,nonatomic,nonnull)  NSString*  hostValue;

/// 解析记录的ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 是否是京东云资源
@property (strong,nonatomic,nonnull)  NSNumber*  jcloudRes;

/// 优先级，只存在于MX, SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  mxPriority;

/// 端口，只存在于SRV解析记录类型
@property (strong,nonatomic,nonnull)  NSNumber*  port;

/// 解析记录的生存时间，单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  ttl;

/// 解析的类型，请参考&lt;a href&#x3D;&quot;https://docs.jdcloud.com/cn/jd-cloud-dns/detailed-interpretation-of-parsed-records&quot;&gt;解析记录类型详解&lt;/a&gt;
@property (strong,nonatomic,nonnull)  NSString*  type;

/// 解析记录的权重，目前支持权重的有：A/AAAA/CNAME/JNAME，A/AAAA权重范围：0-100、CNAME/JNAME权重范围：1-100。
@property (strong,nonatomic,nonnull)  NSNumber*  weight;

/// 解析线路的ID，请调用describeViewTree接口获取基础解析线路的ID，使用describeUserView接口获取自定义线路的ID。
@property (strong,nonatomic,nonnull)  NSNumber*  viewValue;


-(id) initWithHostRecord:(NSString*) hostRecord
    hostValue:(NSString*)hostValue
    idValue:(NSNumber*)idValue
    jcloudRes:(NSNumber*)jcloudRes
    mxPriority:(NSNumber*)mxPriority
    port:(NSNumber*)port
    ttl:(NSNumber*)ttl
    type:(NSString*)type
    weight:(NSNumber*)weight
    viewValue:(NSNumber*)viewValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface BackupAddressesInfo :NSObject

/// 地址
@property (strong,nonatomic,nonnull)  NSString*  address;

/// 备用地址1的类型，1为ip 2为域名
@property (strong,nonatomic,nonnull)  NSNumber*  type;

/// 备用地址1的状态，0正常，1异常
@property (strong,nonatomic,nonnull)  NSNumber*  status;


-(id) initWithAddress:(NSString*) address
    type:(NSNumber*)type
    status:(NSNumber*)status;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface HttpHeader :NSObject

/// 头域名称
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 头域阈值
@property (strong,nonatomic,nonnull)  NSString*  value;


-(id) initWithName:(NSString*) name
    value:(NSString*)value;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface HttpResponseCodeRange :NSObject

/// 起始响应码
@property (strong,nonatomic,nonnull)  NSNumber*  start;

/// 终止响应码
@property (strong,nonatomic,nonnull)  NSNumber*  end;


-(id) initWithStart:(NSNumber*) start
    end:(NSNumber*)end;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface MonitorAlarmInfo :NSObject

/// 域名ID
@property (strong,nonatomic,nonnull)  NSNumber*  domainId;

/// 子域名
@property (strong,nonatomic,nonnull)  NSString*  subDomainName;

/// 故障IP/域名
@property (strong,nonatomic,nonnull)  NSString*  host;

/// null
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 故障开始时间，格式Unix timestamp，时间单位：毫秒
@property (strong,nonatomic,nonnull)  NSNumber*  startTime;

/// 故障结束时间，格式Unix timestamp，时间单位：毫秒
@property (strong,nonatomic,nonnull)  NSNumber*  endTime;


-(id) initWithDomainId:(NSNumber*) domainId
    subDomainName:(NSString*)subDomainName
    host:(NSString*)host
    idValue:(NSNumber*)idValue
    startTime:(NSNumber*)startTime
    endTime:(NSNumber*)endTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DomainAdded :NSObject

/// 域名的唯一ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 域名字符串
@property (strong,nonatomic,nonnull)  NSString*  domainName;

/// 创建时间，格式Unix timestamp，时间单位：毫秒
@property (strong,nonatomic,nonnull)  NSNumber*  createTime;

/// 过期时间，格式Unix timestamp，时间单位：毫秒
@property (strong,nonatomic,nonnull)  NSNumber*  expirationDate;

/// 套餐类型，免费:0 企业版:1 企业高级版:2
@property (strong,nonatomic,nonnull)  NSNumber*  packId;


-(id) initWithId:(NSNumber*) idValue
    domainName:(NSString*)domainName
    createTime:(NSNumber*)createTime
    expirationDate:(NSNumber*)expirationDate
    packId:(NSNumber*)packId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DomainInfo :NSObject

/// 域名的唯一ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 域名字符串
@property (strong,nonatomic,nonnull)  NSString*  domainName;

/// 创建时间，格式Unix timestamp，时间单位：毫秒
@property (strong,nonatomic,nonnull)  NSNumber*  createTime;

/// 过期时间，格式Unix timestamp，时间单位：毫秒
@property (strong,nonatomic,nonnull)  NSNumber*  expirationDate;

/// 套餐类型，免费:0 企业版:1 企业高级版:2
@property (strong,nonatomic,nonnull)  NSNumber*  packId;

/// 套餐的名字
@property (strong,nonatomic,nonnull)  NSString*  packName;

/// 解析的状态, 暂无解析:1，正常解析:2， 部分解析:3， 暂停解析:4 NS未修改:5，域名探测错误:7，域名未注册:8，注册局暂停解析:9
@property (strong,nonatomic,nonnull)  NSString*  resolvingStatus;

/// 创建者
@property (strong,nonatomic,nonnull)  NSString*  creator;

/// 是否是京东云资源
@property (strong,nonatomic,nonnull)  NSNumber*  jcloudNs;

/// 域名的锁定状态，0:未锁定， 1:已锁定
@property (strong,nonatomic,nonnull)  NSNumber*  lockStatus;

/// 主域名当前的Nameserver列表
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  probeNsList;

/// 主域名应该设置的Nameserver列表
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  defNsList;


-(id) initWithId:(NSNumber*) idValue
    domainName:(NSString*)domainName
    createTime:(NSNumber*)createTime
    expirationDate:(NSNumber*)expirationDate
    packId:(NSNumber*)packId
    packName:(NSString*)packName
    resolvingStatus:(NSString*)resolvingStatus
    creator:(NSString*)creator
    jcloudNs:(NSNumber*)jcloudNs
    lockStatus:(NSNumber*)lockStatus
    probeNsList:(NSArray<NSString*>*)probeNsList
    defNsList:(NSArray<NSString*>*)defNsList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Notice :NSObject

/// 信息ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 信息的标题
@property (strong,nonatomic,nonnull)  NSString*  title;

/// 信息的详细URL
@property (strong,nonatomic,nonnull)  NSString*  url;


-(id) initWithId:(NSNumber*) idValue
    title:(NSString*)title
    url:(NSString*)url;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResourceInfo :NSObject

/// 实例id
@property (strong,nonatomic,nonnull)  NSString*  resourceId;

/// 实例名称
@property (strong,nonatomic,nonnull)  NSString*  resourceName;

/// 额外描述信息，包括可续费时长，套餐类型
@property (strong,nonatomic,nonnull)  NSString*  remark;


-(id) initWithResourceId:(NSString*) resourceId
    resourceName:(NSString*)resourceName
    remark:(NSString*)remark;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResourceRemarkInfo :NSObject

/// 可续费时长，单位月
@property (strong,nonatomic,nonnull)  NSString*  duration;

/// 套餐类型
@property (strong,nonatomic,nonnull)  NSString*  packType;


-(id) initWithDuration:(NSString*) duration
    packType:(NSString*)packType;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface A :NSObject

/// 返回的状态码
@property (strong,nonatomic,nonnull)  NSNumber*  code;

/// 状态码相应的说明/错误说明
@property (strong,nonatomic,nonnull)  NSString*  message;


-(id) initWithCode:(NSNumber*) code
    message:(NSString*)message;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface NS :NSObject

/// 京东NS服务器:0，非京东服务器:1
@property (strong,nonatomic,nonnull)  NSNumber*  tag;

/// NS记录的值
@property (strong,nonatomic,nonnull)  NSString*  server;


-(id) initWithTag:(NSNumber*) tag
    server:(NSString*)server;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Result :NSObject

/// 返回的状态码
@property (strong,nonatomic,nonnull)  NSNumber*  code;

/// 状态码相应的说明/错误说明
@property (strong,nonatomic,nonnull)  NSString*  detail;


-(id) initWithCode:(NSNumber*) code
    detail:(NSString*)detail;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AddView :NSObject

/// 主域名
@property (strong,nonatomic,nonnull)  NSString*  domainName;

/// 自定义线路名称, 最多64个字节，允许：数字、字母、下划线，-，中文
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// 用户输入的此线路的ip段。  
   /// IPv4地址段支持1.2.3.4-5.6.7.8和1.2.3.4/16两种格式。    
   /// IPv6地址段支持CIDR格式，例如：11:22:33:44:55::99/64
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  ipRanges;


-(id) initWithDomainName:(NSString*) domainName
    viewName:(NSString*)viewName
    ipRanges:(NSArray<NSString*>*)ipRanges;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DelView :NSObject

/// 主域名
@property (strong,nonatomic,nonnull)  NSString*  domainName;

/// 自定义线路名称, 最多64个字节，允许：数字、字母、下划线，-，中文
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// 自定义线路ID
@property (strong,nonatomic,nonnull)  NSNumber*  viewId;


-(id) initWithDomainName:(NSString*) domainName
    viewName:(NSString*)viewName
    viewId:(NSNumber*)viewId;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AddViewIP :NSObject

/// 自定义线路ID
@property (strong,nonatomic,nonnull)  NSNumber*  viewId;

/// 自定义线路名称, 最多64个字节，允许：数字、字母、下划线，-，中文
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// 此线路需要添加的ip段。  
   /// IPv4地址段支持1.2.3.4-5.6.7.8和1.2.3.4/16两种格式。    
   /// IPv6地址段支持CIDR格式，例如：11:22:33:44:55::99/64
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  ipRanges;


-(id) initWithViewId:(NSNumber*) viewId
    viewName:(NSString*)viewName
    ipRanges:(NSArray<NSString*>*)ipRanges;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface UserViewInput :NSObject

/// 自定义线路ID
@property (strong,nonatomic,nonnull)  NSNumber*  viewId;

/// 自定义线路名称, 最多64个字节，允许：数字、字母、下划线，-，中文
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// 主域名ID
@property (strong,nonatomic,nonnull)  NSNumber*  domainId;

/// 用户输入的IP段，IPV4支持1.1.1.1-2.2.2.2和CIDR格式，IPV6仅支持CIDR格式
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  ipRanges;

/// 是否删除，0:没有删除，1:已删除
@property (strong,nonatomic,nonnull)  NSNumber*  isDelete;

/// 创建者
@property (strong,nonatomic,nonnull)  NSString*  creator;

/// 创建时间，格式Unix timestamp，时间单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  createTime;

/// 更新者
@property (strong,nonatomic,nonnull)  NSString*  updator;

/// 更新时间，格式Unix timestamp，时间单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  updateTime;


-(id) initWithViewId:(NSNumber*) viewId
    viewName:(NSString*)viewName
    domainId:(NSNumber*)domainId
    ipRanges:(NSArray<NSString*>*)ipRanges
    isDelete:(NSNumber*)isDelete
    creator:(NSString*)creator
    createTime:(NSNumber*)createTime
    updator:(NSString*)updator
    updateTime:(NSNumber*)updateTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Userview :NSObject

/// 自定义线路ID
@property (strong,nonatomic,nonnull)  NSNumber*  viewId;

/// 自定义线路名称, 最多64个字节，允许：数字、字母、下划线，-，中文
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// 主域名ID
@property (strong,nonatomic,nonnull)  NSNumber*  domainId;

/// 域名
@property (strong,nonatomic,nonnull)  NSString*  domainName;

/// 是否删除，0:没有删除，1:已删除
@property (strong,nonatomic,nonnull)  NSNumber*  isDelete;

/// 创建者
@property (strong,nonatomic,nonnull)  NSString*  creator;

/// 创建时间，格式Unix timestamp，时间单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  createTime;

/// 更新者
@property (strong,nonatomic,nonnull)  NSString*  updator;

/// 更新时间，格式Unix timestamp，时间单位：秒
@property (strong,nonatomic,nonnull)  NSNumber*  updateTime;


-(id) initWithViewId:(NSNumber*) viewId
    viewName:(NSString*)viewName
    domainId:(NSNumber*)domainId
    domainName:(NSString*)domainName
    isDelete:(NSNumber*)isDelete
    creator:(NSString*)creator
    createTime:(NSNumber*)createTime
    updator:(NSString*)updator
    updateTime:(NSNumber*)updateTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DelViewIP :NSObject

/// 自定义线路ID
@property (strong,nonatomic,nonnull)  NSNumber*  viewId;

/// 自定义线路名称, 最多64个字节，允许：数字、字母、下划线，-，中文
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// 此线路需要删除的ip段。  
   /// IPv4地址段支持1.2.3.4-5.6.7.8和1.2.3.4/16两种格式。    
   /// IPv6地址段支持CIDR格式，例如：11:22:33:44:55::99/64
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  ipRanges;


-(id) initWithViewId:(NSNumber*) viewId
    viewName:(NSString*)viewName
    ipRanges:(NSArray<NSString*>*)ipRanges;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Actionlog :NSObject

/// 操作记录的ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 用户名
@property (strong,nonatomic,nonnull)  NSString*  userPin;

/// 操作的域名
@property (strong,nonatomic,nonnull)  NSString*  domain;

/// 操作类型：1新增 2修改 3删除
@property (strong,nonatomic,nonnull)  NSNumber*  type;

/// 操作的详细情况
@property (strong,nonatomic,nonnull)  NSString*  detail;

/// 操作发生的时间
@property (strong,nonatomic,nonnull)  NSNumber*  time;

/// 操作的结果，成功true, 失败false
@property (strong,nonatomic,nonnull)  NSNumber*  success;

/// 操作失败的原因
@property (strong,nonatomic,nonnull)  NSString*  failReason;

/// 操作者的IP
@property (strong,nonatomic,nonnull)  NSString*  clientIp;


-(id) initWithId:(NSNumber*) idValue
    userPin:(NSString*)userPin
    domain:(NSString*)domain
    type:(NSNumber*)type
    detail:(NSString*)detail
    time:(NSNumber*)time
    success:(NSNumber*)success
    failReason:(NSString*)failReason
    clientIp:(NSString*)clientIp;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Getlb :NSObject

/// 负载均衡的解析记录的列表中解析记录是否是相同的权重 
   /// true: 均等负载 
   /// false: 按权重分配负载
   /// 
@property (strong,nonatomic,nonnull)  NSNumber*  balance;

/// 主机记录
@property (strong,nonatomic,nonnull)  NSString*  record;

/// 解析的类型
@property (strong,nonatomic,nonnull)  NSString*  type;

/// 解析线路的名称
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// 解析线路的ID
@property (strong,nonatomic,nonnull)  NSNumber*  viewValue;

/// 负载均衡的解析记录的列表
@property (strong,nonatomic,nonnull)  NSArray<HostRRlb*>*  items;


-(id) initWithBalance:(NSNumber*) balance
    record:(NSString*)record
    type:(NSString*)type
    viewName:(NSString*)viewName
    viewValue:(NSNumber*)viewValue
    items:(NSArray<HostRRlb*>*)items;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SetRR :NSObject

/// 子域名
@property (strong,nonatomic,nonnull)  NSString*  domain;

/// 要设置的解析记录数组
@property (strong,nonatomic,nonnull)  NSArray<SetRecords*>*  data;


-(id) initWithDomain:(NSString*) domain
    data:(NSArray<SetRecords*>*)data;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ViewTree :NSObject

/// 此解析线路是否禁用
@property (strong,nonatomic,nonnull)  NSNumber*  disabled;

/// 解析线路的描述
@property (strong,nonatomic,nonnull)  NSString*  label;

/// 此数据是否是叶子节点
@property (strong,nonatomic,nonnull)  NSNumber*  leaf;

/// 解析线路ID
@property (strong,nonatomic,nonnull)  NSNumber*  value;

/// 解析线路的名称，在使用viewName的参数处使用，如果为空表明此解析线路不能直接使用，请使用它的子线路。
@property (strong,nonatomic,nonnull)  NSString*  viewName;

/// Children
@property (strong,nonatomic,nonnull)  NSArray<ViewTree*>*  children;


-(id) initWithDisabled:(NSNumber*) disabled
    label:(NSString*)label
    leaf:(NSNumber*)leaf
    value:(NSNumber*)value
    viewName:(NSString*)viewName
    children:(NSArray<ViewTree*>*)children;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface RecordsReqs :NSObject

/// 解析记录的结构
@property (strong,nonatomic,nonnull)  NSArray<Records*>*  records;

/// 解析记录所在的解析线路，请调用describeViewTree接口获取。如果不传是默认线路。
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  views;

/// 解析记录的类型，支持A,CNAME,AAAA,JNAME
@property (strong,nonatomic,nonnull)  NSString*  type;


-(id) initWithRecords:(NSArray<Records*>*) records
    views:(NSArray<NSString*>*)views
    type:(NSString*)type;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface ResourceRecordSetReqs :NSObject

/// 子域名
@property (strong,nonatomic,nonnull)  NSString*  domain;

/// 要设置的解析记录数组
@property (strong,nonatomic,nonnull)  NSArray<RecordsReqs*>*  data;


-(id) initWithDomain:(NSString*) domain
    data:(NSArray<RecordsReqs*>*)data;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Monitor :NSObject

/// 连续几次触发报警
@property (strong,nonatomic,nonnull)  NSNumber*  alarmLimit;

/// 现在是否可以恢复
@property (strong,nonatomic,nonnull)  NSNumber*  canRecover;

/// 现在是否可以切换
@property (strong,nonatomic,nonnull)  NSNumber*  canSwitch;

/// 机房探测点的集合
@property (strong,nonatomic,nonnull)  NSString*  clusters;

/// 主域名
@property (strong,nonatomic,nonnull)  NSString*  domainName;

/// 主机状态，0正常，1异常
@property (strong,nonatomic,nonnull)  NSNumber*  hostStatus;

/// 监控对象
@property (strong,nonatomic,nonnull)  NSString*  hostValue;

/// 监控项ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 备用地址1
@property (strong,nonatomic,nonnull)  NSString*  ipBackup01;

/// 备用地址1的状态，0正常，1异常
@property (strong,nonatomic,nonnull)  NSNumber*  ipBackup01Status;

/// 备用地址1的类型，1为ip 2为域名
@property (strong,nonatomic,nonnull)  NSNumber*  ipBackup01Type;

/// 备用地址2
@property (strong,nonatomic,nonnull)  NSString*  ipBackup02;

/// 备用地址2的状态，0正常，1异常
@property (strong,nonatomic,nonnull)  NSNumber*  ipBackup02Status;

/// 备用地址1的类型，1为ip 2为域名
@property (strong,nonatomic,nonnull)  NSNumber*  ipBackup02Type;

/// 手动切换的地址
@property (strong,nonatomic,nonnull)  NSString*  manualBackup;

/// 手动切换的地址的状态，0正常，1异常
@property (strong,nonatomic,nonnull)  NSNumber*  manualBackupStatus;

/// 手动切换的地址的类型，1为ip 2为域名
@property (strong,nonatomic,nonnull)  NSNumber*  manualBackupType;

/// 监控状况 开启监控 2，暂停监控 4
@property (strong,nonatomic,nonnull)  NSNumber*  monitorEnable;

/// 监控频率，单位秒
@property (strong,nonatomic,nonnull)  NSNumber*  monitorFreq;

/// 监控端口
@property (strong,nonatomic,nonnull)  NSNumber*  monitorPort;

/// 不做任何修改0，强制暂停解析记录1，自动切换到备用地址2
@property (strong,nonatomic,nonnull)  NSNumber*  monitorRule;

/// 监控路径
@property (strong,nonatomic,nonnull)  NSString*  monitorUri;

/// 邮箱地址
@property (strong,nonatomic,nonnull)  NSString*  notifyEmail;

/// 不发送邮件0， 发送邮件1
@property (strong,nonatomic,nonnull)  NSNumber*  notifyEmailEnable;

/// 不发送通知栏 0， 发送通知栏 1
@property (strong,nonatomic,nonnull)  NSNumber*  notifyMsgBarEnable;

/// 手机号码
@property (strong,nonatomic,nonnull)  NSString*  notifySms;

/// 不发送短信 0， 发送短信 1
@property (strong,nonatomic,nonnull)  NSNumber*  notifySmsEnable;

/// http协议:0，https协议:1
@property (strong,nonatomic,nonnull)  NSNumber*  protocol;

/// 自动恢复:0 手动恢复:1
@property (strong,nonatomic,nonnull)  NSNumber*  stopRecoverRule;

/// 子域名
@property (strong,nonatomic,nonnull)  NSString*  subDomainName;

/// 自动恢复至主host:0 手动恢复至主host:1
@property (strong,nonatomic,nonnull)  NSNumber*  switchRecoverRule;

/// 1为A记录，2为CNAME
@property (strong,nonatomic,nonnull)  NSNumber*  type;

/// 使用记录，host_value 0，ip_backup_01 1，ip_backup_02 2，cname_backup 3
@property (strong,nonatomic,nonnull)  NSNumber*  usedType;

/// 备用地址及其状态列表
@property (strong,nonatomic,nonnull)  NSArray<BackupAddressesInfo*>*  backupAddressList;

/// 探测请求携带自定义头域及其域值列表
@property (strong,nonatomic,nonnull)  NSArray<HttpHeader*>*  requestHeaders;

/// 探测响应Body体中包含的字符串
@property (strong,nonatomic,nonnull)  NSString*  responseBodyMatch;

/// 探测响应码范围列表
@property (strong,nonatomic,nonnull)  NSArray<HttpResponseCodeRange*>*  responseCodeRanges;

/// 正在使用的有效解析地址
@property (strong,nonatomic,nonnull)  NSString*  effectAddr;


-(id) initWithAlarmLimit:(NSNumber*) alarmLimit
    canRecover:(NSNumber*)canRecover
    canSwitch:(NSNumber*)canSwitch
    clusters:(NSString*)clusters
    domainName:(NSString*)domainName
    hostStatus:(NSNumber*)hostStatus
    hostValue:(NSString*)hostValue
    idValue:(NSNumber*)idValue
    ipBackup01:(NSString*)ipBackup01
    ipBackup01Status:(NSNumber*)ipBackup01Status
    ipBackup01Type:(NSNumber*)ipBackup01Type
    ipBackup02:(NSString*)ipBackup02
    ipBackup02Status:(NSNumber*)ipBackup02Status
    ipBackup02Type:(NSNumber*)ipBackup02Type
    manualBackup:(NSString*)manualBackup
    manualBackupStatus:(NSNumber*)manualBackupStatus
    manualBackupType:(NSNumber*)manualBackupType
    monitorEnable:(NSNumber*)monitorEnable
    monitorFreq:(NSNumber*)monitorFreq
    monitorPort:(NSNumber*)monitorPort
    monitorRule:(NSNumber*)monitorRule
    monitorUri:(NSString*)monitorUri
    notifyEmail:(NSString*)notifyEmail
    notifyEmailEnable:(NSNumber*)notifyEmailEnable
    notifyMsgBarEnable:(NSNumber*)notifyMsgBarEnable
    notifySms:(NSString*)notifySms
    notifySmsEnable:(NSNumber*)notifySmsEnable
    protocol:(NSNumber*)protocol
    stopRecoverRule:(NSNumber*)stopRecoverRule
    subDomainName:(NSString*)subDomainName
    switchRecoverRule:(NSNumber*)switchRecoverRule
    type:(NSNumber*)type
    usedType:(NSNumber*)usedType
    backupAddressList:(NSArray<BackupAddressesInfo*>*)backupAddressList
    requestHeaders:(NSArray<HttpHeader*>*)requestHeaders
    responseBodyMatch:(NSString*)responseBodyMatch
    responseCodeRanges:(NSArray<HttpResponseCodeRange*>*)responseCodeRanges
    effectAddr:(NSString*)effectAddr;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface UpdateMonitor :NSObject

/// 连续几次触发报警
@property (strong,nonatomic,nonnull)  NSNumber*  alarmLimit;

/// 监控项ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 备用地址1
@property (strong,nonatomic,nonnull)  NSString*  ipBackup01;

/// 备用地址2
@property (strong,nonatomic,nonnull)  NSString*  ipBackup02;

/// 备用地址列表，存在该参数时，可不填写参数备用地址1、备用地址2
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  backupAddressList;

/// 监控状况 开启监控:2，暂停监控:4
@property (strong,nonatomic,nonnull)  NSNumber*  monitorEnable;

/// 监控频率，单位秒
@property (strong,nonatomic,nonnull)  NSNumber*  monitorFreq;

/// 监控端口
@property (strong,nonatomic,nonnull)  NSNumber*  monitorPort;

/// 不做任何修改0，强制暂停解析记录1，自动切换到备用地址2
@property (strong,nonatomic,nonnull)  NSNumber*  monitorRule;

/// 监控路径
@property (strong,nonatomic,nonnull)  NSString*  monitorUri;

/// 不发送邮件:0， 发送邮件:1
@property (strong,nonatomic,nonnull)  NSNumber*  notifyEmailEnable;

/// 不发送通知栏:0， 发送通知栏:1
@property (strong,nonatomic,nonnull)  NSNumber*  notifyMsgBarEnable;

/// 不发送短信:0， 发送短信:1
@property (strong,nonatomic,nonnull)  NSNumber*  notifySmsEnable;

/// https 0，https 1
@property (strong,nonatomic,nonnull)  NSNumber*  protocol;

/// 0自动恢复 1手动恢复
@property (strong,nonatomic,nonnull)  NSNumber*  stopRecoverRule;

/// 0自动恢复至主host 1手动恢复至主host
@property (strong,nonatomic,nonnull)  NSNumber*  switchRecoverRule;

/// 探测请求携带自定义头域及其域值列表
@property (strong,nonatomic,nonnull)  NSArray<HttpHeader*>*  requestHeaders;

/// 探测响应Body体中包含的字符串
@property (strong,nonatomic,nonnull)  NSString*  responseBodyMatch;

/// 探测响应码范围列表
@property (strong,nonatomic,nonnull)  NSArray<HttpResponseCodeRange*>*  responseCodeRanges;


-(id) initWithAlarmLimit:(NSNumber*) alarmLimit
    idValue:(NSNumber*)idValue
    ipBackup01:(NSString*)ipBackup01
    ipBackup02:(NSString*)ipBackup02
    backupAddressList:(NSArray<NSString*>*)backupAddressList
    monitorEnable:(NSNumber*)monitorEnable
    monitorFreq:(NSNumber*)monitorFreq
    monitorPort:(NSNumber*)monitorPort
    monitorRule:(NSNumber*)monitorRule
    monitorUri:(NSString*)monitorUri
    notifyEmailEnable:(NSNumber*)notifyEmailEnable
    notifyMsgBarEnable:(NSNumber*)notifyMsgBarEnable
    notifySmsEnable:(NSNumber*)notifySmsEnable
    protocol:(NSNumber*)protocol
    stopRecoverRule:(NSNumber*)stopRecoverRule
    switchRecoverRule:(NSNumber*)switchRecoverRule
    requestHeaders:(NSArray<HttpHeader*>*)requestHeaders
    responseBodyMatch:(NSString*)responseBodyMatch
    responseCodeRanges:(NSArray<HttpResponseCodeRange*>*)responseCodeRanges;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* DomainserviceModel_h */
