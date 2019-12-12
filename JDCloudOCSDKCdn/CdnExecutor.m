
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

JDCLOUD CDN Operation And Query API
API related to CDN instances

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKCdn/CdnExecutor.h>


/// 设置线上计费方式
@implementation  CdnSetOnlineBillingTypeExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/onlineBillingType";
    return self;
}
@end

/// 查询域名组详情
@implementation  CdnQueryDomainGroupDetailExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domainGroup/{id}";
    return self;
}
@end

/// 查询WAF黑名单开关
@implementation  CdnQueryWafBlackRuleSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/wafBlackRuleSwitch";
    return self;
}
@end

/// 设置是否开启过滤参数
@implementation  CdnOperateLiveDomainIgnoreQueryStringExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/ignoreQueryString";
    return self;
}
@end

/// 删除httpHeader
@implementation  CdnDeleteHttpHeaderExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/domain/{domain}/httpHeader";
    return self;
}
@end

/// 禁用WAF黑名单
@implementation  CdnDisableWafBlackRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafBlackRule:disable";
    return self;
}
@end

/// 查询web防护开关
@implementation  CdnQueryWebProtectSettingsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/wafWebProtectSettings";
    return self;
}
@end

/// 查询geo地域
@implementation  CdnQueryGeoAreasExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/netProtectionGeoAreas";
    return self;
}
@end

/// 查询TOP Url
@implementation  CdnQueryStatisticsTopUrlExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/statistics:topUrl";
    return self;
}
@end

/// 查询域名配置状态
@implementation  CdnQueryDomainConfigStatusExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{taskId}/status";
    return self;
}
@end

/// 分地区及运营商查询统计数据
@implementation  CdnQueryLiveStatisticsAreaDataGroupByExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveStatistics:groupByArea";
    return self;
}
@end

/// 获取所有上层节点的ip
@implementation  CdnGetAllUpperNodeIpListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/serviceNode:getAllUpperNodeIpList";
    return self;
}
@end

/// 设置ip黑名单
@implementation  CdnSetIpBlackListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/ipBlackList";
    return self;
}
@end

/// 修改指定的白名单规则
@implementation  CdnUpdateWafWhiteRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafWhiteRule/{id}";
    return self;
}
@end

/// 更新域名配置
@implementation  CdnSetDomainConfigExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/config";
    return self;
}
@end

/// 启动加速域名
@implementation  CdnStartDomainExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}:start";
    return self;
}
@end

/// 设置回源302跳转
@implementation  CdnSetFollowRedirectExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/followRedirect";
    return self;
}
@end

/// 设置url鉴权
@implementation  CdnSetAccesskeyConfigExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/accesskeyConfig";
    return self;
}
@end

/// 分地域运营商带宽查询接口
@implementation  CdnQueryBandWithAreaExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/bandQuery:areaIsp";
    return self;
}
@end

/// 设置range参数
@implementation  CdnSetRangeExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/range";
    return self;
}
@end

/// 设置直播域名ip黑名单
@implementation  CdnSetLiveDomainIpBlackListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/ipBlackList";
    return self;
}
@end

/// 设置CC 防护开关
@implementation  CdnSetCCProtectSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/ccProtectSwitch";
    return self;
}
@end

/// 查询源站监控信息
@implementation  CdnQueryMonitorExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/monitor";
    return self;
}
@end

/// 查询直播域名app列表
@implementation  CdnQueryLiveDomainAppsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/liveDomain/{domain}/app";
    return self;
}
@end

/// 禁用WAF白名单
@implementation  CdnDisableWafWhiteRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafWhiteRule:disable";
    return self;
}
@end

/// 新增一条黑名单规则
@implementation  CdnCreateWafBlackRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafBlackRule";
    return self;
}
@end

/// 创建域名组
@implementation  CdnCreateDomainGroupExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domainGroup:create";
    return self;
}
@end

/// 查询web防护开关
@implementation  CdnQueryWebProtectSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/wafWebProtectSwitch";
    return self;
}
@end

