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

 

#ifndef KmsModel_h
#define KmsModel_h

@interface KeyDescCfg :NSObject

/// key名称，默认为&quot;&quot;
@property (strong,nonatomic,nonnull)  NSString*  keyName;

/// key描述，默认为&quot;&quot;
@property (strong,nonatomic,nonnull)  NSString*  keyDesc;

/// 密钥类型： 1: rsa-2048, 0: aes-256，default: aes-256
@property (strong,nonatomic,nonnull)  NSNumber*  keyType;


-(id) initWithKeyName:(NSString*) keyName
    keyDesc:(NSString*)keyDesc
    keyType:(NSNumber*)keyType;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface KeyRotateCfg :NSObject

/// 是否自动轮换，默认为false
@property (strong,nonatomic,nonnull)  NSNumber*  autoRotate;

/// 自动轮换周期，单位为（天），默认为0（永不轮换）
@property (strong,nonatomic,nonnull)  NSNumber*  rotationCycle;


-(id) initWithAutoRotate:(NSNumber*) autoRotate
    rotationCycle:(NSNumber*)rotationCycle;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface KeyVersionItem :NSObject

/// 版本号
@property (strong,nonatomic,nonnull)  NSString*  keyVersion;

/// 创建时间，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// Key当前状态: 0:已启用、1:已禁用、2:计划删除
@property (strong,nonatomic,nonnull)  NSNumber*  keyStatus;

/// 计划删除的时间，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  deleteTime;


-(id) initWithKeyVersion:(NSString*) keyVersion
    createTime:(NSString*)createTime
    keyStatus:(NSNumber*)keyStatus
    deleteTime:(NSString*)deleteTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface KeyInfo :NSObject

/// KeyID
@property (strong,nonatomic,nonnull)  NSString*  keyId;

/// Key名称
@property (strong,nonatomic,nonnull)  NSString*  keyName;

/// Key当前状态: 0:已启用、1:已禁用、2:计划删除
@property (strong,nonatomic,nonnull)  NSNumber*  keyStatus;

/// Key创建时间，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  createTime;

/// Key的用途
@property (strong,nonatomic,nonnull)  NSString*  keyDesc;

/// Key的轮换周期，为0则永久不轮换
@property (strong,nonatomic,nonnull)  NSNumber*  rotationCycle;

/// 计划删除的时间，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  deleteTime;


-(id) initWithKeyId:(NSString*) keyId
    keyName:(NSString*)keyName
    keyStatus:(NSNumber*)keyStatus
    createTime:(NSString*)createTime
    keyDesc:(NSString*)keyDesc
    rotationCycle:(NSNumber*)rotationCycle
    deleteTime:(NSString*)deleteTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecretInfo :NSObject

/// SecretID
@property (strong,nonatomic,nonnull)  NSString*  secretId;

/// Secret名称
@property (strong,nonatomic,nonnull)  NSString*  secretName;

/// Secret用途描述
@property (strong,nonatomic,nonnull)  NSString*  secretDesc;

/// Secret当前状态: 0: 已启用、1: 已禁用
@property (strong,nonatomic,nonnull)  NSNumber*  secretStatus;

/// Secret创建时间，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  createTime;


-(id) initWithSecretId:(NSString*) secretId
    secretName:(NSString*)secretName
    secretDesc:(NSString*)secretDesc
    secretStatus:(NSNumber*)secretStatus
    createTime:(NSString*)createTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecretVersionItem :NSObject

/// 版本标识
@property (strong,nonatomic,nonnull)  NSString*  secretVersion;

/// Secret当前状态: 0: 已启用、1: 已禁用
@property (strong,nonatomic,nonnull)  NSNumber*  secretStatus;

/// Secret激活时间，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  startTime;

/// 到期时间，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  expireTime;

/// 密钥的内容
@property (strong,nonatomic,nonnull)  NSString*  secretData;


