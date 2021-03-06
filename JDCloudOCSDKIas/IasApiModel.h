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

JDCLOUD IAS Services API
京东云联合登陆Api

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef IasApiModel_h
#define IasApiModel_h
#import <JDCloudOCSDKCore/JDCloudOCSDKCore.h>
#import <JDCloudOCSDKIas/IasModel.h>


@interface IasAppsRequest:JDCloudRequest

/// pin
@property (strong,nonatomic,nonnull)  NSString*  pin;
/// appName
@property (strong,nonatomic,nonnull)  NSString*  appName;
/// clientId
@property (strong,nonatomic,nonnull)  NSString*  clientId;
/// multiTenant
@property (strong,nonatomic,nonnull)  NSNumber*  multiTenant;
/// state
@property (strong,nonatomic,nonnull)  NSString*  state;
/// scope
@property (strong,nonatomic,nonnull)  NSString*  scope;
/// startTime
@property (strong,nonatomic,nonnull)  NSNumber*  startTime;
/// endTime
@property (strong,nonatomic,nonnull)  NSNumber*  endTime;
/// accountType
@property (strong,nonatomic,nonnull)  NSString*  accountType;
/// pageIndex
@property (strong,nonatomic,nonnull)  NSNumber*  pageIndex;
/// pageSize
@property (strong,nonatomic,nonnull)  NSNumber*  pageSize;
/// offset
@property (strong,nonatomic,nonnull)  NSNumber*  offset;
-(id) initWithRegion:(NSString *)regionId
pin:(NSString*)pin
appName:(NSString*)appName
clientId:(NSString*)clientId
multiTenant:(NSNumber*)multiTenant
state:(NSString*)state
scope:(NSString*)scope
startTime:(NSNumber*)startTime
endTime:(NSNumber*)endTime
accountType:(NSString*)accountType
pageIndex:(NSNumber*)pageIndex
pageSize:(NSNumber*)pageSize
offset:(NSNumber*)offset;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
pin:(NSString*)pin
appName:(NSString*)appName
clientId:(NSString*)clientId
multiTenant:(NSNumber*)multiTenant
state:(NSString*)state
scope:(NSString*)scope
startTime:(NSNumber*)startTime
endTime:(NSNumber*)endTime
accountType:(NSString*)accountType
pageIndex:(NSNumber*)pageIndex
pageSize:(NSNumber*)pageSize
offset:(NSNumber*)offset;

@end

@interface IasAppDetailResult : NSObject
/// 应用
 @property (strong,nonatomic,nonnull)  NSString*  clientId;
/// 应用名
 @property (strong,nonatomic,nonnull)  NSString*  clientName;
/// tokenEndpointAuthMethod
 @property (strong,nonatomic,nonnull)  NSString*  tokenEndpointAuthMethod;
/// grantTypes
 @property (strong,nonatomic,nonnull)  NSString*  grantTypes;
/// responseTypes
 @property (strong,nonatomic,nonnull)  NSString*  responseTypes;
/// redirectUris
 @property (strong,nonatomic,nonnull)  NSString*  redirectUris;
/// clientUri
 @property (strong,nonatomic,nonnull)  NSString*  clientUri;
/// logoUri
 @property (strong,nonatomic,nonnull)  NSString*  logoUri;
/// tosUri
 @property (strong,nonatomic,nonnull)  NSString*  tosUri;
/// policyUri
 @property (strong,nonatomic,nonnull)  NSString*  policyUri;
/// scope
 @property (strong,nonatomic,nonnull)  NSString*  scope;
/// jwksUri
 @property (strong,nonatomic,nonnull)  NSString*  jwksUri;
/// jwks
 @property (strong,nonatomic,nonnull)  NSString*  jwks;
/// contacts
 @property (strong,nonatomic,nonnull)  NSString*  contacts;
/// extension
 @property (strong,nonatomic,nonnull)  NSString*  extension;
/// accessTokenValiditySeconds
 @property (strong,nonatomic,nonnull)  NSNumber*  accessTokenValiditySeconds;
/// refreshTokenValiditySeconds
 @property (strong,nonatomic,nonnull)  NSNumber*  refreshTokenValiditySeconds;