/// 查询攻击来源
@implementation  CdnWafQueryPvForAreaAndIpExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/wafPvForAreaAndIp";
    return self;
}
@end

/// 设置ip黑名单状态
@implementation  CdnOperateIpBlackListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/domain/{domain}/ipBlackList:operate";
    return self;
}
@end

/// 查询统计数据
@implementation  CdnQueryMixStatisticsDataExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/statistics";
    return self;
}
@end

/// 查询刷新预热任务
@implementation  CdnQueryRefreshTaskExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/task";
    return self;
}
@end

/// 查询加速域名详情
@implementation  CdnGetDomainDetailExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}";
    return self;
}
@end

/// 设置网络防护层规则总开关
@implementation  CdnSetNetProtectionRulesSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/netProtectionSwitch";
    return self;
}
@end

/// 攻击记录查询
@implementation  CdnSearchAttackLogExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/netProtectionData:attackLog";
    return self;
}
@end

/// 分地区及运营商查询统计数据
@implementation  CdnQueryStatisticsDataGroupByAreaExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/vodStatistics:groupByArea";
    return self;
}
@end

/// 设置URL鉴权
@implementation  CdnSetLiveDomainAccessKeyExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/accesskeyConfig";
    return self;
}
@end

/// 查询WAF黑名单规则列表
@implementation  CdnQuerywafBlackRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/wafBlackRules";
    return self;
}
@end

/// 删除禁播流
@implementation  CdnDeleteForbiddenStreamExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/stream:unForbidden";
    return self;
}
@end

/// 设置WAF白名单开关
@implementation  CdnSetWafWhiteRuleSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafWhiteRuleSwitch";
    return self;
}
@end

/// 设置IP白名单
@implementation  CdnSetPushIpWhiteListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/pushIpWhiteList";
    return self;
}
@end

/// 根据taskIds查询刷新预热任务
@implementation  CdnQueryRefreshTaskByIdsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/task:queryByIds";
    return self;
}
@end

/// 查询统计数据并进行汇总加和
@implementation  CdnQueryStatisticsDataGroupSumExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/vodStatistics:groupSum";
    return self;
}
@end

/// 添加httpHeader
@implementation  CdnSetHttpHeaderExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/httpHeader";
    return self;
}
@end

/// 带宽查询接口
@implementation  CdnQueryBandExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/bandQuery";
    return self;
}
@end

/// 获取所有上层节点的ip
@implementation  CdnCheckWhetherIpBelongToJCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/ip:whetherBelongToJCloud";
    return self;
}
@end

/// 查询统计数据
@implementation  CdnQueryLiveStatisticsDataExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveStatistics";
    return self;
}
@end

/// 设置回源鉴权信息
@implementation  CdnSetOriginAuthenticationExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/originAuthentication";
    return self;
}
@end

/// 批量域名查询日志
@implementation  CdnQueryDomainsLogExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/logs";
    return self;
}
@end

/// 启用CC防护规则
@implementation  CdnEnableCCProtectRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/ccProtectRule:enable";
    return self;
}
@end

/// 查询直播域名详情v1
@implementation  CdnQueryLiveDomainDetailExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/liveDomains/{domain}";
    return self;
}
@end

/// 设置域名refer
@implementation  CdnSetReferExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/refer";
    return self;
}
@end

/// 查询waf ip黑名单配置状态
@implementation  CdnQueryIpBlackSettingStatusExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/wafIpBlackSettingStatus";
    return self;
}
@end

/// 查询TOP IP
@implementation  CdnQueryStatisticsTopIpExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/statistics:topIp";
    return self;
}
@end

/// 创建直播预热任务
@implementation  CdnCreateLiveDomainPrefecthTaskExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/task:createLivePrefetchTask";
    return self;
}
@end

/// 查询攻击记录详情
@implementation  CdnWafQueryAttackDetailsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/wafAttackDetails";
    return self;
}
@end

/// 停止源站监控
@implementation  CdnStopMonitorExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/monitor:stop";
    return self;
}
@end

