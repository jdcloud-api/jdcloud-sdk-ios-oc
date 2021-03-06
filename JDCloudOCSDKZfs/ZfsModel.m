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
#import <JDCloudOCSDKZfs/ZfsModel.h>

@implementation MountTarget
-(id) initWithFileSystemId:(NSString*) fileSystemId
      ipAddress:(NSString*)ipAddress
      status:(NSString*)status
      mountTargetId:(NSString*)mountTargetId
      subnetId:(NSString*)subnetId
      vpcId:(NSString*)vpcId
      createTime:(NSString*)createTime
      dnsName:(NSString*)dnsName { 
     self.fileSystemId = fileSystemId;               
     self.ipAddress = ipAddress;               
     self.status = status;               
     self.mountTargetId = mountTargetId;               
     self.subnetId = subnetId;               
     self.vpcId = vpcId;               
     self.createTime = createTime;               
     self.dnsName = dnsName;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self fileSystemId])
    {
        [result setValue:[self fileSystemId] forKey:@"fileSystemId"];
    }
    if([self ipAddress])
    {
        [result setValue:[self ipAddress] forKey:@"ipAddress"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self mountTargetId])
    {
        [result setValue:[self mountTargetId] forKey:@"mountTargetId"];
    }
    if([self subnetId])
    {
        [result setValue:[self subnetId] forKey:@"subnetId"];
    }
    if([self vpcId])
    {
        [result setValue:[self vpcId] forKey:@"vpcId"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self dnsName])
    {
        [result setValue:[self dnsName] forKey:@"dnsName"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.fileSystemId = [dictionary objectForKey:@"fileSystemId"];
    self.ipAddress = [dictionary objectForKey:@"ipAddress"];
    self.status = [dictionary objectForKey:@"status"];
    self.mountTargetId = [dictionary objectForKey:@"mountTargetId"];
    self.subnetId = [dictionary objectForKey:@"subnetId"];
    self.vpcId = [dictionary objectForKey:@"vpcId"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.dnsName = [dictionary objectForKey:@"dnsName"];
    return self;
}
 @end
@implementation ZfsTagFilter
-(id) initWithKey:(NSString*) key
      values:(NSArray<NSString*>*)values { 
     self.key = key;               
     self.values = values;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self key])
    {
        [result setValue:[self key] forKey:@"key"];
    }
    if([self values])
    {
        [result setValue:[self values] forKey:@"values"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.key = [dictionary objectForKey:@"key"];
    self.values = [dictionary objectForKey:@"values"];
    return self;
}
 @end
@implementation SizeByte
-(id) initWithTimestamp:(NSString*) timestamp
      value:(NSNumber*)value { 
     self.timestamp = timestamp;               
     self.value = value;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self timestamp])
    {
        [result setValue:[self timestamp] forKey:@"timestamp"];
    }
    if([self value])
    {
        [result setValue:[self value] forKey:@"value"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.timestamp = [dictionary objectForKey:@"timestamp"];
    self.value = [dictionary objectForKey:@"value"];
    return self;
}
 @end
@implementation Tag
-(id) initWithKey:(NSString*) key
      value:(NSString*)value { 
     self.key = key;               
     self.value = value;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self key])
    {
        [result setValue:[self key] forKey:@"key"];
    }
    if([self value])
    {
        [result setValue:[self value] forKey:@"value"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.key = [dictionary objectForKey:@"key"];
    self.value = [dictionary objectForKey:@"value"];
    return self;
}
 @end
@implementation FileSystem
-(id) initWithFileSystemId:(NSString*) fileSystemId
      name:(NSString*)name
      descriptionValue:(NSString*)descriptionValue
      numberOfMountTargets:(NSNumber*)numberOfMountTargets
      sizeByte:(SizeByte*)sizeByte
      status:(NSString*)status
      fileSystemType:(NSString*)fileSystemType
      createTime:(NSString*)createTime
      dnsName:(NSString*)dnsName
      tags:(NSArray<Tag*>*)tags { 
     self.fileSystemId = fileSystemId;               
     self.name = name;               
     self.descriptionValue = descriptionValue;               
     self.numberOfMountTargets = numberOfMountTargets;               
     self.sizeByte = sizeByte;               
     self.status = status;               
     self.fileSystemType = fileSystemType;               
     self.createTime = createTime;               
     self.dnsName = dnsName;               
     self.tags = tags;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self fileSystemId])
    {
        [result setValue:[self fileSystemId] forKey:@"fileSystemId"];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self descriptionValue])
    {
        [result setValue:[self descriptionValue] forKey:@"description"];
    }
    if([self numberOfMountTargets])
    {
        [result setValue:[self numberOfMountTargets] forKey:@"numberOfMountTargets"];
    }
    if([self sizeByte])
    {
        [result setValue:[[self sizeByte] dictionary]forKey:@"sizeByte"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self fileSystemType])
    {
        [result setValue:[self fileSystemType] forKey:@"fileSystemType"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self dnsName])
    {
        [result setValue:[self dnsName] forKey:@"dnsName"];
    }
    if([self tags])
    {
        NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
        for (int i =0 ; i< [[self tags] count]; i++) {
            Tag* item = [[self tags] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"tags"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.fileSystemId = [dictionary objectForKey:@"fileSystemId"];
    self.name = [dictionary objectForKey:@"name"];
    self.descriptionValue = [dictionary objectForKey:@"description"];
    self.numberOfMountTargets = [dictionary objectForKey:@"numberOfMountTargets"];
    self.sizeByte = [[SizeByte alloc]initWithDic:[dictionary objectForKey:@"sizeByte"]];
    self.status = [dictionary objectForKey:@"status"];
    self.fileSystemType = [dictionary objectForKey:@"fileSystemType"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.dnsName = [dictionary objectForKey:@"dnsName"];
    NSArray* tagsArray = [dictionary objectForKey:@"tags"];
    if(tagsArray&&![tagsArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [tagsArray count];i++)
        {
            Tag* item = [[Tag alloc]initWithDic:[tagsArray objectAtIndex:i]];
            if(item)
            {
                [propertyArray addObject:item];
            }
        }
        self.tags = propertyArray;
    }
    return self;
}
 @end
 
 