/// multiTenant
 @property (strong,nonatomic,nonnull)  NSNumber*  multiTenant;
/// secretUpdateTime
 @property (strong,nonatomic,nonnull)  NSNumber*  secretUpdateTime;
/// updateTime
 @property (strong,nonatomic,nonnull)  NSNumber*  updateTime;
/// createTime
 @property (strong,nonatomic,nonnull)  NSNumber*  createTime;
/// account
 @property (strong,nonatomic,nonnull)  NSString*  account;
/// userType
 @property (strong,nonatomic,nonnull)  NSString*  userType;
/// state
 @property (strong,nonatomic,nonnull)  NSString*  state;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithClientId:(NSString*) clientId

    clientName:(NSString*)clientName

    tokenEndpointAuthMethod:(NSString*)tokenEndpointAuthMethod

    grantTypes:(NSString*)grantTypes

    responseTypes:(NSString*)responseTypes

    redirectUris:(NSString*)redirectUris

    clientUri:(NSString*)clientUri

    logoUri:(NSString*)logoUri

    tosUri:(NSString*)tosUri

    policyUri:(NSString*)policyUri

    scope:(NSString*)scope

    jwksUri:(NSString*)jwksUri

    jwks:(NSString*)jwks

    contacts:(NSString*)contacts

    extension:(NSString*)extension

    accessTokenValiditySeconds:(NSNumber*)accessTokenValiditySeconds

    refreshTokenValiditySeconds:(NSNumber*)refreshTokenValiditySeconds

    multiTenant:(NSNumber*)multiTenant

    secretUpdateTime:(NSNumber*)secretUpdateTime

    updateTime:(NSNumber*)updateTime

    createTime:(NSNumber*)createTime

    account:(NSString*)account

    userType:(NSString*)userType

    state:(NSString*)state;
@end

@interface IasAppDetailRequest:JDCloudRequest

/// ClientId
@property (strong,nonatomic,nonnull)  NSString*  clientId;
-(id) initWithRegion:(NSString *)regionId
clientId:(NSString*)clientId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clientId:(NSString*)clientId;

@end

@interface IasCreateAppRequest:JDCloudRequest

