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
#import <JDCloudOCSDKJdro/JdroModel.h>

@implementation EventOut
-(id) initWithCreateTime:(NSString*) createTime
      physicalId:(NSString*)physicalId
      resourceAction:(NSString*)resourceAction
      resourceName:(NSString*)resourceName
      resourceStatus:(NSString*)resourceStatus
      resourceStatusReason:(NSString*)resourceStatusReason
      resourceType:(NSString*)resourceType
      stackId:(NSString*)stackId
      uuid:(NSString*)uuid { 
     self.createTime = createTime;               
     self.physicalId = physicalId;               
     self.resourceAction = resourceAction;               
     self.resourceName = resourceName;               
     self.resourceStatus = resourceStatus;               
     self.resourceStatusReason = resourceStatusReason;               
     self.resourceType = resourceType;               
     self.stackId = stackId;               
     self.uuid = uuid;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self physicalId])
    {
        [result setValue:[self physicalId] forKey:@"physicalId"];
    }
    if([self resourceAction])
    {
        [result setValue:[self resourceAction] forKey:@"resourceAction"];
    }
    if([self resourceName])
    {
        [result setValue:[self resourceName] forKey:@"resourceName"];
    }
    if([self resourceStatus])
    {
        [result setValue:[self resourceStatus] forKey:@"resourceStatus"];
    }
    if([self resourceStatusReason])
    {
        [result setValue:[self resourceStatusReason] forKey:@"resourceStatusReason"];
    }
    if([self resourceType])
    {
        [result setValue:[self resourceType] forKey:@"resourceType"];
    }
    if([self stackId])
    {
        [result setValue:[self stackId] forKey:@"stackId"];
    }
    if([self uuid])
    {
        [result setValue:[self uuid] forKey:@"uuid"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.physicalId = [dictionary objectForKey:@"physicalId"];
    self.resourceAction = [dictionary objectForKey:@"resourceAction"];
    self.resourceName = [dictionary objectForKey:@"resourceName"];
    self.resourceStatus = [dictionary objectForKey:@"resourceStatus"];
    self.resourceStatusReason = [dictionary objectForKey:@"resourceStatusReason"];
    self.resourceType = [dictionary objectForKey:@"resourceType"];
    self.stackId = [dictionary objectForKey:@"stackId"];
    self.uuid = [dictionary objectForKey:@"uuid"];
    return self;
}
 @end
@implementation TemplateOut
-(id) initWithCreateTime:(NSString*) createTime
      describe:(NSString*)describe
      idValue:(NSString*)idValue
      info:(NSString*)info
      name:(NSString*)name
      region:(NSString*)region { 
     self.createTime = createTime;               
     self.describe = describe;               
     self.idValue = idValue;               
     self.info = info;               
     self.name = name;               
     self.region = region;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self describe])
    {
        [result setValue:[self describe] forKey:@"describe"];
    }
    if([self idValue])
    {
        [result setValue:[self idValue] forKey:@"id"];
    }
    if([self info])
    {
        [result setValue:[self info] forKey:@"info"];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self region])
    {
        [result setValue:[self region] forKey:@"region"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.describe = [dictionary objectForKey:@"describe"];
    self.idValue = [dictionary objectForKey:@"id"];
    self.info = [dictionary objectForKey:@"info"];
    self.name = [dictionary objectForKey:@"name"];
    self.region = [dictionary objectForKey:@"region"];
    return self;
}
 @end
@implementation ResourceTargetDefinition
-(id) initWithAttribute:(NSString*) attribute
      name:(NSString*)name
      requiresRecreation:(NSString*)requiresRecreation { 
     self.attribute = attribute;               
     self.name = name;               
     self.requiresRecreation = requiresRecreation;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self attribute])
    {
        [result setValue:[self attribute] forKey:@"attribute"];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self requiresRecreation])
    {
        [result setValue:[self requiresRecreation] forKey:@"requiresRecreation"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.attribute = [dictionary objectForKey:@"attribute"];
    self.name = [dictionary objectForKey:@"name"];
    self.requiresRecreation = [dictionary objectForKey:@"requiresRecreation"];
    return self;
}
 @end
@implementation ResourceChangeDetail
-(id) initWithCausingEntity:(NSString*) causingEntity
      changeSource:(NSString*)changeSource
      evaluation:(NSString*)evaluation
      target:(ResourceTargetDefinition*)target { 
     self.causingEntity = causingEntity;               
     self.changeSource = changeSource;               
     self.evaluation = evaluation;               
     self.target = target;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self causingEntity])
    {
        [result setValue:[self causingEntity] forKey:@"causingEntity"];
    }
    if([self changeSource])
    {
        [result setValue:[self changeSource] forKey:@"changeSource"];
    }
    if([self evaluation])
    {
        [result setValue:[self evaluation] forKey:@"evaluation"];
    }
    if([self target])
    {
        [result setValue:[[self target] dictionary]forKey:@"target"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.causingEntity = [dictionary objectForKey:@"causingEntity"];
    self.changeSource = [dictionary objectForKey:@"changeSource"];
    self.evaluation = [dictionary objectForKey:@"evaluation"];
    self.target = [[ResourceTargetDefinition alloc]initWithDic:[dictionary objectForKey:@"target"]];
    return self;
}
 @end
@implementation DescribeResourceTypeListItem
-(id) initWithDescribe:(NSString*) describe
      type:(NSString*)type { 
     self.describe = describe;               
     self.type = type;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self describe])
    {
        [result setValue:[self describe] forKey:@"describe"];
    }
    if([self type])
    {
        [result setValue:[self type] forKey:@"type"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.describe = [dictionary objectForKey:@"describe"];
    self.type = [dictionary objectForKey:@"type"];
    return self;
}
 @end
@implementation PropertyItemType
-(id) initWithMultiValues:(NSArray<NSString*>*) multiValues
      scalar:(NSString*)scalar { 
     self.multiValues = multiValues;               
     self.scalar = scalar;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self multiValues])
    {
        [result setValue:[self multiValues] forKey:@"multiValues"];
    }
    if([self scalar])
    {
        [result setValue:[self scalar] forKey:@"scalar"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.multiValues = [dictionary objectForKey:@"multiValues"];
    self.scalar = [dictionary objectForKey:@"scalar"];
    return self;
}
 @end
@implementation Environment
-(id) initWithDisableRollback:(NSNumber*) disableRollback
      name:(NSString*)name
      params:(NSMutableDictionary<NSString*,NSString*>*)params
      timeout:(NSNumber*)timeout { 
     self.disableRollback = disableRollback;               
     self.name = name;               
     self.params = params;               
     self.timeout = timeout;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self disableRollback])
    {
        [result setValue:[self disableRollback] forKey:@"disableRollback"];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self params])
    {
        [result setValue:[self params] forKey:@"params"];
    }
    if([self timeout])
    {
        [result setValue:[self timeout] forKey:@"timeout"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.disableRollback = [dictionary objectForKey:@"disableRollback"];
    self.name = [dictionary objectForKey:@"name"];
    self.params = [dictionary objectForKey:@"params"];
    self.timeout = [dictionary objectForKey:@"timeout"];
    return self;
}
 @end
@implementation ResourceChange
-(id) initWithAction:(NSString*) action
      details:(NSArray<ResourceChangeDetail*>*)details
      logicalResourceId:(NSString*)logicalResourceId
      physicalResourceId:(NSString*)physicalResourceId
      replacement:(NSString*)replacement
      resourceType:(NSString*)resourceType
      scope:(NSArray<NSString*>*)scope { 
     self.action = action;               
     self.details = details;               
     self.logicalResourceId = logicalResourceId;               
     self.physicalResourceId = physicalResourceId;               
     self.replacement = replacement;               
     self.resourceType = resourceType;               
     self.scope = scope;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self action])
    {
        [result setValue:[self action] forKey:@"action"];
    }
    if([self details])
    {
        NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
        for (int i =0 ; i< [[self details] count]; i++) {
            ResourceChangeDetail* item = [[self details] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"details"];
    }
    if([self logicalResourceId])
    {
        [result setValue:[self logicalResourceId] forKey:@"logicalResourceId"];
    }
    if([self physicalResourceId])
    {
        [result setValue:[self physicalResourceId] forKey:@"physicalResourceId"];
    }
    if([self replacement])
    {
        [result setValue:[self replacement] forKey:@"replacement"];
    }
    if([self resourceType])
    {
        [result setValue:[self resourceType] forKey:@"resourceType"];
    }
    if([self scope])
    {
        [result setValue:[self scope] forKey:@"scope"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.action = [dictionary objectForKey:@"action"];
    NSArray* detailsArray = [dictionary objectForKey:@"details"];
    if(detailsArray&&![detailsArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [detailsArray count];i++)
        {
            ResourceChangeDetail* item = [[ResourceChangeDetail alloc]initWithDic:[detailsArray objectAtIndex:i]];
            if(item)
            {
                [propertyArray addObject:item];
            }
        }
        self.details = propertyArray;
    }
    self.logicalResourceId = [dictionary objectForKey:@"logicalResourceId"];
    self.physicalResourceId = [dictionary objectForKey:@"physicalResourceId"];
    self.replacement = [dictionary objectForKey:@"replacement"];
    self.resourceType = [dictionary objectForKey:@"resourceType"];
    self.scope = [dictionary objectForKey:@"scope"];
    return self;
}
 @end
@implementation PropertyTypeDefinition
-(id) initWithComment:(NSString*) comment
      documentation:(NSString*)documentation
      duplicatesAllowed:(NSNumber*)duplicatesAllowed
      itemType:(NSString*)itemType
      primitiveItemType:(NSString*)primitiveItemType
      primitiveType:(NSString*)primitiveType
      required:(NSNumber*)required
      type:(PropertyItemType*)type
      updateType:(NSString*)updateType { 
     self.comment = comment;               
     self.documentation = documentation;               
     self.duplicatesAllowed = duplicatesAllowed;               
     self.itemType = itemType;               
     self.primitiveItemType = primitiveItemType;               
     self.primitiveType = primitiveType;               
     self.required = required;               
     self.type = type;               
     self.updateType = updateType;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self comment])
    {
        [result setValue:[self comment] forKey:@"comment"];
    }
    if([self documentation])
    {
        [result setValue:[self documentation] forKey:@"documentation"];
    }
    if([self duplicatesAllowed])
    {
        [result setValue:[self duplicatesAllowed] forKey:@"duplicatesAllowed"];
    }
    if([self itemType])
    {
        [result setValue:[self itemType] forKey:@"itemType"];
    }
    if([self primitiveItemType])
    {
        [result setValue:[self primitiveItemType] forKey:@"primitiveItemType"];
    }
    if([self primitiveType])
    {
        [result setValue:[self primitiveType] forKey:@"primitiveType"];
    }
    if([self required])
    {
        [result setValue:[self required] forKey:@"required"];
    }
    if([self type])
    {
        [result setValue:[[self type] dictionary]forKey:@"type"];
    }
    if([self updateType])
    {
        [result setValue:[self updateType] forKey:@"updateType"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.comment = [dictionary objectForKey:@"comment"];
    self.documentation = [dictionary objectForKey:@"documentation"];
    self.duplicatesAllowed = [dictionary objectForKey:@"duplicatesAllowed"];
    self.itemType = [dictionary objectForKey:@"itemType"];
    self.primitiveItemType = [dictionary objectForKey:@"primitiveItemType"];
    self.primitiveType = [dictionary objectForKey:@"primitiveType"];
    self.required = [dictionary objectForKey:@"required"];
    self.type = [[PropertyItemType alloc]initWithDic:[dictionary objectForKey:@"type"]];
    self.updateType = [dictionary objectForKey:@"updateType"];
    return self;
}
 @end
@implementation ResourceAttribute
-(id) initWithComment:(NSString*) comment
      itemType:(NSString*)itemType
      primitiveItemType:(NSString*)primitiveItemType
      primitiveType:(NSString*)primitiveType
      type:(PropertyItemType*)type { 
     self.comment = comment;               
     self.itemType = itemType;               
     self.primitiveItemType = primitiveItemType;               
     self.primitiveType = primitiveType;               
     self.type = type;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self comment])
    {
        [result setValue:[self comment] forKey:@"comment"];
    }
    if([self itemType])
    {
        [result setValue:[self itemType] forKey:@"itemType"];
    }
    if([self primitiveItemType])
    {
        [result setValue:[self primitiveItemType] forKey:@"primitiveItemType"];
    }
    if([self primitiveType])
    {
        [result setValue:[self primitiveType] forKey:@"primitiveType"];
    }
    if([self type])
    {
        [result setValue:[[self type] dictionary]forKey:@"type"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.comment = [dictionary objectForKey:@"comment"];
    self.itemType = [dictionary objectForKey:@"itemType"];
    self.primitiveItemType = [dictionary objectForKey:@"primitiveItemType"];
    self.primitiveType = [dictionary objectForKey:@"primitiveType"];
    self.type = [[PropertyItemType alloc]initWithDic:[dictionary objectForKey:@"type"]];
    return self;
}
 @end
@implementation Err
-(id) initWithCode:(NSNumber*) code
      details:(NSObject*)details
      message:(NSString*)message
      status:(NSString*)status { 
     self.code = code;               
     self.details = details;               
     self.message = message;               
     self.status = status;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self code])
    {
        [result setValue:[self code] forKey:@"code"];
    }
    if([self details])
    {
        [result setValue:[self details] forKey:@"details"];
    }
    if([self message])
    {
        [result setValue:[self message] forKey:@"message"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.code = [dictionary objectForKey:@"code"];
    self.details = [dictionary objectForKey:@"details"];
    self.message = [dictionary objectForKey:@"message"];
    self.status = [dictionary objectForKey:@"status"];
    return self;
}
 @end
@implementation ResourceTypes
-(id) initWithAttributes:(NSMutableDictionary<NSString*,ResourceAttribute*>*) attributes
      descriptionValue:(NSString*)descriptionValue
      documentation:(NSString*)documentation
      properties:(NSMutableDictionary<NSString*,PropertyTypeDefinition*>*)properties { 
     self.attributes = attributes;               
     self.descriptionValue = descriptionValue;               
     self.documentation = documentation;               
     self.properties = properties;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self attributes])
    {
      //  [result setValue:[[self attributes] dictionary]forKey:@"attributes"];
    }
    if([self descriptionValue])
    {
        [result setValue:[self descriptionValue] forKey:@"description"];
    }
    if([self documentation])
    {
        [result setValue:[self documentation] forKey:@"documentation"];
    }
    if([self properties])
    {
      //  [result setValue:[[self properties] dictionary]forKey:@"properties"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
  //  self.attributes = [[NSMutableDictionary<NSString*,ResourceAttribute*> alloc]initWithDic:[dictionary objectForKey:@"attributes"]];
    self.descriptionValue = [dictionary objectForKey:@"description"];
    self.documentation = [dictionary objectForKey:@"documentation"];
   // self.properties = [[NSMutableDictionary<NSString*,PropertyTypeDefinition*> alloc]initWithDic:[dictionary objectForKey:@"properties"]];
    return self;
}
 @end
@implementation ChangeSet
-(id) initWithAction:(NSString*) action
      changeInfo:(NSString*)changeInfo
      changeMap:(NSMutableDictionary<NSString*,Change*>*)changeMap
      createTime:(NSString*)createTime
      describe:(NSString*)describe
      idValue:(NSString*)idValue
      isRun:(NSNumber*)isRun
      name:(NSString*)name
      region:(NSString*)region
      runTime:(NSString*)runTime
      stackId:(NSString*)stackId
      status:(NSString*)status
      statusReason:(NSString*)statusReason
      templateId:(NSString*)templateId { 
     self.action = action;               
     self.changeInfo = changeInfo;               
     self.changeMap = changeMap;               
     self.createTime = createTime;               
     self.describe = describe;               
     self.idValue = idValue;               
     self.isRun = isRun;               
     self.name = name;               
     self.region = region;               
     self.runTime = runTime;               
     self.stackId = stackId;               
     self.status = status;               
     self.statusReason = statusReason;               
     self.templateId = templateId;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self action])
    {
        [result setValue:[self action] forKey:@"action"];
    }
    if([self changeInfo])
    {
        [result setValue:[self changeInfo] forKey:@"changeInfo"];
    }
    if([self changeMap])
    {
      //  [result setValue:[[self changeMap] dictionary]forKey:@"changeMap"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self describe])
    {
        [result setValue:[self describe] forKey:@"describe"];
    }
    if([self idValue])
    {
        [result setValue:[self idValue] forKey:@"id"];
    }
    if([self isRun])
    {
        [result setValue:[self isRun] forKey:@"isRun"];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self region])
    {
        [result setValue:[self region] forKey:@"region"];
    }
    if([self runTime])
    {
        [result setValue:[self runTime] forKey:@"runTime"];
    }
    if([self stackId])
    {
        [result setValue:[self stackId] forKey:@"stackId"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self statusReason])
    {
        [result setValue:[self statusReason] forKey:@"statusReason"];
    }
    if([self templateId])
    {
        [result setValue:[self templateId] forKey:@"templateId"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.action = [dictionary objectForKey:@"action"];
    self.changeInfo = [dictionary objectForKey:@"changeInfo"];
   // self.changeMap = [[NSMutableDictionary<NSString*,Change*> alloc]initWithDic:[dictionary objectForKey:@"changeMap"]];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.describe = [dictionary objectForKey:@"describe"];
    self.idValue = [dictionary objectForKey:@"id"];
    self.isRun = [dictionary objectForKey:@"isRun"];
    self.name = [dictionary objectForKey:@"name"];
    self.region = [dictionary objectForKey:@"region"];
    self.runTime = [dictionary objectForKey:@"runTime"];
    self.stackId = [dictionary objectForKey:@"stackId"];
    self.status = [dictionary objectForKey:@"status"];
    self.statusReason = [dictionary objectForKey:@"statusReason"];
    self.templateId = [dictionary objectForKey:@"templateId"];
    return self;
}
 @end
@implementation Change
-(id) initWithResourceChange:(ResourceChange*) resourceChange
      type:(NSString*)type { 
     self.resourceChange = resourceChange;               
     self.type = type;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self resourceChange])
    {
        [result setValue:[[self resourceChange] dictionary]forKey:@"resourceChange"];
    }
    if([self type])
    {
        [result setValue:[self type] forKey:@"type"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.resourceChange = [[ResourceChange alloc]initWithDic:[dictionary objectForKey:@"resourceChange"]];
    self.type = [dictionary objectForKey:@"type"];
    return self;
}
 @end
@implementation ResourceOut
-(id) initWithAction:(NSString*) action
      createTime:(NSString*)createTime
      deletePolicy:(NSString*)deletePolicy
      deleteTime:(NSString*)deleteTime
      logicId:(NSString*)logicId
      physicalId:(NSString*)physicalId
      region:(NSString*)region
      snapshot:(NSString*)snapshot
      stackId:(NSString*)stackId
      status:(NSString*)status
      statusReason:(NSString*)statusReason
      type:(NSString*)type
      updateTime:(NSString*)updateTime { 
     self.action = action;               
     self.createTime = createTime;               
     self.deletePolicy = deletePolicy;               
     self.deleteTime = deleteTime;               
     self.logicId = logicId;               
     self.physicalId = physicalId;               
     self.region = region;               
     self.snapshot = snapshot;               
     self.stackId = stackId;               
     self.status = status;               
     self.statusReason = statusReason;               
     self.type = type;               
     self.updateTime = updateTime;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self action])
    {
        [result setValue:[self action] forKey:@"action"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self deletePolicy])
    {
        [result setValue:[self deletePolicy] forKey:@"deletePolicy"];
    }
    if([self deleteTime])
    {
        [result setValue:[self deleteTime] forKey:@"deleteTime"];
    }
    if([self logicId])
    {
        [result setValue:[self logicId] forKey:@"logicId"];
    }
    if([self physicalId])
    {
        [result setValue:[self physicalId] forKey:@"physicalId"];
    }
    if([self region])
    {
        [result setValue:[self region] forKey:@"region"];
    }
    if([self snapshot])
    {
        [result setValue:[self snapshot] forKey:@"snapshot"];
    }
    if([self stackId])
    {
        [result setValue:[self stackId] forKey:@"stackId"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self statusReason])
    {
        [result setValue:[self statusReason] forKey:@"statusReason"];
    }
    if([self type])
    {
        [result setValue:[self type] forKey:@"type"];
    }
    if([self updateTime])
    {
        [result setValue:[self updateTime] forKey:@"updateTime"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.action = [dictionary objectForKey:@"action"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.deletePolicy = [dictionary objectForKey:@"deletePolicy"];
    self.deleteTime = [dictionary objectForKey:@"deleteTime"];
    self.logicId = [dictionary objectForKey:@"logicId"];
    self.physicalId = [dictionary objectForKey:@"physicalId"];
    self.region = [dictionary objectForKey:@"region"];
    self.snapshot = [dictionary objectForKey:@"snapshot"];
    self.stackId = [dictionary objectForKey:@"stackId"];
    self.status = [dictionary objectForKey:@"status"];
    self.statusReason = [dictionary objectForKey:@"statusReason"];
    self.type = [dictionary objectForKey:@"type"];
    self.updateTime = [dictionary objectForKey:@"updateTime"];
    return self;
}
 @end
@implementation StackOut
-(id) initWithAction:(NSString*) action
      canUpdate:(NSNumber*)canUpdate
      createTime:(NSString*)createTime
      disableRollback:(NSNumber*)disableRollback
      idValue:(NSString*)idValue
      input:(NSMutableDictionary<NSString*,NSObject*>*)input
      name:(NSString*)name
      output:(NSMutableDictionary<NSString*,NSObject*>*)output
      region:(NSString*)region
      stackVersion:(NSNumber*)stackVersion
      status:(NSString*)status
      statusReason:(NSString*)statusReason
      templateId:(NSString*)templateId
      timeout:(NSNumber*)timeout
      updateTime:(NSString*)updateTime { 
     self.action = action;               
     self.canUpdate = canUpdate;               
     self.createTime = createTime;               
     self.disableRollback = disableRollback;               
     self.idValue = idValue;               
     self.input = input;               
     self.name = name;               
     self.output = output;               
     self.region = region;               
     self.stackVersion = stackVersion;               
     self.status = status;               
     self.statusReason = statusReason;               
     self.templateId = templateId;               
     self.timeout = timeout;               
     self.updateTime = updateTime;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self action])
    {
        [result setValue:[self action] forKey:@"action"];
    }
    if([self canUpdate])
    {
        [result setValue:[self canUpdate] forKey:@"canUpdate"];
    }
    if([self createTime])
    {
        [result setValue:[self createTime] forKey:@"createTime"];
    }
    if([self disableRollback])
    {
        [result setValue:[self disableRollback] forKey:@"disableRollback"];
    }
    if([self idValue])
    {
        [result setValue:[self idValue] forKey:@"id"];
    }
    if([self input])
    {
        [result setValue:[self input] forKey:@"input"];
    }
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self output])
    {
        [result setValue:[self output] forKey:@"output"];
    }
    if([self region])
    {
        [result setValue:[self region] forKey:@"region"];
    }
    if([self stackVersion])
    {
        [result setValue:[self stackVersion] forKey:@"stackVersion"];
    }
    if([self status])
    {
        [result setValue:[self status] forKey:@"status"];
    }
    if([self statusReason])
    {
        [result setValue:[self statusReason] forKey:@"statusReason"];
    }
    if([self templateId])
    {
        [result setValue:[self templateId] forKey:@"templateId"];
    }
    if([self timeout])
    {
        [result setValue:[self timeout] forKey:@"timeout"];
    }
    if([self updateTime])
    {
        [result setValue:[self updateTime] forKey:@"updateTime"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.action = [dictionary objectForKey:@"action"];
    self.canUpdate = [dictionary objectForKey:@"canUpdate"];
    self.createTime = [dictionary objectForKey:@"createTime"];
    self.disableRollback = [dictionary objectForKey:@"disableRollback"];
    self.idValue = [dictionary objectForKey:@"id"];
    self.input = [dictionary objectForKey:@"input"];
    self.name = [dictionary objectForKey:@"name"];
    self.output = [dictionary objectForKey:@"output"];
    self.region = [dictionary objectForKey:@"region"];
    self.stackVersion = [dictionary objectForKey:@"stackVersion"];
    self.status = [dictionary objectForKey:@"status"];
    self.statusReason = [dictionary objectForKey:@"statusReason"];
    self.templateId = [dictionary objectForKey:@"templateId"];
    self.timeout = [dictionary objectForKey:@"timeout"];
    self.updateTime = [dictionary objectForKey:@"updateTime"];
    return self;
}
 @end
@implementation PropertyTypes
-(id) initWithDocumentation:(NSString*) documentation
      properties:(NSMutableDictionary<NSString*,PropertyTypeDefinition*>*)properties { 
     self.documentation = documentation;               
     self.properties = properties;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self documentation])
    {
        [result setValue:[self documentation] forKey:@"documentation"];
    }
    if([self properties])
    {
     //   [result setValue:[[self properties] dictionary]forKey:@"properties"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.documentation = [dictionary objectForKey:@"documentation"];
  //  self.properties = [[NSMutableDictionary<NSString*,PropertyTypeDefinition*> alloc]initWithDic:[dictionary objectForKey:@"properties"]];
    return self;
}
 @end