-(id) initWithSecretVersion:(NSString*) secretVersion
    secretStatus:(NSNumber*)secretStatus
    startTime:(NSString*)startTime
    expireTime:(NSString*)expireTime
    secretData:(NSString*)secretData;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecretTimeCfg :NSObject

/// 激活时间，默认为当前时间，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  startTime;

/// 到期时间，默认为永久不到期，采用ISO8601标准，格式为: YYYY-MM-DDTHH:mm:ssZ
@property (strong,nonatomic,nonnull)  NSString*  expireTime;


-(id) initWithStartTime:(NSString*) startTime
    expireTime:(NSString*)expireTime;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecretDescCfg :NSObject

/// secret名称，默认为&quot;&quot;
@property (strong,nonatomic,nonnull)  NSString*  secretName;

/// secret描述，默认为&quot;&quot;
@property (strong,nonatomic,nonnull)  NSString*  secretDesc;


-(id) initWithSecretName:(NSString*) secretName
    secretDesc:(NSString*)secretDesc;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface KeyDetail :NSObject

/// KeyID
@property (strong,nonatomic,nonnull)  NSString*  keyId;

/// Key名称
@property (strong,nonatomic,nonnull)  NSString*  keyName;

/// 轮换周期
@property (strong,nonatomic,nonnull)  NSNumber*  rotationCycle;

/// Key版本的个数
@property (strong,nonatomic,nonnull)  NSNumber*  keyVersionCount;

/// Key版本详情的列表
@property (strong,nonatomic,nonnull)  NSArray<KeyVersionItem*>*  keyVersionList;


-(id) initWithKeyId:(NSString*) keyId
    keyName:(NSString*)keyName
    rotationCycle:(NSNumber*)rotationCycle
    keyVersionCount:(NSNumber*)keyVersionCount
    keyVersionList:(NSArray<KeyVersionItem*>*)keyVersionList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface KeyCfg :NSObject

/// 密钥描述配置
@property (strong,nonatomic,nonnull)  KeyDescCfg*  keyDescCfg;

/// 对称密钥的轮换配置；非对称密钥的操作，不支持该配置
@property (strong,nonatomic,nonnull)  KeyRotateCfg*  keyRotateCfg;


-(id) initWithKeyDescCfg:(KeyDescCfg*) keyDescCfg
    keyRotateCfg:(KeyRotateCfg*)keyRotateCfg;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecretCfg :NSObject

/// 机密数据描述信息配置
@property (strong,nonatomic,nonnull)  SecretDescCfg*  secretDescCfg;

/// 机密数据有效时间段配置
@property (strong,nonatomic,nonnull)  SecretTimeCfg*  secretTimeCfg;

/// secret内容
@property (strong,nonatomic,nonnull)  NSString*  secretData;


-(id) initWithSecretDescCfg:(SecretDescCfg*) secretDescCfg
    secretTimeCfg:(SecretTimeCfg*)secretTimeCfg
    secretData:(NSString*)secretData;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecretVersionCfg :NSObject

/// secret内容
@property (strong,nonatomic,nonnull)  NSString*  secretData;

/// 机密数据有效时间段配置
@property (strong,nonatomic,nonnull)  SecretTimeCfg*  secretTimeCfg;


-(id) initWithSecretData:(NSString*) secretData
    secretTimeCfg:(SecretTimeCfg*)secretTimeCfg;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end
@interface SecretDetail :NSObject

/// 密钥的基本信息
@property (strong,nonatomic,nonnull)  SecretInfo*  secretInfo;

/// Secret版本的个数
@property (strong,nonatomic,nonnull)  NSNumber*  secretVersionCount;

/// Secret版本详情的列表
@property (strong,nonatomic,nonnull)  NSArray<SecretVersionItem*>*  secretVersionList;


-(id) initWithSecretInfo:(SecretInfo*) secretInfo
    secretVersionCount:(NSNumber*)secretVersionCount
    secretVersionList:(NSArray<SecretVersionItem*>*)secretVersionList;
-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;                    
@end

#endif /* KmsModel_h */
