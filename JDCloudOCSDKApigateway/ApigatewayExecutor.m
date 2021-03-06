
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

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKApigateway/ApigatewayExecutor.h>


/// 添加用户域名
@implementation  ApigatewayCreateUserDomainExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/userdomain";
    return self;
}
@end

/// 检查分组名称是否重复,返回重复的apiGroupId,如果没有返回空
@implementation  ApigatewayCheckGroupNameExistExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/apiGroups:checkGroupNameExist";
    return self;
}
@end

/// 删除api
@implementation  ApigatewayDeleteApiByNameExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/apisName/{apiName}";
    return self;
}
@end

/// 查询分组
@implementation  ApigatewayDescribeIsDeployApiGroupsExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/apiGroups:isDeploy";
    return self;
}
@end

/// 删除密钥
@implementation  ApigatewayDeleteAccessKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/accessKeys/{accessKeyId}";
    return self;
}
@end

/// 删除密钥
@implementation  ApigatewayDeleteSubscriptionKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/subscriptionKeys/{subscriptionKeyId}";
    return self;
}
@end

/// 创建api
@implementation  ApigatewayCreateApisExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/apis";
    return self;
}
@end

/// 修改流控策略
@implementation  ApigatewayUpdateRateLimitPolicyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/rateLimitPolicies/{policyId}";
    return self;
}
@end

/// 绑定分组
@implementation  ApigatewayBindGroupKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/accessKeys/{accessKeyId}:bindGroup";
    return self;
}
@end

/// 检查accessAuth是否重复
@implementation  ApigatewayCheckAuthExistExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/accessAuths:checkAccessKeyExist";
    return self;
}
@end

/// 下线
@implementation  ApigatewayOfflineExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/deployments/{deploymentId}:offline";
    return self;
}
@end

/// 查询单个密钥
@implementation  ApigatewayQueryAccessKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessKeys/{accessKeyId}";
    return self;
}
@end

/// 绑定分组
@implementation  ApigatewayBindGroupAuthExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/accessAuths/{accessAuthId}:bindGroup";
    return self;
}
@end

/// 查询分组内全部修订版本号
@implementation  ApigatewayGetRevisionIdsExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/revisions";
    return self;
}
@end

/// 检查AccessKey是否重复
@implementation  ApigatewayCheckKeyExistExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/accessKeys:checkAccessKeyExist";
    return self;
}
@end

/// 查询访问授权列表
@implementation  ApigatewayQueryAccessAuthsExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessAuths";
    return self;
}
@end

/// 查询某版本对应的api
@implementation  ApigatewayQueryRevisionExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/revision/{revisionId}";
    return self;
}
@end

/// 开通后端配置
@implementation  ApigatewayCreateBackendConfigExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/backendConfig";
    return self;
}
@end

/// 查询单个密钥
@implementation  ApigatewayQuerySubscriptionKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/subscriptionKeys/{subscriptionKeyId}";
    return self;
}
@end

/// 修改API分组信息
@implementation  ApigatewayModifyApiGroupAttributeExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/apiGroups/{apiGroupId}";
    return self;
}
@end

/// 校验pin是否存在
@implementation  ApigatewayCheckPinExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/pins/{pin}:checkPin";
    return self;
}
@end

/// 检查策略名是否重复
@implementation  ApigatewayCheckPolicyNameExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/rateLimitPolicies:checkPolicyNameExist";
    return self;
}
@end

/// 查询单个流控策略
@implementation  ApigatewayQueryRateLimitPolicyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/rateLimitPolicies/{policyId}";
    return self;
}
@end

/// 修改api
@implementation  ApigatewayUpdateApiExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/apis/{apiId}";
    return self;
}
@end

/// 查询修订版本列表
@implementation  ApigatewayDescribeRevisionsExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/revision";
    return self;
}
@end

/// 创建API分组
@implementation  ApigatewayCreateApiGroupExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/apiGroups";
    return self;
}
@end

/// 更新密钥
@implementation  ApigatewayUpdateAccessKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/accessKeys/{accessKeyId}";
    return self;
}
@end

/// 查询单个访问授权
@implementation  ApigatewayQueryAccessAuthExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessAuths/{accessAuthId}";
    return self;
}
@end

/// 查询可绑定部署列表
@implementation  ApigatewayQueryKeyGroupListExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessKeys/{accessKeyId}:groupList";
    return self;
}
@end

/// 查询domian列表
@implementation  ApigatewayQueryUserDomainsExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/userdomain";
    return self;
}
@end

/// 查询所有已授权api分组列表
@implementation  ApigatewayAuthorizedApiGroupListExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessAuths:authorizedApiGroupList";
    return self;
}
@end

/// 查询密钥列表
@implementation  ApigatewayQuerySubscriptionKeysExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/subscriptionKeys";
    return self;
}
@end

/// 更新密钥
@implementation  ApigatewayUpdateSubscriptionKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/subscriptionKeys/{subscriptionKeyId}";
    return self;
}
@end

/// 查询绑定分组详情
@implementation  ApigatewayQueryBindGroupKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessKeys/{accessKeyId}:bindGroup";
    return self;
}
@end

/// 修改单个修订版本
@implementation  ApigatewayModifyRevisionExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/revision/{revisionId}";
    return self;
}
@end

/// 查询绑定部署详情
@implementation  ApigatewayQueryBindGroupPolicyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/rateLimitPolicies/{policyId}:bindGroup";
    return self;
}
@end