/// 应用名
@property (strong,nonatomic,nonnull)  NSString*  clientName;
/// 客户端认证方式&lt;br&gt; - none：不设置客户端密码（不推荐）&lt;br&gt; - client_secret_post：客户端必须设置密码，且该密码需要在OAuth2 Token Endpoint提供于请求的body&lt;br&gt; - client_secret_basic：客户端必须设置密码，且该密码需要在OAuth2 Token Endpoint提供于请求的header&lt;br&gt; 支持以下值：&lt;br&gt; （1）none&lt;br&gt; （2）client_secret_post&lt;br&gt; （3）client_secret_basic
@property (strong,nonatomic,nonnull)  NSString*  tokenEndpointAuthMethod;
/// 支持的OAuth类型：&lt;br&gt; - authorization_code：OAuth2授权码模式&lt;br&gt; - implicit：OAuth2隐式授权模式&lt;br&gt; - refresh_token：启用刷新令牌 支持以下值：&lt;br&gt; （1）authorization_code&lt;br&gt; （2）authorization_code,refresh_token&lt;br&gt; （3）authorization_code,implicit&lt;br&gt; （4）authorization_code,implicit,refresh_token&lt;br&gt; （5）implicit&lt;br&gt; 注：如果grantTypes指定了refresh_token，应用将可以使用刷新令牌；如果在创建应用时未指定，则应用不能使用刷新令牌；任何时候应用都可以调用“更新应用”接口更改grantTypes设置
@property (strong,nonatomic,nonnull)  NSString*  grantTypes;
/// 回调地址，最多4个，多个url之间用逗号,分隔，每个url长度不超过1000，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  redirectUris;
/// 应用介绍地址，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  clientUri;
/// 应用logo地址，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  logoUri;
/// 应用服务协议地址，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  tosUri;
/// 应用隐私政策地址，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  policyUri;
/// OAuth scope范围，支持的值为：&lt;br/&gt; （1）openid：用OpenID Connect协议进行身份认证&lt;br/&gt; 指定scope为openid，并在Authorization Endpoint请求该scope，京东云将返回用户的OpenID令牌；如果在创建应用时未指明该值，则应用不能请求OpenID令牌；任何时候应用都可以调用“更新应用”更改该设置
@property (strong,nonatomic,nonnull)  NSString*  scope;
/// JWKS地址，url不支持#符号&lt;br/&gt;jwksUri和jwks传一个即可
@property (strong,nonatomic,nonnull)  NSString*  jwksUri;
/// JWKS
@property (strong,nonatomic,nonnull)  NSString*  jwks;
/// 应用联系信息
@property (strong,nonatomic,nonnull)  NSString*  contacts;
/// 应用扩展信息
@property (strong,nonatomic,nonnull)  NSString*  extension;
/// 访问令牌有效期，值的范围为 600 秒到 6x3600&#x3D;21,600 秒，即10分钟-6小时
@property (strong,nonatomic,nonnull)  NSNumber*  accessTokenValiditySeconds;
/// 刷新令牌有效期，值的范围为 30x24x3600&#x3D;2,592,000 秒到 365x24x3600&#x3D;31,536,000 秒，即30天-365天&lt;br/&gt;&lt;br/&gt; 注：当 GrantTypes 包含 refresh_token 时，refreshTokenValiditySeconds 为必传参数
@property (strong,nonatomic,nonnull)  NSNumber*  refreshTokenValiditySeconds;
/// 是否为多租户应用&lt;br/&gt; &quot;false&quot;：该应用仅支持当前创建应用的租户访问，其他京东云租户无法访问&lt;br/&gt;        &quot;true&quot;：该应用支持其他京东云租户访问，但当前创建应用的租户不能访问
@property (strong,nonatomic,nonnull)  NSNumber*  multiTenant;
/// 应用的密码，支持8-255位长度的ASCII可打印字符，建议使用足够复杂的密码策略&lt;br/&gt;&lt;br/&gt;        注：当TokenEndpointAuthMethod不等于none时，secret为必传参数；反之，当指定了secret时，TokenEndpointAuthMethod不能等于none&lt;br/&gt;京东云将不可逆加密secret，因此您无法再次从京东云查看该密码，但您可以随时通过更新应用重新设置secret
@property (strong,nonatomic,nonnull)  NSString*  secret;
/// 能访问应用的账号类型，支持以下值：&lt;br/&gt; （1）root：支持主账号访问，子用户无法访问&lt;br/&gt; （2）sub：子用户账号，使用主账号不能访问&lt;br/&gt;&lt;br/&gt; 注：multiTenant和userType的组合指定了应用的用户人群，典型的应用场景如：&lt;br/&gt; （1）应用向当前租户下的子用户开放（2）应用向京东云其他租户主账号开放
@property (strong,nonatomic,nonnull)  NSString*  userType;
-(id) initWithRegion:(NSString *)regionId
clientName:(NSString*)clientName
tokenEndpointAuthMethod:(NSString*)tokenEndpointAuthMethod
grantTypes:(NSString*)grantTypes
redirectUris:(NSString*)redirectUris
clientUri:(NSString*)clientUri
logoUri:(NSString*)logoUri
tosUri:(NSString*)tosUri
policyUri:(NSString*)policyUri
scope:(NSString*)scope
jwksUri:(NSString*)jwksUri
jwks:(NSString*)jwks
contacts:(NSString*)contacts
extension:(NSString*)extension
accessTokenValiditySeconds:(NSNumber*)accessTokenValiditySeconds
refreshTokenValiditySeconds:(NSNumber*)refreshTokenValiditySeconds
multiTenant:(NSNumber*)multiTenant
secret:(NSString*)secret
userType:(NSString*)userType;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clientName:(NSString*)clientName
tokenEndpointAuthMethod:(NSString*)tokenEndpointAuthMethod
grantTypes:(NSString*)grantTypes
redirectUris:(NSString*)redirectUris
clientUri:(NSString*)clientUri
logoUri:(NSString*)logoUri
tosUri:(NSString*)tosUri
policyUri:(NSString*)policyUri
scope:(NSString*)scope
jwksUri:(NSString*)jwksUri
jwks:(NSString*)jwks
contacts:(NSString*)contacts
extension:(NSString*)extension
accessTokenValiditySeconds:(NSNumber*)accessTokenValiditySeconds
refreshTokenValiditySeconds:(NSNumber*)refreshTokenValiditySeconds
multiTenant:(NSNumber*)multiTenant
secret:(NSString*)secret
userType:(NSString*)userType;

