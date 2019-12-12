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


#import <Foundation/Foundation.h>
#import <JDCloudOCSDKCr/CrModel.h>

@implementation CrQuota
-(id) initWithResourceType:(NSString*) resourceType
      limit:(NSNumber*)limit
      used:(NSNumber*)used { 
     self.resourceType = resourceType;               
     self.limit = limit;               
     self.used = used;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self resourceType])
    {
        [result setValue:[self resourceType] forKey:@"resourceType"];
    }
    if([self limit])
    {
        [result setValue:[self limit] forKey:@"limit"];
    }
    if([self used])
    {
        [result setValue:[self used] forKey:@"used"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.resourceType = [dictionary objectForKey:@"resourceType"];
    self.limit = [dictionary objectForKey:@"limit"];
    self.used = [dictionary objectForKey:@"used"];
    return self;
}
 @end
@implementation Registry
-(id) initWithName:(NSString*) name
      registryUri:(NSString*)registryUri
      descriptionValue:(NSString*)descriptionValue
      totalSpaceUsedMB:(NSNumber*)totalSpaceUsedMB
      createTime:(NSString*)createTime { 
     self.name = name;               
     self.registryUri = registryUri;               
     self.descriptionValue = descriptionValue;               
     self.totalSpaceUsedMB = totalSpaceUsedMB;               
     self.createTime = createTime;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self registryUri])
    {
        [result setValue:[self registryUri] forKey:@"registryUri"];
    }
    if([self descriptionValue])
    {
        [result setValue:[self descriptionValue] forKey:@"description"];
    }
    if([self totalSpaceUsedMB])
    {
        [result setValue:[self totalSpaceUsedMB] forKey:@"totalSpaceUsedMB"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.name = [dictionary objectForKey:@"name"];
    self.registryUri = [dictionary objectForKey:@"registryUri"];
    self.descriptionValue = [dictionary objectForKey:@"description"];
    self.totalSpaceUsedMB = [dictionary objectForKey:@"totalSpaceUsedMB"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    return self;
}
 @end
@implementation Repository
-(id) initWithCreatedAt:(NSString*) createdAt
      updatedAt:(NSString*)updatedAt
      registryName:(NSString*)registryName
      repositoryName:(NSString*)repositoryName
      repositoryUri:(NSString*)repositoryUri
      totalSpaceUsedMB:(NSNumber*)totalSpaceUsedMB
      descriptionValue:(NSString*)descriptionValue { 
     self.createdAt = createdAt;               
     self.updatedAt = updatedAt;               
     self.registryName = registryName;               
     self.repositoryName = repositoryName;               
     self.repositoryUri = repositoryUri;               
     self.totalSpaceUsedMB = totalSpaceUsedMB;               
     self.descriptionValue = descriptionValue;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self createdAt])
    {
        [result setValue:[self createdAt] forKey:@"createdAt"];
    }
    if([self updatedAt])
    {
        [result setValue:[self updatedAt] forKey:@"updatedAt"];
    }
    if([self registryName])
    {
        [result setValue:[self registryName] forKey:@"registryName"];
    }
    if([self repositoryName])
    {
        [result setValue:[self repositoryName] forKey:@"repositoryName"];
    }
    if([self repositoryUri])
    {
        [result setValue:[self repositoryUri] forKey:@"repositoryUri"];
    }
    if([self totalSpaceUsedMB])
    {
        [result setValue:[self totalSpaceUsedMB] forKey:@"totalSpaceUsedMB"];
    }
    if([self descriptionValue])
    {
        [result setValue:[self descriptionValue] forKey:@"description"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.createdAt = [dictionary objectForKey:@"createdAt"];
    self.updatedAt = [dictionary objectForKey:@"updatedAt"];
    self.registryName = [dictionary objectForKey:@"registryName"];
    self.repositoryName = [dictionary objectForKey:@"repositoryName"];
    self.repositoryUri = [dictionary objectForKey:@"repositoryUri"];
    self.totalSpaceUsedMB = [dictionary objectForKey:@"totalSpaceUsedMB"];
    self.descriptionValue = [dictionary objectForKey:@"description"];
    return self;
}
 @end
@implementation ImageDetail
-(id) initWithRegistryName:(NSString*) registryName
      repositoryName:(NSString*)repositoryName
      imageDigest:(NSString*)imageDigest
      imageManifest:(NSString*)imageManifest
      imagePushedAt:(NSString*)imagePushedAt
      imageSizeMB:(NSNumber*)imageSizeMB
      imageTags:(NSArray<NSString*>*)imageTags
      lastPullAt:(NSString*)lastPullAt
      totalPullTimes:(NSNumber*)totalPullTimes { 
     self.registryName = registryName;               
     self.repositoryName = repositoryName;               
     self.imageDigest = imageDigest;               
     self.imageManifest = imageManifest;               
     self.imagePushedAt = imagePushedAt;               
     self.imageSizeMB = imageSizeMB;               
     self.imageTags = imageTags;               
     self.lastPullAt = lastPullAt;               
     self.totalPullTimes = totalPullTimes;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self registryName])
    {
        [result setValue:[self registryName] forKey:@"registryName"];
    }
    if([self repositoryName])
    {
        [result setValue:[self repositoryName] forKey:@"repositoryName"];
    }
    if([self imageDigest])
    {
        [result setValue:[self imageDigest] forKey:@"imageDigest"];
    }
    if([self imageManifest])
    {
        [result setValue:[self imageManifest] forKey:@"imageManifest"];
    }
    if([self imagePushedAt])
    {
        [result setValue:[self imagePushedAt] forKey:@"imagePushedAt"];
    }
    if([self imageSizeMB])
    {
        [result setValue:[self imageSizeMB] forKey:@"imageSizeMB"];
    }
    if([self imageTags])
    {
        [result setValue:[self imageTags] forKey:@"imageTags"];
    }
    if([self lastPullAt])
    {
        [result setValue:[self lastPullAt] forKey:@"lastPullAt"];
    }
    if([self totalPullTimes])
    {
        [result setValue:[self totalPullTimes] forKey:@"totalPullTimes"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.registryName = [dictionary objectForKey:@"registryName"];
    self.repositoryName = [dictionary objectForKey:@"repositoryName"];
    self.imageDigest = [dictionary objectForKey:@"imageDigest"];
    self.imageManifest = [dictionary objectForKey:@"imageManifest"];
    self.imagePushedAt = [dictionary objectForKey:@"imagePushedAt"];
    self.imageSizeMB = [dictionary objectForKey:@"imageSizeMB"];
    self.imageTags = [dictionary objectForKey:@"imageTags"];
    self.lastPullAt = [dictionary objectForKey:@"lastPullAt"];
    self.totalPullTimes = [dictionary objectForKey:@"totalPullTimes"];
    return self;
}
 @end
@implementation AuthorizationData
-(id) initWithAuthorizationToken:(NSString*) authorizationToken
      loginCmdLine:(NSString*)loginCmdLine
      expiresAt:(NSString*)expiresAt { 
     self.authorizationToken = authorizationToken;               
     self.loginCmdLine = loginCmdLine;               
     self.expiresAt = expiresAt;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self authorizationToken])
    {
        [result setValue:[self authorizationToken] forKey:@"authorizationToken"];
    }
    if([self loginCmdLine])
    {
        [result setValue:[self loginCmdLine] forKey:@"loginCmdLine"];
    }
    if([self expiresAt])
    {
        [result setValue:[self expiresAt] forKey:@"expiresAt"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.authorizationToken = [dictionary objectForKey:@"authorizationToken"];
    self.loginCmdLine = [dictionary objectForKey:@"loginCmdLine"];
    self.expiresAt = [dictionary objectForKey:@"expiresAt"];
    return self;
}
 @end
@implementation RepositoryShort
-(id) initWithCreatedAt:(NSString*) createdAt
      repositoryName:(NSString*)repositoryName
      repositoryUri:(NSString*)repositoryUri { 
     self.createdAt = createdAt;               
     self.repositoryName = repositoryName;               
     self.repositoryUri = repositoryUri;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self createdAt])
    {
        [result setValue:[self createdAt] forKey:@"createdAt"];
    }
    if([self repositoryName])
    {
        [result setValue:[self repositoryName] forKey:@"repositoryName"];
    }
    if([self repositoryUri])
    {
        [result setValue:[self repositoryUri] forKey:@"repositoryUri"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.createdAt = [dictionary objectForKey:@"createdAt"];
    self.repositoryName = [dictionary objectForKey:@"repositoryName"];
    self.repositoryUri = [dictionary objectForKey:@"repositoryUri"];
    return self;
}
 @end
 
 


