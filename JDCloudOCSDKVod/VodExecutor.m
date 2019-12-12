
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

Video-on-Demand
视频点播相关接口

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKVod/VodExecutor.h>


/// 批量提交质检作业
@implementation  VodBatchSubmitQualityDetectionJobsExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/qualityDetectionJobs:batchSubmit";
    return self;
}
@end

/// 删除转码模板
@implementation  VodDeleteTranscodeTemplateExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/transcodeTemplates/{templateId}";
    return self;
}
@end

/// 修改水印
@implementation  VodUpdateWatermarkExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/watermarks/{watermarkId}";
    return self;
}
@end

/// 查询域名列表
@implementation  VodListDomainsExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domains";
    return self;
}
@end

/// 获取视频上传地址和凭证
@implementation  VodCreateVideoUploadTaskExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/videoUploadTask";
    return self;
}
@end

/// 查询CDN域名URL鉴权规则配置
@implementation  VodGetURLRuleExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domains/{domainId}:getURLRule";
    return self;
}
@end

/// 查询域名访问头参数列表
@implementation  VodListHeadersExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domains/{domainId}:listHeaders";
    return self;
}
@end

/// 设置CDN域名URL鉴权规则
@implementation  VodSetURLRuleExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:setURLRule";
    return self;
}
@end

/// 查询分类及其子分类，若指定的分类ID为0，则返回一个根分类及其子分类（即一级分类）.
@implementation  VodGetCategoryWithChildrenExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/categories/{categoryId}:getWithChildren";
    return self;
}
@end

/// 查询转码模板列表。
   /// 允许通过条件过滤查询，支持的过滤字段如下：
   ///   - source[eq] 按模板来源精确查询
   ///   - templateType[eq] 按模板类型精确查询
   /// 
@implementation  VodListTranscodeTemplatesExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/transcodeTemplates";
    return self;
}
@end

/// 查询分类
@implementation  VodGetCategoryExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/categories/{categoryId}";
    return self;
}
@end

/// 添加域名
@implementation  VodCreateDomainExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains";
    return self;
}
@end

/// 删除水印
@implementation  VodDeleteWatermarkExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/watermarks/{watermarkId}";
    return self;
}
@end

/// 提交转码作业
@implementation  VodSubmitTranscodeJobExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/transcodeTasks:submitJob";
    return self;
}
@end

/// 修改转码模板
@implementation  VodUpdateTranscodeTemplateExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/transcodeTemplates/{templateId}";
    return self;
}
@end

/// 查询质测模板列表。
   /// 
@implementation  VodListQualityDetectionTemplatesExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/qualityDetectionTemplates";
    return self;
}
@end

/// 批量修改视频信息
@implementation  VodBatchUpdateVideosExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/videos:batchUpdate";
    return self;
}
@end

/// 获取图片上传地址和凭证
@implementation  VodCreateImageUploadTaskExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/imageUploadTask";
    return self;
}
@end

/// 修改质检模板
@implementation  VodUpdateQualityDetectionTemplateExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/qualityDetectionTemplates/{templateId}";
    return self;
}
@end

/// 查询域名
@implementation  VodGetDomainExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domains/{domainId}";
    return self;
}
@end

/// 查询水印
@implementation  VodGetWatermarkExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/watermarks/{watermarkId}";
    return self;
}
@end

/// 删除视频转码流
@implementation  VodDeleteVideoStreamsExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/videos/{videoId}:deleteStreams";
    return self;
}
@end

/// 批量提交转码作业
@implementation  VodBatchSubmitTranscodeJobsExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/transcodeTasks:batchSubmitJobs";
    return self;
}
@end

/// 设置CDN域名IP黑名单规则
@implementation  VodSetIPRuleExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:setIPRule";
    return self;
}
@end

/// 修改视频信息
@implementation  VodUpdateVideoExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/videos/{videoId}";
    return self;
}
@end

/// 设为默认域名
@implementation  VodSetDefaultDomainExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:setDefault";
    return self;
}
@end

/// 查询转码模板
@implementation  VodGetTranscodeTemplateExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/transcodeTemplates/{templateId}";
    return self;
}
@end

