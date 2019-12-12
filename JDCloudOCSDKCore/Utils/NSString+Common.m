//
//  NSString+Common.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSString+Common.h"

@implementation NSString(Common)

-(NSString*) appendCompactedString{
    NSString* result = @"";
    
    BOOL previousIsWhiteSpace = false;
    for (int i = 0 ; i < self.length; i ++) {
        unichar charactor = [self characterAtIndex:i];
        if(charactor == ' ')
        {
            if(previousIsWhiteSpace)
            {
                continue;
            }
            result = [result stringByAppendingString:@" "];
            previousIsWhiteSpace = true;
        }else
        {
            result = [result stringByAppendingString: [NSString stringWithFormat: @"%C", charactor]];
            previousIsWhiteSpace = false;
        }
    }
    
    return result;
}

- (NSString *)stringFromBytes:(unsigned char *)bytes length:(int)length{
    NSMutableString *mutableString = @"".mutableCopy;
    for (int i = 0; i < length; i++)
        [mutableString appendFormat:@"%02x", bytes[i]];
    return [NSString stringWithString:mutableString];
}

-(NSData*) hexStringToData{
    NSString* command = [self stringByReplacingOccurrencesOfString:@" " withString:@""];
    NSMutableData *commandToSend= [[NSMutableData alloc] init];
    unsigned char whole_byte;
    char byte_chars[3] = {'\0','\0','\0'};
    int i;
    for (i=0; i < [command length]/2; i++) {
        byte_chars[0] = [command characterAtIndex:i*2];
        byte_chars[1] = [command characterAtIndex:i*2+1];
        whole_byte = strtol(byte_chars, NULL, 16);
        [commandToSend appendBytes:&whole_byte length:1];
    }
    return commandToSend;
}

- (NSString*)encodeStringTo64
{
    NSData *plainData = [self dataUsingEncoding:NSUTF8StringEncoding];
    NSString *base64String;
    if ([plainData respondsToSelector:@selector(base64EncodedStringWithOptions:)]) {
        base64String = [plainData base64EncodedStringWithOptions:kNilOptions];  // iOS 7+
    } else {
        base64String = [plainData base64Encoding];                              // pre iOS7
    }
    
    return base64String;
}
@end
