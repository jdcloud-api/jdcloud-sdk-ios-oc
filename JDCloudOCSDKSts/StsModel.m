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
#import <JDCloudOCSDKSts/StsModel.h>

@implementation AssumedRoleService
-(id) initWithAssumedServiceRoleId:(NSString*) assumedServiceRoleId
      assumedServiceRoleName:(NSString*)assumedServiceRoleName { 
     self.assumedServiceRoleId = assumedServiceRoleId;               
     self.assumedServiceRoleName = assumedServiceRoleName;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self assumedServiceRoleId])
    {
        [result setValue:[self assumedServiceRoleId] forKey:@"assumedServiceRoleId"];
    }
    if([self assumedServiceRoleName])
    {
        [result setValue:[self assumedServiceRoleName] forKey:@"assumedServiceRoleName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.assumedServiceRoleId = [dictionary objectForKey:@"assumedServiceRoleId"];
    self.assumedServiceRoleName = [dictionary objectForKey:@"assumedServiceRoleName"];
    return self;
}
 @end
@implementation AssumeRoleInfo
-(id) initWithRoleJrn:(NSString*) roleJrn
      roleSessionName:(NSString*)roleSessionName
      durationSeconds:(NSNumber*)durationSeconds { 
     self.roleJrn = roleJrn;               
     self.roleSessionName = roleSessionName;               
     self.durationSeconds = durationSeconds;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self roleJrn])
    {
        [result setValue:[self roleJrn] forKey:@"roleJrn"];
    }
    if([self roleSessionName])
    {
        [result setValue:[self roleSessionName] forKey:@"roleSessionName"];
    }
    if([self durationSeconds])
    {
        [result setValue:[self durationSeconds] forKey:@"durationSeconds"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.roleJrn = [dictionary objectForKey:@"roleJrn"];
    self.roleSessionName = [dictionary objectForKey:@"roleSessionName"];
    self.durationSeconds = [dictionary objectForKey:@"durationSeconds"];
    return self;
}
 @end
@implementation Credentials
-(id) initWithAccessKey:(NSString*) accessKey
      secretKey:(NSString*)secretKey
      sessionToken:(NSString*)sessionToken
      expiration:(NSString*)expiration { 
     self.accessKey = accessKey;               
     self.secretKey = secretKey;               
     self.sessionToken = sessionToken;               
     self.expiration = expiration;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self accessKey])
    {
        [result setValue:[self accessKey] forKey:@"accessKey"];
    }
    if([self secretKey])
    {
        [result setValue:[self secretKey] forKey:@"secretKey"];
    }
    if([self sessionToken])
    {
        [result setValue:[self sessionToken] forKey:@"sessionToken"];
    }
    if([self expiration])
    {
        [result setValue:[self expiration] forKey:@"expiration"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.accessKey = [dictionary objectForKey:@"accessKey"];
    self.secretKey = [dictionary objectForKey:@"secretKey"];
    self.sessionToken = [dictionary objectForKey:@"sessionToken"];
    self.expiration = [dictionary objectForKey:@"expiration"];
    return self;
}
 @end
@implementation AssumedRoleUser
-(id) initWithAssumedRoleId:(NSString*) assumedRoleId
      jrn:(NSString*)jrn { 
     self.assumedRoleId = assumedRoleId;               
     self.jrn = jrn;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self assumedRoleId])
    {
        [result setValue:[self assumedRoleId] forKey:@"assumedRoleId"];
    }
    if([self jrn])
    {
        [result setValue:[self jrn] forKey:@"jrn"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.assumedRoleId = [dictionary objectForKey:@"assumedRoleId"];
    self.jrn = [dictionary objectForKey:@"jrn"];
    return self;
}
 @end
@implementation AssumeServiceRoleInfo
-(id) initWithRoleType:(NSNumber*) roleType
      durationSeconds:(NSNumber*)durationSeconds { 
     self.roleType = roleType;               
     self.durationSeconds = durationSeconds;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self roleType])
    {
        [result setValue:[self roleType] forKey:@"roleType"];
    }
    if([self durationSeconds])
    {
        [result setValue:[self durationSeconds] forKey:@"durationSeconds"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.roleType = [dictionary objectForKey:@"roleType"];
    self.durationSeconds = [dictionary objectForKey:@"durationSeconds"];
    return self;
}
 @end
 
 