@end

@interface IasUpdateAppRequest:JDCloudRequest

/// 应用名
@property (strong,nonatomic,nonnull)  NSString*  clientName;
/// 客户端认证方式：&lt;br/&gt; none：不设置客户端密码（不推荐）&lt;br/&gt; client_secret_post：客户端必须设置密码，且该密码需要在OAuth2 Token Endpoint提供于请求的body&lt;br/&gt; client_secret_basic：客户端必须设置密码，且该密码需要在OAuth2 Token Endpoint提供于请求的header&lt;br/&gt;&lt;br/&gt; 支持以下值：&lt;br/&gt; （1）none&lt;br/&gt; （2）client_secret_post&lt;br/&gt; （3）client_secret_basic
@property (strong,nonatomic,nonnull)  NSString*  tokenEndpointAuthMethod;
/// 支持的OAuth类型：&lt;br/&gt; authorization_code：OAuth2授权码模式&lt;br/&gt; implicit：OAuth2隐式授权模式&lt;br/&gt; refresh_token：启用刷新令牌&lt;br/&gt;&lt;br/&gt; 支持以下值：&lt;br/&gt; （1）authorization_code&lt;br/&gt; （2）authorization_code,refresh_token&lt;br/&gt; （3）authorization_code,implicit&lt;br/&gt; （4）authorization_code,implicit,refresh_token&lt;br/&gt; （5）implicit&lt;br/&gt;&lt;br/&gt;        注：如果grantTypes指定了refresh_token，应用将可以使用刷新令牌；如果在创建应用时未指定，则应用不能使用刷新令牌；任何时候应用都可以调用“更新应用”接口更改grantTypes设置
@property (strong,nonatomic,nonnull)  NSString*  grantTypes;
/// 回调地址，最多4个，多个url之间用逗号,分隔，每个url长度不超过1000，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  redirectUris;
/// 应用介绍地址，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  clientUri;
/// 应用logo地址，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  logoUri;
/// 应用服务协议地址，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  tosUri;
/// 应用隐私政策地址，url不支持#符号
@property (strong,nonatomic,nonnull)  NSString*  policyUri;
/// OAuth scope范围，支持的值为：&lt;br/&gt; （1）openid：用OpenID Connect协议进行身份认证&lt;br/&gt; 指定scope为openid，并在Authorization Endpoint请求该scope，京东云将返回用户的OpenID令牌；如果在创建应用时未指明该值，则应用不能请求OpenID令牌；任何时候应用都可以调用“更新应用”更改该设置
@property (strong,nonatomic,nonnull)  NSString*  scope;
/// JWKS地址，url不支持#符号&lt;br/&gt; jwksUri和jwks传一个即可
@property (strong,nonatomic,nonnull)  NSString*  jwksUri;
/// JWKS
@property (strong,nonatomic,nonnull)  NSString*  jwks;
/// 应用联系信息
@property (strong,nonatomic,nonnull)  NSString*  contacts;
/// 应用扩展信息
@property (strong,nonatomic,nonnull)  NSString*  extension;
/// 访问令牌有效期，值的范围为 600 秒到 6x3600&#x3D;21,600 秒，即10分钟-6小时
@property (strong,nonatomic,nonnull)  NSNumber*  accessTokenValiditySeconds;
/// 刷新令牌有效期，值的范围为 30x24x3600&#x3D;2,592,000 秒到 365x24x3600&#x3D;31,536,000 秒，即30天-365天&lt;br/&gt;&lt;br/&gt; 注：当 GrantTypes 包含 refresh_token 时，refreshTokenValiditySeconds 为必传参数
@property (strong,nonatomic,nonnull)  NSNumber*  refreshTokenValiditySeconds;
/// 是否为多租户应用&lt;br/&gt; &quot;false&quot;：该应用仅支持当前创建应用的租户访问，其他京东云租户无法访问&lt;br/&gt;        &quot;true&quot;：该应用支持其他京东云租户访问，但当前创建应用的租户不能访问
@property (strong,nonatomic,nonnull)  NSNumber*  multiTenant;
/// 应用的密码，支持8-255位长度的ASCII可打印字符，建议使用足够复杂的密码策略&lt;br/&gt;&lt;br/&gt; 注：当TokenEndpointAuthMethod不等于none时，secret为必传参数；反之，当指定了secret时，TokenEndpointAuthMethod不能等于none&lt;br/&gt; 京东云将不可逆加密secret，因此您无法再次从京东云查看该密码，但您可以随时通过更新应用重新设置secret
@property (strong,nonatomic,nonnull)  NSString*  secret;
/// 能访问应用的账号类型，支持以下值：&lt;br/&gt; （1）root：支持主账号访问，子用户无法访问&lt;br/&gt; （2）sub：子用户账号，使用主账号不能访问&lt;br/&gt;&lt;br/&gt; 注：multiTenant和userType的组合指定了应用的用户人群，典型的应用场景如：&lt;br/&gt; （1）应用向当前租户下的子用户开放（2）应用向京东云其他租户主账号开放
@property (strong,nonatomic,nonnull)  NSString*  userType;
/// 应用ID，应用创建时由京东云分配的16位数字ID
@property (strong,nonatomic,nonnull)  NSString*  clientId;
-(id) initWithRegion:(NSString *)regionId
clientName:(NSString*)clientName
tokenEndpointAuthMethod:(NSString*)tokenEndpointAuthMethod
grantTypes:(NSString*)grantTypes
redirectUris:(NSString*)redirectUris
clientUri:(NSString*)clientUri
logoUri:(NSString*)logoUri
tosUri:(NSString*)tosUri
policyUri:(NSString*)policyUri
scope:(NSString*)scope
jwksUri:(NSString*)jwksUri
jwks:(NSString*)jwks
contacts:(NSString*)contacts
extension:(NSString*)extension
accessTokenValiditySeconds:(NSNumber*)accessTokenValiditySeconds
refreshTokenValiditySeconds:(NSNumber*)refreshTokenValiditySeconds
multiTenant:(NSNumber*)multiTenant
secret:(NSString*)secret
userType:(NSString*)userType
clientId:(NSString*)clientId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clientName:(NSString*)clientName
tokenEndpointAuthMethod:(NSString*)tokenEndpointAuthMethod
grantTypes:(NSString*)grantTypes
redirectUris:(NSString*)redirectUris
clientUri:(NSString*)clientUri
logoUri:(NSString*)logoUri
tosUri:(NSString*)tosUri
policyUri:(NSString*)policyUri
scope:(NSString*)scope
jwksUri:(NSString*)jwksUri
jwks:(NSString*)jwks
contacts:(NSString*)contacts
extension:(NSString*)extension
accessTokenValiditySeconds:(NSNumber*)accessTokenValiditySeconds
refreshTokenValiditySeconds:(NSNumber*)refreshTokenValiditySeconds
multiTenant:(NSNumber*)multiTenant
secret:(NSString*)secret
userType:(NSString*)userType
clientId:(NSString*)clientId;