/// 查询http header头
@implementation  CdnQueryHttpHeaderExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/httpHeader";
    return self;
}
@end

/// 查询waf地域信息
@implementation  CdnQueryWafRegionsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/wafRegions";
    return self;
}
@end

/// 查询直播域名详情v2
@implementation  CdnQueryLiveDomainDetailV2Executor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/liveDomain/{domain}";
    return self;
}
@end

/// 创建刷新预热回调任务
@implementation  CdnCreateRefreshTaskForCallbackV2Executor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/task:createForCallbackV2";
    return self;
}
@end

/// 查询WAF总开关
@implementation  CdnQueryWafWhiteRuleSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/wafWhiteRuleSwitch";
    return self;
}
@end

/// 新增一条CC防护规则
@implementation  CdnCreateCCProtectRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/ccProtectRule";
    return self;
}
@end

/// 新增一条白名单规则
@implementation  CdnCreateWafWhiteRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafWhiteRule";
    return self;
}
@end

/// 查询直播预热任务
@implementation  CdnQueryLivePrefetchTaskExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/task:queryLivePrefetchTask";
    return self;
}
@end

/// 查询WAF白名单规则列表
@implementation  CdnQuerywafWhiteRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/wafWhiteRules";
    return self;
}
@end

/// 设置http协议
@implementation  CdnSetHttpTypeExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/httpType";
    return self;
}
@end

/// 查询日志
@implementation  CdnQueryDomainLogExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/log";
    return self;
}
@end

/// 查询统计数据并进行汇总加和
@implementation  CdnQueryMixTrafficGroupSumExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/statistics:groupSum";
    return self;
}
@end

/// 查询oss存储域名
@implementation  CdnQueryOssBucketsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/ossBuckets";
    return self;
}
@end

/// 攻击类型统计接口
@implementation  CdnQueryAttackTypeCountExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/netProtectionData:attackTypeCount";
    return self;
}
@end

/// 设置直播域名回源host
@implementation  CdnSetLiveDomainBackSourceHostExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/backSourceHost";
    return self;
}
@end

/// 查询ip黑名单
@implementation  CdnQueryIpBlackListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/ipBlackList";
    return self;
}
@end

/// 设置转协议
@implementation  CdnSetProtocolConvertExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/protocolConvert";
    return self;
}
@end

/// 查询CC防护规则列表
@implementation  CdnQueryCCProtectRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/ccProtectRules";
    return self;
}
@end

/// 设置域名refer防盗链
@implementation  CdnSetLiveDomainReferExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/refer";
    return self;
}
@end

/// 查询加速域名接口
@implementation  CdnGetDomainListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain";
    return self;
}
@end

/// 设置忽略参数
@implementation  CdnSetIgnoreQueryStringExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/ignoreQueryString";
    return self;
}
@end

/// 批量删除域名组
@implementation  CdnBatchDeleteDomainGroupExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domainGroup:batchDelete";
    return self;
}
@end

/// 设置userAgent信息
@implementation  CdnSetUserAgentConfigExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/userAgentConfig";
    return self;
}
@end

/// 设置网络防护层规则
@implementation  CdnSetNetProtectionRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/netProtectionRules";
    return self;
}
@end

/// 设置直播域名回源信息
@implementation  CdnSetLiveDomainBackSourceExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/backSource";
    return self;
}
@end

/// 设置协议跟随回源
@implementation  CdnSetFollowSourceProtocolExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/followSourceProtocol";
    return self;
}
@end

/// 设置推流中断超时时间
@implementation  CdnSetPublishNormalTimeoutExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/publishNormalTimeout";
    return self;
}
@end

/// 查看证书列表
@implementation  CdnGetSslCertListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/sslCert";
    return self;
}
@end

/// 创建点播加速域名
@implementation  CdnCreateDomainExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}";
    return self;
}
@end

/// 查询域名配置信息
@implementation  CdnQueryDomainConfigExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/config";
    return self;
}
@end

