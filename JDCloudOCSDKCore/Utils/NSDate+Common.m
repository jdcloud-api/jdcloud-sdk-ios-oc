//
//  NSDate+Common.m
//  JDCloudOCSDKCore
//
//  Created by 李士军 on 2019/1/10.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSDate+Common.h"
@implementation NSDate(Common)

-(NSString*) dateConvertWithDateFormat:(NSString*)dateFormat{
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = dateFormat;
    NSTimeZone* timeZone = [[NSTimeZone alloc]initWithName:@"UTC"];
    formatter.timeZone = timeZone;
    NSLocale* locale = [ [NSLocale alloc]initWithLocaleIdentifier:@"zh_CN"];
    formatter.locale = locale;
    NSString* dateString = [formatter stringFromDate:self];
    dateString = [dateString componentsSeparatedByString: @" "].firstObject;
    return dateString;
}

@end