@end

@interface IasUpdateAppResult : NSObject
/// 应用ID，由京东云分配的16位数字ID
 @property (strong,nonatomic,nonnull)  NSString*  clientId;
/// clientName参数值
 @property (strong,nonatomic,nonnull)  NSString*  clientName;
/// tokenEndpointAuthMethod参数值
 @property (strong,nonatomic,nonnull)  NSString*  tokenEndpointAuthMethod;
/// grantTypes参数值
 @property (strong,nonatomic,nonnull)  NSString*  grantTypes;
/// 当grantTypes为authorization_code时，responseTypes为code；当grantTypes为implicit时，responseTypes为token
 @property (strong,nonatomic,nonnull)  NSString*  responseTypes;
/// redirectUris参数值
 @property (strong,nonatomic,nonnull)  NSString*  redirectUris;
/// clientUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  clientUri;
/// logoUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  logoUri;
/// tosUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  tosUri;
/// policyUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  policyUri;
/// scope参数值
 @property (strong,nonatomic,nonnull)  NSString*  scope;
/// jwksUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  jwksUri;
/// jwks参数值
 @property (strong,nonatomic,nonnull)  NSString*  jwks;
/// contacts参数值
 @property (strong,nonatomic,nonnull)  NSString*  contacts;
/// extension参数值
 @property (strong,nonatomic,nonnull)  NSString*  extension;
