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

 

#ifndef HttpdnsModel_h
#define HttpdnsModel_h

@interface Domain :NSObject

/// 索引ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 账户ID
@property (strong,nonatomic,nonnull)  NSString*  accountId;

/// 服务的域名
@property (strong,nonatomic,nonnull)  NSString*  domainName;

/// 域名创建时间
@property (strong,nonatomic,nonnull)  NSNumber*  createTime;

/// 从本月1号开始到现在的httpdns总查询次数
@property (strong,nonatomic,nonnull)  NSNumber*  queryCount;

/// 是否删除
@property (strong,nonatomic,nonnull)  NSNumber*  isDelete;


-(id) initWithId:(NSNumber*) idValue
    accountId:(NSString*)accountId
    domainName:(NSString*)domainName
    createTime:(NSNumber*)createTime
    queryCount:(NSNumber*)queryCount
    isDelete:(NSNumber*)isDelete;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Count :NSObject

/// 类型，&quot;http_auth&quot;,&quot;http_non_auth&quot;,&quot;https_auth&quot;,&quot;https_non_auth&quot;,&quot;all&quot;5种
@property (strong,nonatomic,nonnull)  NSString*  name;

/// 此类型的数据。&lt;br&gt;
   /// &quot;all&quot;类型的data是&quot;http_auth&quot;,&quot;http_noauth&quot;,&quot;https_auth&quot;,&quot;https_noauth&quot;四个类型的data之和。
   /// 
@property (strong,nonatomic,nonnull)  NSArray<NSNumber*>*  data;


-(id) initWithName:(NSString*) name
    data:(NSArray<NSNumber*>*)data;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Totalcount :NSObject

/// 域名
@property (strong,nonatomic,nonnull)  NSString*  domain;

/// 域名的查询总数
@property (strong,nonatomic,nonnull)  NSNumber*  count;


-(id) initWithDomain:(NSString*) domain
    count:(NSNumber*)count;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Dataplan :NSObject

/// 流量包索引ID
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 账户ID
@property (strong,nonatomic,nonnull)  NSString*  accountId;

/// 这个流量包的总数
@property (strong,nonatomic,nonnull)  NSNumber*  number;

/// 这个流量包的单位
@property (strong,nonatomic,nonnull)  NSNumber*  unit;

/// 这个流量包的起始时间
@property (strong,nonatomic,nonnull)  NSNumber*  startTime;

/// 这个流量包的过期时间
@property (strong,nonatomic,nonnull)  NSNumber*  expireTime;

/// 这个流量包使用过了的数量
@property (strong,nonatomic,nonnull)  NSNumber*  usedNumber;

/// 流量包的类型，1:免费流量包 2:收费包
@property (strong,nonatomic,nonnull)  NSNumber*  type;

/// 是否过期，0:未过期 1:过期了
@property (strong,nonatomic,nonnull)  NSNumber*  isExpired;


-(id) initWithId:(NSNumber*) idValue
    accountId:(NSString*)accountId
    number:(NSNumber*)number
    unit:(NSNumber*)unit
    startTime:(NSNumber*)startTime
    expireTime:(NSNumber*)expireTime
    usedNumber:(NSNumber*)usedNumber
    type:(NSNumber*)type
    isExpired:(NSNumber*)isExpired;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DataplanInfo :NSObject

/// 使用过的额度
@property (strong,nonatomic,nonnull)  NSNumber*  usedNumber;

/// 剩余的额度
@property (strong,nonatomic,nonnull)  NSNumber*  excessNumber;


-(id) initWithUsedNumber:(NSNumber*) usedNumber
    excessNumber:(NSNumber*)excessNumber;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface AccountId :NSObject

/// 用户名
@property (strong,nonatomic,nonnull)  NSString*  userPin;

/// 账户ID
@property (strong,nonatomic,nonnull)  NSString*  accountIdValue;


-(id) initWithUserPin:(NSString*) userPin
    accountIdValue:(NSString*)accountIdValue;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface Account :NSObject

/// 索引id
@property (strong,nonatomic,nonnull)  NSNumber*  idValue;

/// 用户名
@property (strong,nonatomic,nonnull)  NSString*  userPin;

/// 账户ID
@property (strong,nonatomic,nonnull)  NSString*  accountId;

/// 提供httpdns服务的IP
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  serviceIp;

/// httpdns服务的密钥
@property (strong,nonatomic,nonnull)  NSArray<NSString*>*  key;

/// httpdns服务的密钥的状态，同key的序号对应
@property (strong,nonatomic,nonnull)  NSArray<NSNumber*>*  keyStatus;

/// 账户创建时间
@property (strong,nonatomic,nonnull)  NSNumber*  createTime;

/// 账户更新时间
@property (strong,nonatomic,nonnull)  NSNumber*  updateTime;

/// 非鉴权方式是否可以访问httpdns服务，0:不可以，1:可以
@property (strong,nonatomic,nonnull)  NSNumber*  noauthAccess;

/// 账户最多可以创建的域名
@property (strong,nonatomic,nonnull)  NSNumber*  domainLimit;

/// 账户状态，0:正常 1:使用80%流量，2:欠费 3:停服
@property (strong,nonatomic,nonnull)  NSNumber*  accountStatus;


-(id) initWithId:(NSNumber*) idValue
    userPin:(NSString*)userPin
    accountId:(NSString*)accountId
    serviceIp:(NSArray<NSString*>*)serviceIp
    key:(NSArray<NSString*>*)key
    keyStatus:(NSArray<NSNumber*>*)keyStatus
    createTime:(NSNumber*)createTime
    updateTime:(NSNumber*)updateTime
    noauthAccess:(NSNumber*)noauthAccess
    domainLimit:(NSNumber*)domainLimit
    accountStatus:(NSNumber*)accountStatus;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface CountData :NSObject

/// 时间序列
@property (strong,nonatomic,nonnull)  NSArray<NSNumber*>*  time;

/// 数据序列
@property (strong,nonatomic,nonnull)  NSArray<Count*>*  count;


-(id) initWithTime:(NSArray<NSNumber*>*) time
    count:(NSArray<Count*>*)count;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface DomainData :NSObject

/// 域名数组
@property (strong,nonatomic,nonnull)  NSArray<Domain*>*  dataList;

/// 当前页的个数
@property (strong,nonatomic,nonnull)  NSNumber*  currentCount;

/// 域名的总数
@property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

/// 域名的总页数
@property (strong,nonatomic,nonnull)  NSNumber*  totalPage;


-(id) initWithDataList:(NSArray<Domain*>*) dataList
    currentCount:(NSNumber*)currentCount
    totalCount:(NSNumber*)totalCount
    totalPage:(NSNumber*)totalPage;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface TotalcountData :NSObject

/// 域名查询次数数组
@property (strong,nonatomic,nonnull)  NSArray<Totalcount*>*  dataList;

/// 当前页的个数
@property (strong,nonatomic,nonnull)  NSNumber*  currentCount;

/// 总数
@property (strong,nonatomic,nonnull)  NSNumber*  totalCount;

/// 总页数
@property (strong,nonatomic,nonnull)  NSNumber*  totalPage;


-(id) initWithDataList:(NSArray<Totalcount*>*) dataList
    currentCount:(NSNumber*)currentCount
    totalCount:(NSNumber*)totalCount
    totalPage:(NSNumber*)totalPage;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* HttpdnsModel_h */
