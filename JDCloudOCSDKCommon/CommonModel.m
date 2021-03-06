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
#import <JDCloudOCSDKCommon/CommonModel.h>

@implementation SimpleResponses
-(id) initWithRequestId:(NSString*) requestId { 
     self.requestId = requestId;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self requestId])
    {
        [result setValue:[self requestId] forKey:@"requestId"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.requestId = [dictionary objectForKey:@"requestId"];
    return self;
}
 @end
@implementation Quota
-(id) initWithName:(NSString*) name
      max:(NSNumber*)max
      used:(NSNumber*)used { 
     self.name = name;               
     self.max = max;               
     self.used = used;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self max])
    {
        [result setValue:[self max] forKey:@"max"];
    }
    if([self used])
    {
        [result setValue:[self used] forKey:@"used"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.name = [dictionary objectForKey:@"name"];
    self.max = [dictionary objectForKey:@"max"];
    self.used = [dictionary objectForKey:@"used"];
    return self;
}
 @end
@implementation Filter
-(id) initWithName:(NSString*) name
      operatorValue:(NSString*)operatorValue
      values:(NSArray<NSString*>*)values { 
     self.name = name;               
     self.operatorValue = operatorValue;               
     self.values = values;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self operatorValue])
    {
        [result setValue:[self operatorValue] forKey:@"operator"];
    }
    if([self values])
    {
        [result setValue:[self values] forKey:@"values"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.name = [dictionary objectForKey:@"name"];
    self.operatorValue = [dictionary objectForKey:@"operator"];
    self.values = [dictionary objectForKey:@"values"];
    return self;
}
 @end
@implementation TagFilter
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
@implementation Sort
-(id) initWithName:(NSString*) name
      direction:(NSString*)direction { 
     self.name = name;               
     self.direction = direction;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self name])
    {
        [result setValue:[self name] forKey:@"name"];
    }
    if([self direction])
    {
        [result setValue:[self direction] forKey:@"direction"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.name = [dictionary objectForKey:@"name"];
    self.direction = [dictionary objectForKey:@"direction"];
    return self;
}
 @end
@implementation ErrorItem
-(id) initWithId:(NSString*) idValue
      code:(NSNumber*)code
      details:(NSObject*)details
      message:(NSString*)message
      status:(NSString*)status { 
     self.idValue = idValue;               
     self.code = code;               
     self.details = details;               
     self.message = message;               
     self.status = status;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self idValue])
    {
        [result setValue:[self idValue] forKey:@"id"];
    }
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
    self.idValue = [dictionary objectForKey:@"id"];
    self.code = [dictionary objectForKey:@"code"];
    self.details = [dictionary objectForKey:@"details"];
    self.message = [dictionary objectForKey:@"message"];
    self.status = [dictionary objectForKey:@"status"];
    return self;
}
 @end
@implementation BatchResultDetail
-(id) initWithSuccessCount:(NSNumber*) successCount
      failed:(NSArray<ErrorItem*>*)failed { 
     self.successCount = successCount;               
     self.failed = failed;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self successCount])
    {
        [result setValue:[self successCount] forKey:@"successCount"];
    }
    if([self failed])
    {
        NSMutableArray<NSDictionary*>* arrayDic  = [[NSMutableArray alloc] init];
        for (int i =0 ; i< [[self failed] count]; i++) {
            ErrorItem* item = [[self failed] objectAtIndex:i];
            [arrayDic addObject:[item dictionary]];
        }
        [result setValue:arrayDic forKey:@"failed"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.successCount = [dictionary objectForKey:@"successCount"];
    NSArray* failedArray = [dictionary objectForKey:@"failed"];
    if(failedArray&&![failedArray isKindOfClass:[NSNull class]])
    {
        NSMutableArray* propertyArray = [[NSMutableArray alloc]init];
        for(int i = 0 ; i< [failedArray count];i++)
        {
            ErrorItem* item = [[ErrorItem alloc]initWithDic:[failedArray objectAtIndex:i]];
            if(item)
            {
                [propertyArray addObject:item];
            }
        }
        self.failed = propertyArray;
    }
    return self;
}
 @end
 
 


