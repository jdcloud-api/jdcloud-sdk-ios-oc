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
#import <JDCloudOCSDKAg/AgModel.h>

@implementation AgQuota
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
@implementation AvailabilityGroup
-(id) initWithId:(NSString*) idValue
      name:(NSString*)name
      descriptionValue:(NSString*)descriptionValue
      instanceTemplateId:(NSString*)instanceTemplateId
      azs:(NSArray<NSString*>*)azs
      agType:(NSString*)agType
      createTime:(NSString*)createTime
      count:(NSNumber*)count
      autoScaling:(NSNumber*)autoScaling { 
     self.idValue = idValue;               
     self.name = name;               
     self.descriptionValue = descriptionValue;               
     self.instanceTemplateId = instanceTemplateId;               
     self.azs = azs;               
     self.agType = agType;               
     self.createTime = createTime;               
     self.count = count;               
     self.autoScaling = autoScaling;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self idValue])
    {
        [result setValue:[self idValue] forKey:@"id"];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self descriptionValue])
    {
        [result setValue:[self descriptionValue] forKey:@"description"];
    }
    if([self instanceTemplateId])
    {
        [result setValue:[self instanceTemplateId] forKey:@"instanceTemplateId"];
    }
    if([self azs])
    {
        [result setValue:[self azs] forKey:@"azs"];
    }
    if([self agType])
    {
        [result setValue:[self agType] forKey:@"agType"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self count])
    {
        [result setValue:[self count] forKey:@"count"];
    }
    if([self autoScaling])
    {
        [result setValue:[self autoScaling] forKey:@"autoScaling"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.idValue = [dictionary objectForKey:@"id"];
    self.name = [dictionary objectForKey:@"name"];
    self.descriptionValue = [dictionary objectForKey:@"description"];
    self.instanceTemplateId = [dictionary objectForKey:@"instanceTemplateId"];
    self.azs = [dictionary objectForKey:@"azs"];
    self.agType = [dictionary objectForKey:@"agType"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.count = [dictionary objectForKey:@"count"];
    self.autoScaling = [dictionary objectForKey:@"autoScaling"];
    return self;
}
 @end
 
 


