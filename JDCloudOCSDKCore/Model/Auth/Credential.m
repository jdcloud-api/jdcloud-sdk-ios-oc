//
//  Credential.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Credential.h"

@implementation Credential


-(id) initWithAccessKeyId:(NSString *)accessKeyId
          secretAccessKey:(NSString *)secretAccessKey{
    self.accessKeyId = accessKeyId;
    self.secretAccessKey = secretAccessKey;
    return self;
}

@end
