//
//  JDCloudRequest.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>


#import "JDCloudRequest.h"

@implementation JDCloudDataRequest

-(id)initWithRegion:(NSString*)regionId
        requestData:(NSData*) requestData
{
    self.regionId = regionId;
    self.requestData = requestData;
    return self;
}

-(id)initWithRegion:(NSString*)regionId
            version:(NSString*)version
        requestData:(NSData*) requestData
{
    self.regionId = regionId;
    self.requestData = requestData;
    self.version = version;
    return self;
}

@end

@implementation JDCloudRequest


-(id) initWithRegion:(NSString *)regionId{
    self.regionId = regionId;
    return self;
}

-(id) initWithRegion:(NSString *)regionId version:(NSString *)version{
    self.regionId = regionId;
    self.version = version;
    return self;
}

-(NSMutableDictionary*) dictionary{
    NSMutableDictionary *objectDic = [[NSMutableDictionary alloc]init];
    if([self version])
    {
        [objectDic setObject:self.version forKey:@"version"];
    }
    if([self regionId])
    {
        [objectDic setObject:self.regionId forKey:@"regionId"];
    }
    return objectDic;
}
-(NSMutableDictionary*) postDictionary{
    NSMutableDictionary *objectDic = [[NSMutableDictionary alloc]init];
    return objectDic;
}
@end
