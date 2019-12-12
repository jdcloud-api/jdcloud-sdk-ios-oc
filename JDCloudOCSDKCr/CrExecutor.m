
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

容器镜像仓库
容器镜像仓库服务

OpenAPI spec version: v1
Contact: 

NOTE: This class is auto generated by the jdcloud code generator program.
*/

#import <Foundation/Foundation.h>

#import <JDCloudOCSDKCr/CrExecutor.h>


/// 删除镜像
   /// imageDigest imageTag imageTagStatus 三者只能且必须传一个。
   /// 可根据Tag状态删除Image，例如删除所有tagged的镜像。
   /// digest和tag唯一表征单个镜像，其中imageDigest为sha256哈希，image manifest的digest。
   /// 例如 sha256:examplee6d1e504117a17000003d3753086354a38375961f2e665416ef4b1b2f；image使用的tag, 如  &quot;precise&quot; 
   /// 
@implementation  CrDeleteImageExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/registries/{registryName}/repositories/{repositoryName}:deleteImage";
    return self;
}
@end

/// 描述用户指定 registry 下的 repository.
   /// 
@implementation  CrDescribeRepositoriesExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/listRepositories";
    return self;
}
@end

/// 释放用户 registry 的 token。
   /// 
@implementation  CrReleaseAuthorizationTokenExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/registries/{registryName}:releaseAuthorizationToken";
    return self;
}
@end

/// &lt;p&gt;批量查询令牌。&lt;/p&gt; 
   /// &lt;p&gt;暂时不支持分页和过滤条件。&lt;/p&gt;
   /// 
@implementation  CrDescribeAuthorizationTokensExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/registries/{registryName}/tokens";
    return self;
}
@end

/// 查询指定镜像仓库名称是否已经存在以及是否符合命名规范。
   /// 
@implementation  CrCheckRepositoryNameExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/repositories:checkRepositoryName";
    return self;
}
@end

/// 返回指定repository中images的元数据，包括image size, image tags和creation date。
   /// 
@implementation  CrDescribeImagesExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/images";
    return self;
}
@end

/// 批量查询指定用户下所有 registry 详情。
   /// 暂不支持 filter.
   /// 
@implementation  CrDescribeRegistriesExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/registries";
    return self;
}
@end

/// 查询指定用户下某个 registry 详情。
   /// 
@implementation  CrDescribeRegistryExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/registries/{registryName}";
    return self;
}
@end

/// &lt;p&gt;申请12小时有效期的令牌。 使用&lt;code&gt;docker&lt;/code&gt; CLI push和pull镜像。&lt;/p&gt;
   /// &lt;p&gt;&lt;code&gt;authorizationToken&lt;/code&gt;为每个registry返回一个base64编码的字符串，解码后&lt;code&gt;docker login&lt;/code&gt;命令
   /// 可完成指定registry的鉴权。JCR CLI提供&lt;code&gt;jcr get-login&lt;/code&gt;进行认证处理。&lt;/p&gt;
   /// 
@implementation  CrGetAuthorizationTokenExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/registries/{registryName}:getAuthorizationToken";
    return self;
}
@end

/// 通过参数创建镜像仓库。
   /// 仓库名称可以分解为多个路径名，每个名称必须至少包含一个小写字母数字，考虑URL规范。
   /// 支持包含段划线或者下划线进行分割，但不允许点&#39;.&#39;，多个路径名之间通过(&quot;/&quot;)连接，总长度不超过256个字符，当前只支持二级目录。
   /// 
@implementation  CrCreateRepositoryExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/registries/{registryName}/repositories";
    return self;
}
@end

/// 查询配额
@implementation  CrDescribeQuotasExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"GET";
    self.url = @"/regions/{regionId}/quotas";
    return self;
}
@end

/// 通过参数创建注册表。
   /// 
@implementation  CrCreateRegistryExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/registries";
    return self;
}
@end

/// 删除指定用户下某个镜像仓库.
   /// 
@implementation  CrDeleteRepositoryExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/regions/{regionId}/registries/{registryName}/repositories/{repositoryName}";
    return self;
}
@end

/// 删除指定用户下某个 registry.
   /// 
@implementation  CrDeleteRegistryExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"DELETE";
    self.url = @"/regions/{regionId}/registries/{registryName}";
    return self;
}
@end

/// 查询指定注册表名称是否已经存在以及是否符合命名规范。
   /// 
@implementation  CrCheckRegistryNameExecutor

-(id) initWithJDCloudClient:(CrClient*)JDCloudClient
{
    self.jdCloudClient = JDCloudClient;
    self.method = @"POST";
    self.url = @"/regions/{regionId}/registries:checkRegistryName";
    return self;
}
@end