/// 绑定推流域名
@implementation  CdnBindPublishDomainExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain},{publishDomain}:bindPublishDomain";
    return self;
}
@end

/// 设置视频拖拽
@implementation  CdnSetVideoDraftExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/videoDraft";
    return self;
}
@end

/// 查询CC 防护开关
@implementation  CdnQueryCCProtectSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/ccProtectSwitch";
    return self;
}
@end

/// 创建直播域名V2
@implementation  CdnCreateLiveDomainExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain";
    return self;
}
@end

/// 设置web防护开关
@implementation  CdnUpdateWebProtectSettingsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafWebProtectSettings";
    return self;
}
@end

/// 泛域名共享缓存
@implementation  CdnOperateShareCacheExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/shareCache";
    return self;
}
@end

/// 启用WAF白名单
@implementation  CdnEnableWafWhiteRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafWhiteRule:enable";
    return self;
}
@end

/// 分地区及运营商查询统计数据
@implementation  CdnQueryMixStatisticsWithAreaDataExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/statistics:groupByArea";
    return self;
}
@end

/// 设置web防护开关
@implementation  CdnSetWebProtectSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafWebProtectSwitch";
    return self;
}
@end

/// 开启或关闭ip黑名单
@implementation  CdnOperateLiveDomainIpBlackListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/ipBlackList:operate";
    return self;
}
@end

/// 查询统计数据
@implementation  CdnQueryStatisticsDataExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/vodStatistics";
    return self;
}
@end

/// 查找地域运营商列表
@implementation  CdnQueryAreaIspListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/console:areaIspList";
    return self;
}
@end

/// 删除ccProtectRule
@implementation  CdnDeleteCCProtectRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/domain/{domain}/ccProtectRule/{ids}";
    return self;
}
@end

/// 设置WAF黑名单开关
@implementation  CdnSetWafBlackRuleSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafBlackRuleSwitch";
    return self;
}
@end

/// 查询默认http header头部参数列表
@implementation  CdnQueryDefaultHttpHeaderKeyExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/defaultHttpHeaderKey";
    return self;
}
@end

/// 设置源站监控信息
@implementation  CdnSetMonitorExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/monitor";
    return self;
}
@end

/// 删除加速域名
@implementation  CdnDeleteDomainExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/domain/{domain}";
    return self;
}
@end

/// 通过标签查询加速域名接口
@implementation  CdnGetDomainListByFilterExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain:query";
    return self;
}
@end

/// 设置userAgent信息
@implementation  CdnQueryUserAgentExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/userAgentConfig";
    return self;
}
@end

/// 查询总请求量与攻击请求量
@implementation  CdnWafQueryPvExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/wafPvStatistic";
    return self;
}
@end

/// 查询用户推流域名app名/流名
@implementation  CdnQueryPushDomainORAppOrStreamExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/liveDomain/{domain}/stream:fuzzyQuery";
    return self;
}
@end

/// 查询回源302跳转信息
@implementation  CdnQueryFollowRedirectExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/followRedirect";
    return self;
}
@end

/// 删除缓存规则
@implementation  CdnDeleteCacheRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/domain/{domain}/cacheRule";
    return self;
}
@end

/// 查询网络防护层规则
@implementation  CdnQueryNetProtectionRulesSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/netProtectionSwitch";
    return self;
}
@end

/// 查询域名组接口
@implementation  CdnQueryDomainGroupListExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domainGroup";
    return self;
}
@end

/// 查询未分组域名
@implementation  CdnQueryDomainsNotInGroupExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domainGroup:notInGroup";
    return self;
}
@end

/// 查询协议跟随回源
@implementation  CdnQueryFollowSourceProtocolExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/followSourceProtocol";
    return self;
}
@end

/// 更新域名组
@implementation  CdnUpdateDomainGroupExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domainGroup/{id}:update";
    return self;
}
@end

/// 查看证书详情
@implementation  CdnGetSslCertDetailExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/sslCert/{sslCertId}";
    return self;
}
@end