/// accessTokenValiditySeconds参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  accessTokenValiditySeconds;
/// refreshTokenValiditySeconds参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  refreshTokenValiditySeconds;
/// multiTenant参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  multiTenant;
/// secretUpdateTime参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  secretUpdateTime;
/// updateTime参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  updateTime;
/// createTime参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  createTime;
/// 创建应用的账户用户名
 @property (strong,nonatomic,nonnull)  NSString*  account;
/// userType参数值
 @property (strong,nonatomic,nonnull)  NSString*  userType;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithClientId:(NSString*) clientId

    clientName:(NSString*)clientName

    tokenEndpointAuthMethod:(NSString*)tokenEndpointAuthMethod

    grantTypes:(NSString*)grantTypes

    responseTypes:(NSString*)responseTypes

    redirectUris:(NSString*)redirectUris

    clientUri:(NSString*)clientUri

    logoUri:(NSString*)logoUri

    tosUri:(NSString*)tosUri

    policyUri:(NSString*)policyUri

    scope:(NSString*)scope

    jwksUri:(NSString*)jwksUri

    jwks:(NSString*)jwks

    contacts:(NSString*)contacts

    extension:(NSString*)extension

    accessTokenValiditySeconds:(NSNumber*)accessTokenValiditySeconds

    refreshTokenValiditySeconds:(NSNumber*)refreshTokenValiditySeconds

    multiTenant:(NSNumber*)multiTenant

    secretUpdateTime:(NSNumber*)secretUpdateTime

    updateTime:(NSNumber*)updateTime

    createTime:(NSNumber*)createTime

    account:(NSString*)account

    userType:(NSString*)userType;
@end

@interface IasDeleteAppRequest:JDCloudRequest

/// 应用ID，应用创建时由京东云分配的16位数字ID
@property (strong,nonatomic,nonnull)  NSString*  clientId;
-(id) initWithRegion:(NSString *)regionId
clientId:(NSString*)clientId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clientId:(NSString*)clientId;

@end

@interface IasDeleteAppResult : NSObject
/// 删除结果[1:删除成功,0:删除失败]
 @property (strong,nonatomic,nonnull)  NSNumber*  count;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithCount:(NSNumber*) count;
@end

@interface IasGetAppResult : NSObject
/// 应用ID，由京东云分配的16位数字ID
 @property (strong,nonatomic,nonnull)  NSString*  clientId;
/// 应用名
 @property (strong,nonatomic,nonnull)  NSString*  clientName;
/// 客户端认证方式
 @property (strong,nonatomic,nonnull)  NSString*  tokenEndpointAuthMethod;
/// 支持的OAuth类型
 @property (strong,nonatomic,nonnull)  NSString*  grantTypes;
/// 当grantTypes为authorization_code时，responseTypes为code；当grantTypes为implicit时，responseTypes为token
 @property (strong,nonatomic,nonnull)  NSString*  responseTypes;
/// 回调地址
 @property (strong,nonatomic,nonnull)  NSString*  redirectUris;
/// 应用介绍地址
 @property (strong,nonatomic,nonnull)  NSString*  clientUri;
/// 应用logo地址
 @property (strong,nonatomic,nonnull)  NSString*  logoUri;
/// 应用服务协议地址
 @property (strong,nonatomic,nonnull)  NSString*  tosUri;
