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

API网关
API网关相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/


#ifndef ApigatewayExecutor_h
#define ApigatewayExecutor_h
#import <JDCloudOCSDKApigateway/ApigatewayClient.h>

///  添加用户域名
@interface ApigatewayCreateUserDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  检查分组名称是否重复,返回重复的apiGroupId,如果没有返回空
@interface ApigatewayCheckGroupNameExistExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除api
@interface ApigatewayDeleteApiByNameExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询分组
@interface ApigatewayDescribeIsDeployApiGroupsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除密钥
@interface ApigatewayDeleteAccessKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除密钥
@interface ApigatewayDeleteSubscriptionKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建api
@interface ApigatewayCreateApisExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  修改流控策略
@interface ApigatewayUpdateRateLimitPolicyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  绑定分组
@interface ApigatewayBindGroupKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  检查accessAuth是否重复
@interface ApigatewayCheckAuthExistExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  下线
@interface ApigatewayOfflineExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询单个密钥
@interface ApigatewayQueryAccessKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  绑定分组
@interface ApigatewayBindGroupAuthExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询分组内全部修订版本号
@interface ApigatewayGetRevisionIdsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  检查AccessKey是否重复
@interface ApigatewayCheckKeyExistExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询访问授权列表
@interface ApigatewayQueryAccessAuthsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询某版本对应的api
@interface ApigatewayQueryRevisionExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  开通后端配置
@interface ApigatewayCreateBackendConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询单个密钥
@interface ApigatewayQuerySubscriptionKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  修改API分组信息
@interface ApigatewayModifyApiGroupAttributeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  校验pin是否存在
@interface ApigatewayCheckPinExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  检查策略名是否重复
@interface ApigatewayCheckPolicyNameExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询单个流控策略
@interface ApigatewayQueryRateLimitPolicyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  修改api
@interface ApigatewayUpdateApiExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询修订版本列表
@interface ApigatewayDescribeRevisionsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建API分组
@interface ApigatewayCreateApiGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  更新密钥
@interface ApigatewayUpdateAccessKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询单个访问授权
@interface ApigatewayQueryAccessAuthExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询可绑定部署列表
@interface ApigatewayQueryKeyGroupListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询domian列表
@interface ApigatewayQueryUserDomainsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询所有已授权api分组列表
@interface ApigatewayAuthorizedApiGroupListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询密钥列表
@interface ApigatewayQuerySubscriptionKeysExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  更新密钥
@interface ApigatewayUpdateSubscriptionKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询绑定分组详情
@interface ApigatewayQueryBindGroupKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  修改单个修订版本
@interface ApigatewayModifyRevisionExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询绑定部署详情
@interface ApigatewayQueryBindGroupPolicyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除api
@interface ApigatewayDeleteApiExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询该版本的部署详情
@interface ApigatewayDescribeDeploymentExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询backendConfig
@interface ApigatewayDescribeBackendConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  批量下线
@interface ApigatewayBatchOfflineExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建访问授权
@interface ApigatewayCreateAccessAuthExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询指定环境下的所有后端配置
@interface ApigatewayDescribeBackendConfigsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询API分组详情
@interface ApigatewayDescribeApiGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建密钥
@interface ApigatewayCreateAccessKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除访问授权
@interface ApigatewayDeleteAccessAuthExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  修改key信息
@interface ApigatewayUpdateKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  检查版本号是否重复,返回重复的版本号,如果没有返回空
@interface ApigatewayCheckRevisionExistExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  更新访问授权
@interface ApigatewayUpdateAccessAuthExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询密钥列表
@interface ApigatewayQueryUcAccessKeysExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询key详情
@interface ApigatewayQueryKeyInfoExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询key列表
@interface ApigatewayQueryKeysExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询可绑定部署列表
@interface ApigatewayQueryPolicyGroupListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  修改后端配置
@interface ApigatewayUpdateBackendConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询已绑定详情
@interface ApigatewayQueryBindGroupAuthExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建key
@interface ApigatewayCreateKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询分组
@interface ApigatewayDescribeApiGroupsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建流控策略
@interface ApigatewayCreateRateLimitPolicyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建修订版本
@interface ApigatewayCreateRevisionExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除单个流控策略
@interface ApigatewayDeleteRateLimitPolicyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询可绑定部署列表
@interface ApigatewayQueryAuthGroupListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  绑定
@interface ApigatewayBindGroupPolicyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  发布版本
@interface ApigatewayDeployExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询密钥列表
@interface ApigatewayQueryAccessKeysExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  修改api
@interface ApigatewayUpdateApiByNameExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除用户域名接口
@interface ApigatewayDeleteUserDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建密钥
@interface ApigatewayCreateSubscriptionKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询流控策略列表
@interface ApigatewayQueryRateLimitPoliciesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询部署列表
@interface ApigatewayDescribeDeploymentsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除单个修订版本
@interface ApigatewayDeleteRevisionExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询单个api
@interface ApigatewayQueryApiExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  创建API时，检查API名称是否重复,返回重复的apiId,如果没有返回空
@interface ApigatewayCheckApiNameExistExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  查询api列表
@interface ApigatewayQueryApisExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  重置key的acesskey和secretkey
@interface ApigatewayResetKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除后端配置
@interface ApigatewayDeleteBackendConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
///  删除单个API分组
@interface ApigatewayDeleteApiGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient;
@end
#endif /* ApigatewayExecutor_h */
