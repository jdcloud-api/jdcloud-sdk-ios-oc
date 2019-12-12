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
#import <JDCloudOCSDKOss/OssModel.h>

@implementation Bucket
-(id) initWithName:(NSString*) name
      creationDate:(NSString*)creationDate { 
     self.name = name;               
     self.creationDate = creationDate;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self creationDate])
    {
        [result setValue:[self creationDate] forKey:@"creationDate"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.name = [dictionary objectForKey:@"name"];
    self.creationDate = [dictionary objectForKey:@"creationDate"];
    return self;
}
 @end
@implementation User
-(id) initWithId:(NSString*) idValue
      displayName:(NSString*)displayName { 
     self.idValue = idValue;               
     self.displayName = displayName;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self idValue])
    {
        [result setValue:[self idValue] forKey:@"id"];
    }
    if([self displayName])
    {
        [result setValue:[self displayName] forKey:@"displayName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.idValue = [dictionary objectForKey:@"id"];
    self.displayName = [dictionary objectForKey:@"displayName"];
    return self;
}
 @end
 
 


