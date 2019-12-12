//
//  ServiceError.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/6.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ServiceError.h"

@implementation ServiceError

-(id) initWithCode:(NSNumber *)code message:(NSString *)message status:(NSString *)status{
    self.code = code;
    self.message = message;
    self.status = status;
    return self;
}

-(NSMutableDictionary*) dictionary
{
    NSMutableDictionary* result = [[NSMutableDictionary alloc] init];
    
    if([self code])
    {
        [result setValue:[self code] forKey:@"code"];
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

-(id) initWithDic:(NSDictionary*)dictionary
{
    if(![dictionary isKindOfClass:[NSNull class]]){
        self.code = [dictionary objectForKey:@"code"];
        self.message = [dictionary objectForKey:@"message"];
        self.status = [dictionary objectForKey:@"status"];
        return self;
    }else{
        return nil;
    }
  
}

@end
