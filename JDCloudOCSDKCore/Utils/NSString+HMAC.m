//
//  NSString+HMAC.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/3.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonHMAC.h>
#import "NSString+HMAC.h"
#import "NSString+Common.h"
@implementation NSString(HMAC)

-(NSString *) hmacSHA256WithKey:(NSString*) key
{
    NSData *keyData = [key dataUsingEncoding:NSUTF8StringEncoding];
    NSData *messageData = [self dataUsingEncoding:NSUTF8StringEncoding];
    NSMutableData *mutableData = [NSMutableData dataWithLength:CC_SHA256_DIGEST_LENGTH];
    CCHmac(kCCHmacAlgSHA256, keyData.bytes, keyData.length, messageData.bytes, messageData.length, mutableData.mutableBytes);
    return [self stringFromBytes:(unsigned char *)mutableData.bytes length:(int)mutableData.length];
}
-(NSString *) hmacSHA256WithHexKey:(NSString*) hexKey{
    NSData *keyData = [hexKey hexStringToData];
    NSData *messageData = [self dataUsingEncoding:NSUTF8StringEncoding];
    NSMutableData *mutableData = [NSMutableData dataWithLength:CC_SHA256_DIGEST_LENGTH];
    CCHmac(kCCHmacAlgSHA256, keyData.bytes, keyData.length, messageData.bytes, messageData.length, mutableData.mutableBytes);
    return [self stringFromBytes:(unsigned char *)mutableData.bytes length:(int)mutableData.length];
}

@end