/// 删除分类
@implementation  VodDeleteCategoryExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/categories/{categoryId}";
    return self;
}
@end

/// 获取视频播放信息
@implementation  VodGetVideoPlayInfoExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/videos/{videoId}:getPlayInfo";
    return self;
}
@end

/// 删除域名访问头参数
@implementation  VodDeleteHeaderExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:deleteHeader";
    return self;
}
@end

/// 修改分类
@implementation  VodUpdateCategoryExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"PUT";
    self.url = @"/categories/{categoryId}";
    return self;
}
@end

/// 设置CDN域名Referer防盗链规则
@implementation  VodSetRefererRuleExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:setRefererRule";
    return self;
}
@end

/// 创建质检模板
@implementation  VodCreateQualityDetectionTemplateExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/qualityDetectionTemplates";
    return self;
}
@end

/// 查询CDN域名Referer防盗链规则配置
@implementation  VodGetRefererRuleExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domains/{domainId}:getRefererRule";
    return self;
}
@end

/// 查询质检模板
@implementation  VodGetQualityDetectionTemplateExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/qualityDetectionTemplates/{templateId}";
    return self;
}
@end

/// 删除域名。执行该操作，需确保域名已被停用。
@implementation  VodDeleteDomainExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/domains/{domainId}";
    return self;
}
@end

/// 添加分类
@implementation  VodCreateCategoryExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/categories";
    return self;
}
@end

/// 查询水印列表
@implementation  VodListWatermarksExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/watermarks";
    return self;
}
@end

/// 查询CDN域名SSL配置
@implementation  VodGetHttpSslExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domains/{domainId}:getHttpSsl";
    return self;
}
@end

/// 设置域名访问头参数
@implementation  VodSetHeaderExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:setHeader";
    return self;
}
@end

/// 刷新视频上传地址和凭证
@implementation  VodRefreshVideoUploadTaskExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/videoUploadTask:refresh";
    return self;
}
@end

/// 查询单个视频信息
@implementation  VodGetVideoExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/videos/{videoId}";
    return self;
}
@end

/// 查询视频列表信息。
   /// 允许通过条件过滤查询，支持的过滤字段如下：
   ///   - status[eq] 按视频状态精确查询
   ///   - categoryId[eq] 按分类ID精确查询
   ///   - videoId[eq] 按视频ID精确查询
   ///   - name[eq] 按视频名称精确查询
   /// 
@implementation  VodListVideosExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/videos";
    return self;
}
@end

/// 添加水印
@implementation  VodCreateWatermarkExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/watermarks";
    return self;
}
@end

/// 删除视频，调用该接口会同时删除与指定视频相关的所有信息，包括转码任务信息、转码流数据等，同时清除云存储中相关文件资源。
@implementation  VodDeleteVideoExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/videos/{videoId}";
    return self;
}
@end

/// 提交质检作业
@implementation  VodSubmitQualityDetectionJobExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/qualityDetectionJobs:submit";
    return self;
}
@end

/// 查询CDN域名IP黑名单规则配置
@implementation  VodGetIPRuleExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/domains/{domainId}:getIPRule";
    return self;
}
@end

/// 启用域名
@implementation  VodEnableDomainExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:enable";
    return self;
}
@end

/// 设置CDN域名SSL配置
@implementation  VodSetHttpSslExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:setHttpSsl";
    return self;
}
@end

/// 创建转码模板
@implementation  VodCreateTranscodeTemplateExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/transcodeTemplates";
    return self;
}
@end

/// 查询分类列表。按照分页方式，返回分类列表信息。
@implementation  VodListCategoriesExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/categories";
    return self;
}
@end

/// 批量删除视频，调用该接口会同时删除与指定视频相关的所有信息，包括转码任务信息、转码流数据等，同时清除云存储中相关文件资源。
@implementation  VodBatchDeleteVideosExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/videos:batchDelete";
    return self;
}
@end

/// 停用域名
@implementation  VodDisableDomainExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/domains/{domainId}:disable";
    return self;
}
@end

/// 删除质检模板
@implementation  VodDeleteQualityDetectionTemplateExecutor

-(id) initWithJDCloudClient:(VodClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/qualityDetectionTemplates/{templateId}";
    return self;
}
@end
