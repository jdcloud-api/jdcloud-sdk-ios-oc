//
//  NSString+HMAC.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/3.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef NSString_HMAC_h
#define NSString_HMAC_h

@interface NSString(HMAC)
-(NSString *) hmacSHA256WithKey:(NSString*) key;
-(NSString *) hmacSHA256WithHexKey:(NSString*) hexKey;
@end
#endif /* NSString_HMAC_h */
