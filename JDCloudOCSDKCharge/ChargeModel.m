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
#import <JDCloudOCSDKCharge/ChargeModel.h>

@implementation ChargeSpec
-(id) initWithChargeMode:(NSString*) chargeMode
      chargeUnit:(NSString*)chargeUnit
      chargeDuration:(NSNumber*)chargeDuration
      autoRenew:(NSNumber*)autoRenew
      buyScenario:(NSString*)buyScenario { 
     self.chargeMode = chargeMode;               
     self.chargeUnit = chargeUnit;               
     self.chargeDuration = chargeDuration;               
     self.autoRenew = autoRenew;               
     self.buyScenario = buyScenario;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self chargeMode])
    {
        [result setValue:[self chargeMode] forKey:@"chargeMode"];
    }
    if([self chargeUnit])
    {
        [result setValue:[self chargeUnit] forKey:@"chargeUnit"];
    }
    if([self chargeDuration])
    {
        [result setValue:[self chargeDuration] forKey:@"chargeDuration"];
    }
    if([self autoRenew])
    {
        [result setValue:[self autoRenew] forKey:@"autoRenew"];
    }
    if([self buyScenario])
    {
        [result setValue:[self buyScenario] forKey:@"buyScenario"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.chargeMode = [dictionary objectForKey:@"chargeMode"];
    self.chargeUnit = [dictionary objectForKey:@"chargeUnit"];
    self.chargeDuration = [dictionary objectForKey:@"chargeDuration"];
    self.autoRenew = [dictionary objectForKey:@"autoRenew"];
    self.buyScenario = [dictionary objectForKey:@"buyScenario"];
    return self;
}
 @end
@implementation Charge
-(id) initWithChargeMode:(NSString*) chargeMode
      chargeStatus:(NSString*)chargeStatus
      chargeStartTime:(NSString*)chargeStartTime
      chargeExpiredTime:(NSString*)chargeExpiredTime
      chargeRetireTime:(NSString*)chargeRetireTime { 
     self.chargeMode = chargeMode;               
     self.chargeStatus = chargeStatus;               
     self.chargeStartTime = chargeStartTime;               
     self.chargeExpiredTime = chargeExpiredTime;               
     self.chargeRetireTime = chargeRetireTime;               
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    if([self chargeMode])
    {
        [result setValue:[self chargeMode] forKey:@"chargeMode"];
    }
    if([self chargeStatus])
    {
        [result setValue:[self chargeStatus] forKey:@"chargeStatus"];
    }
    if([self chargeStartTime])
    {
        [result setValue:[self chargeStartTime] forKey:@"chargeStartTime"];
    }
    if([self chargeExpiredTime])
    {
        [result setValue:[self chargeExpiredTime] forKey:@"chargeExpiredTime"];
    }
    if([self chargeRetireTime])
    {
        [result setValue:[self chargeRetireTime] forKey:@"chargeRetireTime"];
    }
    return result;
}

-(id) initWithDic:(NSDictionary*)dictionary{
    self.chargeMode = [dictionary objectForKey:@"chargeMode"];
    self.chargeStatus = [dictionary objectForKey:@"chargeStatus"];
    self.chargeStartTime = [dictionary objectForKey:@"chargeStartTime"];
    self.chargeExpiredTime = [dictionary objectForKey:@"chargeExpiredTime"];
    self.chargeRetireTime = [dictionary objectForKey:@"chargeRetireTime"];
    return self;
}
 @end
 
 


