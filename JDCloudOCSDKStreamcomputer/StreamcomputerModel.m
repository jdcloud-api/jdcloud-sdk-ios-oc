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
#import <JDCloudOCSDKStreamcomputer/StreamcomputerModel.h>

@implementation Namespace
-(id) initWithId:(NSNumber*) idValue
      name:(NSString*)name
      pods:(NSString*)pods
      type:(NSString*)type
      typeValue:(NSString*)typeValue
      deleted:(NSNumber*)deleted
      createTime:(NSString*)createTime
      updateTime:(NSString*)updateTime
      userName:(NSString*)userName
      status:(NSString*)status
      sourceId:(NSString*)sourceId
      resourceId:(NSString*)resourceId
      podsUpdateTime:(NSString*)podsUpdateTime { 
     self.idValue = idValue;               
     self.name = name;               
     self.pods = pods;               
     self.type = type;               
     self.typeValue = typeValue;               
     self.deleted = deleted;               
     self.createTime = createTime;               
     self.updateTime = updateTime;               
     self.userName = userName;               
     self.status = status;               
     self.sourceId = sourceId;               
     self.resourceId = resourceId;               
     self.podsUpdateTime = podsUpdateTime;               
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
    if([self pods])
    {
        [result setValue:[self pods] forKey:@"pods"];
    }
    if([self type])
    {
        [result setValue:[self type] forKey:@"type"];
    }
    if([self typeValue])
    {
        [result setValue:[self typeValue] forKey:@"typeValue"];
    }
    if([self deleted])
    {
        [result setValue:[self deleted] forKey:@"deleted"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self updateTime])
    {
        [result setValue:[self updateTime] forKey:@"updateTime"];
    }
    if([self userName])
    {
        [result setValue:[self userName] forKey:@"userName"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self sourceId])
    {
        [result setValue:[self sourceId] forKey:@"sourceId"];
    }
    if([self resourceId])
    {
        [result setValue:[self resourceId] forKey:@"resourceId"];
    }
    if([self podsUpdateTime])
    {
        [result setValue:[self podsUpdateTime] forKey:@"podsUpdateTime"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.idValue = [dictionary objectForKey:@"id"];
    self.name = [dictionary objectForKey:@"name"];
    self.pods = [dictionary objectForKey:@"pods"];
    self.type = [dictionary objectForKey:@"type"];
    self.typeValue = [dictionary objectForKey:@"typeValue"];
    self.deleted = [dictionary objectForKey:@"deleted"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.updateTime = [dictionary objectForKey:@"updateTime"];
    self.userName = [dictionary objectForKey:@"userName"];
    self.status = [dictionary objectForKey:@"status"];
    self.sourceId = [dictionary objectForKey:@"sourceId"];
    self.resourceId = [dictionary objectForKey:@"resourceId"];
    self.podsUpdateTime = [dictionary objectForKey:@"podsUpdateTime"];
    return self;
}
 @end
@implementation OkInfo
-(id) initWithStatus:(NSNumber*) status
      message:(NSString*)message { 
     self.status = status;               
     self.message = message;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.status = [dictionary objectForKey:@"status"];
    self.message = [dictionary objectForKey:@"message"];
    return self;
}
 @end
@implementation StorageParameter
-(id) initWithId:(NSNumber*) idValue
      uid:(NSString*)uid
      pKey:(NSString*)pKey
      pValue:(NSString*)pValue
      storageId:(NSNumber*)storageId
      deleted:(NSString*)deleted
      createTime:(NSString*)createTime
      updateTime:(NSString*)updateTime { 
     self.idValue = idValue;               
     self.uid = uid;               
     self.pKey = pKey;               
     self.pValue = pValue;               
     self.storageId = storageId;               
     self.deleted = deleted;               
     self.createTime = createTime;               
     self.updateTime = updateTime;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self idValue])
    {
        [result setValue:[self idValue] forKey:@"id"];
    }
    if([self uid])
    {
        [result setValue:[self uid] forKey:@"uid"];
    }
    if([self pKey])
    {
        [result setValue:[self pKey] forKey:@"pKey"];
    }
    if([self pValue])
    {
        [result setValue:[self pValue] forKey:@"pValue"];
    }
    if([self storageId])
    {
        [result setValue:[self storageId] forKey:@"storageId"];
    }
    if([self deleted])
    {
        [result setValue:[self deleted] forKey:@"deleted"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self updateTime])
    {
        [result setValue:[self updateTime] forKey:@"updateTime"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.idValue = [dictionary objectForKey:@"id"];
    self.uid = [dictionary objectForKey:@"uid"];
    self.pKey = [dictionary objectForKey:@"pKey"];
    self.pValue = [dictionary objectForKey:@"pValue"];
    self.storageId = [dictionary objectForKey:@"storageId"];
    self.deleted = [dictionary objectForKey:@"deleted"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.updateTime = [dictionary objectForKey:@"updateTime"];
    return self;
}
 @end
@implementation JobStr
-(id) initWithNamespaceId:(NSString*) namespaceId
      name:(NSString*)name
      descriptionValue:(NSString*)descriptionValue
      resourceConsume:(NSNumber*)resourceConsume
      idValue:(NSNumber*)idValue
      uid:(NSString*)uid
      status:(NSString*)status
      duration:(NSNumber*)duration
      appName:(NSString*)appName
      deleted:(NSString*)deleted
      createTime:(NSString*)createTime
      updateTime:(NSString*)updateTime
      userName:(NSString*)userName
      sqlStatement:(NSString*)sqlStatement
      jobType:(NSString*)jobType { 
     self.namespaceId = namespaceId;               
     self.name = name;               
     self.descriptionValue = descriptionValue;               
     self.resourceConsume = resourceConsume;               
     self.idValue = idValue;               
     self.uid = uid;               
     self.status = status;               
     self.duration = duration;               
     self.appName = appName;               
     self.deleted = deleted;               
     self.createTime = createTime;               
     self.updateTime = updateTime;               
     self.userName = userName;               
     self.sqlStatement = sqlStatement;               
     self.jobType = jobType;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self namespaceId])
    {
        [result setValue:[self namespaceId] forKey:@"namespaceId"];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self descriptionValue])
    {
        [result setValue:[self descriptionValue] forKey:@"description"];
    }
    if([self resourceConsume])
    {
        [result setValue:[self resourceConsume] forKey:@"resourceConsume"];
    }
    if([self idValue])
    {
        [result setValue:[self idValue] forKey:@"id"];
    }
    if([self uid])
    {
        [result setValue:[self uid] forKey:@"uid"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self duration])
    {
        [result setValue:[self duration] forKey:@"duration"];
    }
    if([self appName])
    {
        [result setValue:[self appName] forKey:@"appName"];
    }
    if([self deleted])
    {
        [result setValue:[self deleted] forKey:@"deleted"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self updateTime])
    {
        [result setValue:[self updateTime] forKey:@"updateTime"];
    }
    if([self userName])
    {
        [result setValue:[self userName] forKey:@"userName"];
    }
    if([self sqlStatement])
    {
        [result setValue:[self sqlStatement] forKey:@"sqlStatement"];
    }
    if([self jobType])
    {
        [result setValue:[self jobType] forKey:@"jobType"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.namespaceId = [dictionary objectForKey:@"namespaceId"];
    self.name = [dictionary objectForKey:@"name"];
    self.descriptionValue = [dictionary objectForKey:@"description"];
    self.resourceConsume = [dictionary objectForKey:@"resourceConsume"];
    self.idValue = [dictionary objectForKey:@"id"];
    self.uid = [dictionary objectForKey:@"uid"];
    self.status = [dictionary objectForKey:@"status"];
    self.duration = [dictionary objectForKey:@"duration"];
    self.appName = [dictionary objectForKey:@"appName"];
    self.deleted = [dictionary objectForKey:@"deleted"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.updateTime = [dictionary objectForKey:@"updateTime"];
    self.userName = [dictionary objectForKey:@"userName"];
    self.sqlStatement = [dictionary objectForKey:@"sqlStatement"];
    self.jobType = [dictionary objectForKey:@"jobType"];
    return self;
}
 @end
@implementation Storage
-(id) initWithId:(NSNumber*) idValue
      name:(NSString*)name
      uid:(NSString*)uid
      type:(NSString*)type
      storageType:(NSString*)storageType
      userName:(NSString*)userName
      createTime:(NSString*)createTime
      updateTime:(NSString*)updateTime
      namespaceId:(NSString*)namespaceId
      deleted:(NSString*)deleted
      storageParameterList:(NSArray<StorageParameter*>*)storageParameterList { 
     self.idValue = idValue;               
     self.name = name;               
     self.uid = uid;               
     self.type = type;               
     self.storageType = storageType;               
     self.userName = userName;               
     self.createTime = createTime;               
     self.updateTime = updateTime;               
     self.namespaceId = namespaceId;               
     self.deleted = deleted;               
     self.storageParameterList = storageParameterList;               
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
    if([self uid])
    {
        [result setValue:[self uid] forKey:@"uid"];
    }
    if([self type])
    {
        [result setValue:[self type] forKey:@"type"];
    }
    if([self storageType])
    {
        [result setValue:[self storageType] forKey:@"storageType"];
    }
    if([self userName])
    {
        [result setValue:[self userName] forKey:@"userName"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self updateTime])
    {
        [result setValue:[self updateTime] forKey:@"updateTime"];
    }
    if([self namespaceId])
    {
        [result setValue:[self namespaceId] forKey:@"namespaceId"];
    }
    if([self deleted])
    {
        [result setValue:[self deleted] forKey:@"deleted"];
    }
    if([self storageParameterList])
    {
        NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
        for (int i =0 ; i< [[self storageParameterList] count]; i++) {
            StorageParameter* item = [[self storageParameterList] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"storageParameterList"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.idValue = [dictionary objectForKey:@"id"];
    self.name = [dictionary objectForKey:@"name"];
    self.uid = [dictionary objectForKey:@"uid"];
    self.type = [dictionary objectForKey:@"type"];
    self.storageType = [dictionary objectForKey:@"storageType"];
    self.userName = [dictionary objectForKey:@"userName"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.updateTime = [dictionary objectForKey:@"updateTime"];
    self.namespaceId = [dictionary objectForKey:@"namespaceId"];
    self.deleted = [dictionary objectForKey:@"deleted"];
    NSArray* storageParameterListArray = [dictionary objectForKey:@"storageParameterList"];
    if(storageParameterListArray&&![storageParameterListArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [storageParameterListArray count];i++)
        {
            StorageParameter* item = [[StorageParameter alloc]initWithDic:[storageParameterListArray objectAtIndex:i]];
            if(item)
            {
                [propertyArray addObject:item];
            }
        }
        self.storageParameterList = propertyArray;
    }
    return self;
}
 @end
 
 


