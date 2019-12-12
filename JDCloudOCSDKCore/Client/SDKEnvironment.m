//
//  SDKEnvironment.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDKEnvironment.h"

@implementation SDKEnvironment

-(id) initWithEndPoint:(NSString*)endPoint{
    self.endPoint = endPoint;
    return self;
}
-(id) initWithEndPointAndRealEndPoint:(NSString*)endPoint realEndPoint:(NSString*)realEndPoint{
    self.endPoint = endPoint;
    self.realEndPoint = realEndPoint;
    return self;
}
@end