/// 应用隐私条款地址
 @property (strong,nonatomic,nonnull)  NSString*  policyUri;
/// OAuth scope授权范围
 @property (strong,nonatomic,nonnull)  NSString*  scope;
/// JWKS地址
 @property (strong,nonatomic,nonnull)  NSString*  jwksUri;
/// JWKS
 @property (strong,nonatomic,nonnull)  NSString*  jwks;
/// 应用联系信息
 @property (strong,nonatomic,nonnull)  NSString*  contacts;
/// 应用扩展信息
 @property (strong,nonatomic,nonnull)  NSString*  extension;
/// 访问令牌有效期
 @property (strong,nonatomic,nonnull)  NSNumber*  accessTokenValiditySeconds;
/// 刷新令牌有效期
 @property (strong,nonatomic,nonnull)  NSNumber*  refreshTokenValiditySeconds;
/// 是否为多租户应用
 @property (strong,nonatomic,nonnull)  NSNumber*  multiTenant;
/// 应用密码更新时间
 @property (strong,nonatomic,nonnull)  NSNumber*  secretUpdateTime;
/// 应用更新时间
 @property (strong,nonatomic,nonnull)  NSNumber*  updateTime;
/// 应用创建时间
 @property (strong,nonatomic,nonnull)  NSNumber*  createTime;
/// 创建应用的账户用户名
 @property (strong,nonatomic,nonnull)  NSString*  account;
/// 允许登录应用的账号类型
 @property (strong,nonatomic,nonnull)  NSString*  userType;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithClientId:(NSString*) clientId

    clientName:(NSString*)clientName

    tokenEndpointAuthMethod:(NSString*)tokenEndpointAuthMethod

    grantTypes:(NSString*)grantTypes

    responseTypes:(NSString*)responseTypes

    redirectUris:(NSString*)redirectUris

    clientUri:(NSString*)clientUri

    logoUri:(NSString*)logoUri

    tosUri:(NSString*)tosUri

    policyUri:(NSString*)policyUri

    scope:(NSString*)scope

    jwksUri:(NSString*)jwksUri

    jwks:(NSString*)jwks

    contacts:(NSString*)contacts

    extension:(NSString*)extension

    accessTokenValiditySeconds:(NSNumber*)accessTokenValiditySeconds

    refreshTokenValiditySeconds:(NSNumber*)refreshTokenValiditySeconds

    multiTenant:(NSNumber*)multiTenant

    secretUpdateTime:(NSNumber*)secretUpdateTime

    updateTime:(NSNumber*)updateTime

    createTime:(NSNumber*)createTime

    account:(NSString*)account

    userType:(NSString*)userType;
@end

@interface IasCreateAppResult : NSObject
/// 应用ID，由京东云分配的16位数字ID
 @property (strong,nonatomic,nonnull)  NSString*  clientId;
/// clientName参数值
 @property (strong,nonatomic,nonnull)  NSString*  clientName;
/// tokenEndpointAuthMethod参数值
 @property (strong,nonatomic,nonnull)  NSString*  tokenEndpointAuthMethod;
/// grantTypes参数值
 @property (strong,nonatomic,nonnull)  NSString*  grantTypes;
/// 当grantTypes为authorization_code时，responseTypes为code；当grantTypes为implicit时，responseTypes为token
 @property (strong,nonatomic,nonnull)  NSString*  responseTypes;
/// redirectUris参数值
 @property (strong,nonatomic,nonnull)  NSString*  redirectUris;
/// clientUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  clientUri;
/// logoUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  logoUri;
/// tosUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  tosUri;
/// policyUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  policyUri;
/// scope参数值
 @property (strong,nonatomic,nonnull)  NSString*  scope;
/// jwksUri参数值
 @property (strong,nonatomic,nonnull)  NSString*  jwksUri;
/// jwks参数值
 @property (strong,nonatomic,nonnull)  NSString*  jwks;
/// contacts参数值
 @property (strong,nonatomic,nonnull)  NSString*  contacts;
/// extension参数值
 @property (strong,nonatomic,nonnull)  NSString*  extension;