/// 查询关联域名
@implementation  CdnDescribebindedDomainsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/liveDomain/{domain}:queryBindedDomains";
    return self;
}
@end

/// 停止加速域名
@implementation  CdnStopDomainExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}:stop";
    return self;
}
@end

/// 查询WAF总开关
@implementation  CdnQueryWafSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/wafSwitch";
    return self;
}
@end

/// 查询全部推流域名
@implementation  CdnDescribePublishDomainsExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/liveDomain:publishDomains";
    return self;
}
@end

/// 创建刷新预热任务
@implementation  CdnCreateRefreshTaskExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/task";
    return self;
}
@end

/// 查询网络防护层规则接口
@implementation  CdnQueryNetProtectionRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/netProtectionRules";
    return self;
}
@end

/// 预览证书
@implementation  CdnPreviewCertificateExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/certificate";
    return self;
}
@end

/// DDOS攻击报表接口
@implementation  CdnQueryDdosGraphExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/netProtectionData:ddosGraph";
    return self;
}
@end

/// 删除WAF黑名单
@implementation  CdnDeleteWafBlackRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/domain/{domain}/wafBlackRule/{ids}";
    return self;
}
@end

/// 修改指定的黑名单规则
@implementation  CdnUpdateWafBlackRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafBlackRule/{id}";
    return self;
}
@end

/// 启用WAF黑名单
@implementation  CdnEnableWafBlackRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafBlackRule:enable";
    return self;
}
@end

/// 查询url鉴权
@implementation  CdnQueryAccesskeyConfigExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domain/{domain}/accesskeyConfig";
    return self;
}
@end

/// 禁用CC防护规则
@implementation  CdnDisableCCProtectRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/ccProtectRule:disable";
    return self;
}
@end

/// 创建刷新预热回调任务
@implementation  CdnCreateRefreshTaskForCallbackExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/task:createForCallback";
    return self;
}
@end

/// 设置转推域名
@implementation  CdnModifyLiveDomainForwardCustomVhostExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}:putForwardCustomVhost";
    return self;
}
@end

/// 创建点播加速域名
@implementation  CdnBatchCreateExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain:batchCreate";
    return self;
}
@end

/// 设置转推鉴权信息
@implementation  CdnSetForwardAuthenticationExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/forwardAuthentication";
    return self;
}
@end

/// 查询统计数据并进行汇总加和
@implementation  CdnQueryLiveTrafficGroupSumExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveStatistics:groupSum";
    return self;
}
@end

/// 删除WAF白名单
@implementation  CdnDeleteWafWhiteRulesExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/domain/{domain}/wafWhiteRule/{ids}";
    return self;
}
@end

/// 修改CC防护规则
@implementation  CdnUpdateCCProtectRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/ccProtectRule/{id}";
    return self;
}
@end

/// 设置线上计费方式
@implementation  CdnQueryOnlineBillingTypeExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/onlineBillingType";
    return self;
}
@end

/// 根据taskId查询刷新预热任务
@implementation  CdnQueryRefreshTaskByIdExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/task/{taskId}";
    return self;
}
@end

/// 修改缓存规则
@implementation  CdnUpdateCacheRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/domain/{domain}/cacheRule";
    return self;
}
@end

/// 设置WAF总开关
@implementation  CdnSetWafSwitchExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/wafSwitch";
    return self;
}
@end

/// 设置推流中断通知方式
@implementation  CdnSetStreamNotifyInfoExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain/{domain}/streamNotifyInfo";
    return self;
}
@end

/// 上传证书
@implementation  CdnUploadCertExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/sslCert:upload";
    return self;
}
@end

/// 创建直播域名
@implementation  CdnBatchCreateLiveDomainExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/liveDomain:batchCreate";
    return self;
}
@end

/// 添加缓存规则
@implementation  CdnCreateCacheRuleExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/cacheRule";
    return self;
}
@end

/// 设置源站信息
@implementation  CdnSetSourceExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domain/{domain}/source";
    return self;
}
@end
