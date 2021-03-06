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


#ifndef CdnExecutor_h
#define CdnExecutor_h
#import <JDCloudOCSDKCdn/CdnClient.h>

///  设置线上计费方式
@interface CdnSetOnlineBillingTypeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询域名组详情
@interface CdnQueryDomainGroupDetailExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询WAF黑名单开关
@interface CdnQueryWafBlackRuleSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置是否开启过滤参数
@interface CdnOperateLiveDomainIgnoreQueryStringExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  删除httpHeader
@interface CdnDeleteHttpHeaderExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  禁用WAF黑名单
@interface CdnDisableWafBlackRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询web防护开关
@interface CdnQueryWebProtectSettingsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询geo地域
@interface CdnQueryGeoAreasExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询TOP Url
@interface CdnQueryStatisticsTopUrlExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询域名配置状态
@interface CdnQueryDomainConfigStatusExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  分地区及运营商查询统计数据
@interface CdnQueryLiveStatisticsAreaDataGroupByExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  获取所有上层节点的ip
@interface CdnGetAllUpperNodeIpListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置ip黑名单
@interface CdnSetIpBlackListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  修改指定的白名单规则
@interface CdnUpdateWafWhiteRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  更新域名配置
@interface CdnSetDomainConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  启动加速域名
@interface CdnStartDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置回源302跳转
@interface CdnSetFollowRedirectExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置url鉴权
@interface CdnSetAccesskeyConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  分地域运营商带宽查询接口
@interface CdnQueryBandWithAreaExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置range参数
@interface CdnSetRangeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置直播域名ip黑名单
@interface CdnSetLiveDomainIpBlackListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置CC 防护开关
@interface CdnSetCCProtectSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询源站监控信息
@interface CdnQueryMonitorExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询直播域名app列表
@interface CdnQueryLiveDomainAppsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  禁用WAF白名单
@interface CdnDisableWafWhiteRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  新增一条黑名单规则
@interface CdnCreateWafBlackRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建域名组
@interface CdnCreateDomainGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询web防护开关
@interface CdnQueryWebProtectSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询攻击来源
@interface CdnWafQueryPvForAreaAndIpExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置ip黑名单状态
@interface CdnOperateIpBlackListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询统计数据
@interface CdnQueryMixStatisticsDataExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询刷新预热任务
@interface CdnQueryRefreshTaskExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询加速域名详情
@interface CdnGetDomainDetailExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置网络防护层规则总开关
@interface CdnSetNetProtectionRulesSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  攻击记录查询
@interface CdnSearchAttackLogExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  分地区及运营商查询统计数据
@interface CdnQueryStatisticsDataGroupByAreaExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置URL鉴权
@interface CdnSetLiveDomainAccessKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询WAF黑名单规则列表
@interface CdnQuerywafBlackRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  删除禁播流
@interface CdnDeleteForbiddenStreamExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置WAF白名单开关
@interface CdnSetWafWhiteRuleSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置IP白名单
@interface CdnSetPushIpWhiteListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  根据taskIds查询刷新预热任务
@interface CdnQueryRefreshTaskByIdsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询统计数据并进行汇总加和
@interface CdnQueryStatisticsDataGroupSumExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  添加httpHeader
@interface CdnSetHttpHeaderExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  带宽查询接口
@interface CdnQueryBandExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  获取所有上层节点的ip
@interface CdnCheckWhetherIpBelongToJCloudExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询统计数据
@interface CdnQueryLiveStatisticsDataExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置回源鉴权信息
@interface CdnSetOriginAuthenticationExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  批量域名查询日志
@interface CdnQueryDomainsLogExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  启用CC防护规则
@interface CdnEnableCCProtectRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询直播域名详情v1
@interface CdnQueryLiveDomainDetailExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置域名refer
@interface CdnSetReferExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询waf ip黑名单配置状态
@interface CdnQueryIpBlackSettingStatusExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询TOP IP
@interface CdnQueryStatisticsTopIpExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建直播预热任务
@interface CdnCreateLiveDomainPrefecthTaskExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询攻击记录详情
@interface CdnWafQueryAttackDetailsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  停止源站监控
@interface CdnStopMonitorExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询http header头
@interface CdnQueryHttpHeaderExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询waf地域信息
@interface CdnQueryWafRegionsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询直播域名详情v2
@interface CdnQueryLiveDomainDetailV2Executor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建刷新预热回调任务
@interface CdnCreateRefreshTaskForCallbackV2Executor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询WAF总开关
@interface CdnQueryWafWhiteRuleSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  新增一条CC防护规则
@interface CdnCreateCCProtectRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  新增一条白名单规则
@interface CdnCreateWafWhiteRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询直播预热任务
@interface CdnQueryLivePrefetchTaskExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询WAF白名单规则列表
@interface CdnQuerywafWhiteRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置http协议
@interface CdnSetHttpTypeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询日志
@interface CdnQueryDomainLogExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询统计数据并进行汇总加和
@interface CdnQueryMixTrafficGroupSumExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询oss存储域名
@interface CdnQueryOssBucketsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  攻击类型统计接口
@interface CdnQueryAttackTypeCountExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置直播域名回源host
@interface CdnSetLiveDomainBackSourceHostExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询ip黑名单
@interface CdnQueryIpBlackListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置转协议
@interface CdnSetProtocolConvertExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询CC防护规则列表
@interface CdnQueryCCProtectRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置域名refer防盗链
@interface CdnSetLiveDomainReferExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询加速域名接口
@interface CdnGetDomainListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置忽略参数
@interface CdnSetIgnoreQueryStringExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  批量删除域名组
@interface CdnBatchDeleteDomainGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置userAgent信息
@interface CdnSetUserAgentConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置网络防护层规则
@interface CdnSetNetProtectionRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置直播域名回源信息
@interface CdnSetLiveDomainBackSourceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置协议跟随回源
@interface CdnSetFollowSourceProtocolExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置推流中断超时时间
@interface CdnSetPublishNormalTimeoutExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查看证书列表
@interface CdnGetSslCertListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建点播加速域名
@interface CdnCreateDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询域名配置信息
@interface CdnQueryDomainConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  绑定推流域名
@interface CdnBindPublishDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置视频拖拽
@interface CdnSetVideoDraftExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询CC 防护开关
@interface CdnQueryCCProtectSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建直播域名V2
@interface CdnCreateLiveDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置web防护开关
@interface CdnUpdateWebProtectSettingsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  泛域名共享缓存
@interface CdnOperateShareCacheExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  启用WAF白名单
@interface CdnEnableWafWhiteRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  分地区及运营商查询统计数据
@interface CdnQueryMixStatisticsWithAreaDataExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置web防护开关
@interface CdnSetWebProtectSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  开启或关闭ip黑名单
@interface CdnOperateLiveDomainIpBlackListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询统计数据
@interface CdnQueryStatisticsDataExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查找地域运营商列表
@interface CdnQueryAreaIspListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  删除ccProtectRule
@interface CdnDeleteCCProtectRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置WAF黑名单开关
@interface CdnSetWafBlackRuleSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询默认http header头部参数列表
@interface CdnQueryDefaultHttpHeaderKeyExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置源站监控信息
@interface CdnSetMonitorExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  删除加速域名
@interface CdnDeleteDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  通过标签查询加速域名接口
@interface CdnGetDomainListByFilterExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置userAgent信息
@interface CdnQueryUserAgentExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询总请求量与攻击请求量
@interface CdnWafQueryPvExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询用户推流域名app名/流名
@interface CdnQueryPushDomainORAppOrStreamExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询回源302跳转信息
@interface CdnQueryFollowRedirectExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  删除缓存规则
@interface CdnDeleteCacheRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询网络防护层规则
@interface CdnQueryNetProtectionRulesSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询域名组接口
@interface CdnQueryDomainGroupListExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询未分组域名
@interface CdnQueryDomainsNotInGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询协议跟随回源
@interface CdnQueryFollowSourceProtocolExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  更新域名组
@interface CdnUpdateDomainGroupExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查看证书详情
@interface CdnGetSslCertDetailExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询关联域名
@interface CdnDescribebindedDomainsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  停止加速域名
@interface CdnStopDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询WAF总开关
@interface CdnQueryWafSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询全部推流域名
@interface CdnDescribePublishDomainsExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建刷新预热任务
@interface CdnCreateRefreshTaskExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询网络防护层规则接口
@interface CdnQueryNetProtectionRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  预览证书
@interface CdnPreviewCertificateExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  DDOS攻击报表接口
@interface CdnQueryDdosGraphExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  删除WAF黑名单
@interface CdnDeleteWafBlackRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  修改指定的黑名单规则
@interface CdnUpdateWafBlackRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  启用WAF黑名单
@interface CdnEnableWafBlackRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询url鉴权
@interface CdnQueryAccesskeyConfigExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  禁用CC防护规则
@interface CdnDisableCCProtectRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建刷新预热回调任务
@interface CdnCreateRefreshTaskForCallbackExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置转推域名
@interface CdnModifyLiveDomainForwardCustomVhostExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建点播加速域名
@interface CdnBatchCreateExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置转推鉴权信息
@interface CdnSetForwardAuthenticationExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  查询统计数据并进行汇总加和
@interface CdnQueryLiveTrafficGroupSumExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  删除WAF白名单
@interface CdnDeleteWafWhiteRulesExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  修改CC防护规则
@interface CdnUpdateCCProtectRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置线上计费方式
@interface CdnQueryOnlineBillingTypeExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  根据taskId查询刷新预热任务
@interface CdnQueryRefreshTaskByIdExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  修改缓存规则
@interface CdnUpdateCacheRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置WAF总开关
@interface CdnSetWafSwitchExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置推流中断通知方式
@interface CdnSetStreamNotifyInfoExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  上传证书
@interface CdnUploadCertExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  创建直播域名
@interface CdnBatchCreateLiveDomainExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  添加缓存规则
@interface CdnCreateCacheRuleExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
///  设置源站信息
@interface CdnSetSourceExecutor : JDCloudExecutor

-(id) initWithJDCloudClient:(CdnClient*)JDCloudClient;
@end
#endif /* CdnExecutor_h */
