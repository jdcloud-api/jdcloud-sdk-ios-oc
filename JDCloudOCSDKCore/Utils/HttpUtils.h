//
//  HttpUtils.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/3.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef HttpUtils_h
#define HttpUtils_h

@interface HttpUtils : NSObject
+(NSDictionary*) httpRequestSyncWithUrl:(NSString*) urlStr
                         requestContent:(NSData*) requestContent
                          requestHeader:(NSDictionary*) requestHeader
                          requestMethod:(NSString*) requestMethod;

+(void)httpRequestAsyncWithUrl:(NSString*) urlStr
                requestContent:(NSData*) requestContent
                 requestHeader:(NSDictionary*) requestHeader
                 requestMethod:(NSString*) requestMethod
             completionHandler:(void(^)(int statusCode, NSData* _Nullable  responseData,NSError * _Nullable error))completionHandler;
@end

#endif /* HttpUtils_h */