@implementation CreateStackSpec
-(id) initWithEnvironment:(Environment*) environment
      template:(NSObject*)template { 
     self.environment = environment;               
     self.template = template;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self environment])
    {
        [result setValue:[[self environment] dictionary]forKey:@"environment"];
    }
    if([self template])
    {
        [result setValue:[self template] forKey:@"template"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.environment = [[Environment alloc]initWithDic:[dictionary objectForKey:@"environment"]];
    self.template = [dictionary objectForKey:@"template"];
    return self;
}
 @end
@implementation CreateStackChangeSetRequset
-(id) initWithEnvironment:(Environment*) environment
      template:(NSObject*)template { 
     self.environment = environment;               
     self.template = template;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self environment])
    {
        [result setValue:[[self environment] dictionary]forKey:@"environment"];
    }
    if([self template])
    {
        [result setValue:[self template] forKey:@"template"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.environment = [[Environment alloc]initWithDic:[dictionary objectForKey:@"environment"]];
    self.template = [dictionary objectForKey:@"template"];
    return self;
}
 @end
@implementation TemplateValidateSpec
-(id) initWithEnvironment:(Environment*) environment
      template:(NSObject*)template
      validateMode:(NSString*)validateMode { 
     self.environment = environment;               
     self.template = template;               
     self.validateMode = validateMode;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self environment])
    {
        [result setValue:[[self environment] dictionary]forKey:@"environment"];
    }
    if([self template])
    {
        [result setValue:[self template] forKey:@"template"];
    }
    if([self validateMode])
    {
        [result setValue:[self validateMode] forKey:@"validateMode"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.environment = [[Environment alloc]initWithDic:[dictionary objectForKey:@"environment"]];
    self.template = [dictionary objectForKey:@"template"];
    self.validateMode = [dictionary objectForKey:@"validateMode"];
    return self;
}
 @end
 
 