/// accessTokenValiditySeconds参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  accessTokenValiditySeconds;
/// refreshTokenValiditySeconds参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  refreshTokenValiditySeconds;
/// multiTenant参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  multiTenant;
/// secretUpdateTime参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  secretUpdateTime;
/// updateTime参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  updateTime;
/// createTime参数值
 @property (strong,nonatomic,nonnull)  NSNumber*  createTime;
/// 创建应用的账户用户名
 @property (strong,nonatomic,nonnull)  NSString*  account;
/// userType参数值
 @property (strong,nonatomic,nonnull)  NSString*  userType;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithClientId:(NSString*) clientId

    clientName:(NSString*)clientName

    tokenEndpointAuthMethod:(NSString*)tokenEndpointAuthMethod

    grantTypes:(NSString*)grantTypes

    responseTypes:(NSString*)responseTypes

    redirectUris:(NSString*)redirectUris

    clientUri:(NSString*)clientUri

    logoUri:(NSString*)logoUri

    tosUri:(NSString*)tosUri

    policyUri:(NSString*)policyUri

    scope:(NSString*)scope

    jwksUri:(NSString*)jwksUri

    jwks:(NSString*)jwks

    contacts:(NSString*)contacts

    extension:(NSString*)extension

    accessTokenValiditySeconds:(NSNumber*)accessTokenValiditySeconds

    refreshTokenValiditySeconds:(NSNumber*)refreshTokenValiditySeconds

    multiTenant:(NSNumber*)multiTenant

    secretUpdateTime:(NSNumber*)secretUpdateTime

    updateTime:(NSNumber*)updateTime

    createTime:(NSNumber*)createTime

    account:(NSString*)account

    userType:(NSString*)userType;
@end

@interface IasGetAppRequest:JDCloudRequest

/// 应用ID，应用创建时由京东云分配的16位数字ID
@property (strong,nonatomic,nonnull)  NSString*  clientId;
-(id) initWithRegion:(NSString *)regionId
clientId:(NSString*)clientId;

-(id) initWithRegion:(NSString *)regionId
             version:(NSString *)version
clientId:(NSString*)clientId;

@end

@interface IasAppsResult : NSObject
/// Pagination
 @property (strong,nonatomic,nonnull)  Pagination*  pagination;
/// Result
 @property (strong,nonatomic,nonnull)  NSArray<AppQueryResultItem*>*  result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithPagination:(Pagination*) pagination

    result:(NSArray<AppQueryResultItem*>*)result;
@end

@interface IasAppsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IasAppsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IasAppsResult*) result;
@end

@interface IasStateRequest:JDCloudRequest

@end

@interface IasStateResult : NSObject
/// States
 @property (strong,nonatomic,nonnull)  NSArray<State*>*  states;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithStates:(NSArray<State*>*) states;
@end

@interface IasStateResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IasStateResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IasStateResult*) result;
@end

@interface IasAppDetailResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IasAppDetailResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IasAppDetailResult*) result;
@end

@interface IasCreateAppResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IasCreateAppResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IasCreateAppResult*) result;
@end

@interface IasUpdateAppResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IasUpdateAppResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IasUpdateAppResult*) result;
@end

@interface IasDeleteAppResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IasDeleteAppResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IasDeleteAppResult*) result;
@end

@interface IasGetAppsResult : NSObject
/// Apps
 @property (strong,nonatomic,nonnull)  NSArray<ApplicationRes*>*  apps;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;
-(id) initWithApps:(NSArray<ApplicationRes*>*) apps;
@end

@interface IasGetAppResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IasGetAppResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IasGetAppResult*) result;
@end

@interface IasGetAppsResponse : NSObject

@property NSString* requestId;

@property ServiceError* error;

@property IasGetAppsResult* result;

-(NSMutableDictionary*) dictionary;

-(id) initWithDic:(NSDictionary*)dictionary;

-(id) initWithRequestId:(NSString*) requestId
        error:(ServiceError*) error
        result:(IasGetAppsResult*) result;
@end

@interface IasGetAppsRequest:JDCloudRequest

@end

#endif /* IasApiModel_h */
