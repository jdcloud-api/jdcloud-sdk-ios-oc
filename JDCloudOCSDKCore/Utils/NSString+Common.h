//
//  NSString+Common.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef NSString_Common_h
#define NSString_Common_h

@interface NSString(Common)
-(NSString *) appendCompactedString;
-(NSString *)stringFromBytes:(unsigned char *)bytes length:(int)length;
-(NSData*) hexStringToData;
- (NSString*)encodeStringTo64;
@end
#endif /* NSString_Common_h */