/// 删除api
@implementation  ApigatewayDeleteApiExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/apis/{apiId}";
    return self;
}
@end

/// 查询该版本的部署详情
@implementation  ApigatewayDescribeDeploymentExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/deployments/{deploymentId}";
    return self;
}
@end

/// 查询backendConfig
@implementation  ApigatewayDescribeBackendConfigExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/backendConfig/{backendConfigId}";
    return self;
}
@end

/// 批量下线
@implementation  ApigatewayBatchOfflineExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/deployments:offline";
    return self;
}
@end

/// 创建访问授权
@implementation  ApigatewayCreateAccessAuthExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/accessAuths";
    return self;
}
@end

/// 查询指定环境下的所有后端配置
@implementation  ApigatewayDescribeBackendConfigsExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/environment/{environment}/backendConfigs";
    return self;
}
@end

/// 查询API分组详情
@implementation  ApigatewayDescribeApiGroupExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/apiGroups/{apiGroupId}";
    return self;
}
@end

/// 创建密钥
@implementation  ApigatewayCreateAccessKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/accessKeys";
    return self;
}
@end

/// 删除访问授权
@implementation  ApigatewayDeleteAccessAuthExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/accessAuths/{accessAuthId}";
    return self;
}
@end

/// 修改key信息
@implementation  ApigatewayUpdateKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/kms";
    return self;
}
@end

/// 检查版本号是否重复,返回重复的版本号,如果没有返回空
@implementation  ApigatewayCheckRevisionExistExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/revision:checkExist";
    return self;
}
@end

/// 更新访问授权
@implementation  ApigatewayUpdateAccessAuthExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/accessAuths/{accessAuthId}";
    return self;
}
@end

/// 查询密钥列表
@implementation  ApigatewayQueryUcAccessKeysExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/ucAccessKeys";
    return self;
}
@end

/// 查询key详情
@implementation  ApigatewayQueryKeyInfoExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/kms/{keyId}";
    return self;
}
@end

/// 查询key列表
@implementation  ApigatewayQueryKeysExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/kms";
    return self;
}
@end

/// 查询可绑定部署列表
@implementation  ApigatewayQueryPolicyGroupListExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/rateLimitPolicies/{policyId}:groupList";
    return self;
}
@end

/// 修改后端配置
@implementation  ApigatewayUpdateBackendConfigExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PATCH";
    self.url = @"/backendConfig/{backendConfigId}";
    return self;
}
@end

/// 查询已绑定详情
@implementation  ApigatewayQueryBindGroupAuthExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessAuths/{accessAuthId}:bindGroup";
    return self;
}
@end

/// 创建key
@implementation  ApigatewayCreateKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/kms";
    return self;
}
@end

/// 查询分组
@implementation  ApigatewayDescribeApiGroupsExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/apiGroups";
    return self;
}
@end

/// 创建流控策略
@implementation  ApigatewayCreateRateLimitPolicyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/rateLimitPolicies";
    return self;
}
@end

/// 创建修订版本
@implementation  ApigatewayCreateRevisionExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/revision";
    return self;
}
@end

/// 删除单个流控策略
@implementation  ApigatewayDeleteRateLimitPolicyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/rateLimitPolicies/{policyId}";
    return self;
}
@end

/// 查询可绑定部署列表
@implementation  ApigatewayQueryAuthGroupListExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessAuths:groupList";
    return self;
}
@end

/// 绑定
@implementation  ApigatewayBindGroupPolicyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/rateLimitPolicies/{policyId}:bindGroup";
    return self;
}
@end

/// 发布版本
@implementation  ApigatewayDeployExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/deployments";
    return self;
}
@end

/// 查询密钥列表
@implementation  ApigatewayQueryAccessKeysExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/accessKeys";
    return self;
}
@end

/// 修改api
@implementation  ApigatewayUpdateApiByNameExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/apisName/{apiName}";
    return self;
}
@end

/// 删除用户域名接口
@implementation  ApigatewayDeleteUserDomainExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/userdomain";
    return self;
}
@end

/// 创建密钥
@implementation  ApigatewayCreateSubscriptionKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/subscriptionKeys";
    return self;
}
@end

/// 查询流控策略列表
@implementation  ApigatewayQueryRateLimitPoliciesExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/rateLimitPolicies";
    return self;
}
@end

/// 查询部署列表
@implementation  ApigatewayDescribeDeploymentsExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/deployments";
    return self;
}
@end

/// 删除单个修订版本
@implementation  ApigatewayDeleteRevisionExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/revision/{revisionId}";
    return self;
}
@end

/// 查询单个api
@implementation  ApigatewayQueryApiExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/apis/{apiId}";
    return self;
}
@end

/// 创建API时，检查API名称是否重复,返回重复的apiId,如果没有返回空
@implementation  ApigatewayCheckApiNameExistExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/apis:checkApiNameExist";
    return self;
}
@end

/// 查询api列表
@implementation  ApigatewayQueryApisExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/apis";
    return self;
}
@end

/// 重置key的acesskey和secretkey
@implementation  ApigatewayResetKeyExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/kms";
    return self;
}
@end

/// 删除后端配置
@implementation  ApigatewayDeleteBackendConfigExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/backendConfig/{backendConfigId}";
    return self;
}
@end

/// 删除单个API分组
@implementation  ApigatewayDeleteApiGroupExecutor

-(id) initWithJDCloudClient:(ApigatewayClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/apiGroups/{apiGroupId}";
    return self;
}
@end
