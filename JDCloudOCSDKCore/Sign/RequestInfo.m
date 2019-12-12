//
//  RequestInfo.m
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RequestInfo.h"

@implementation RequestInfo

-(id) initWithRequestUrl:(NSString *)requestUrl requestBodyContent:(NSData *)requestBodyContent requestParams:(NSString *)requestParams requestPath:(NSString *)requestPath requestMethod:(NSString *)requestMethod contentType:(NSString *)contentType signedHost:(NSString *)signedHost requestHost:(NSString *)requestHost requestHeader:(NSMutableDictionary *)requestHeader{
    self.requestUrl = requestUrl;
    self.requestBodyContent = requestBodyContent;
    self.requestParams = requestParams;
    self.requestPath = requestPath;
    self.requestMethod = requestMethod;
    self.contentType = contentType;
    self.signedHost = signedHost;
    self.requestHost = requestHost;
    self.requestHeader = requestHeader;
    return self;
}

@end

@implementation SignedRequestInfo
-(id) initWithRequestNonceId:(NSString *)requestNonceId contentSha256:(NSString *)contentSha256 canonicalRequest:(NSString *)canonicalRequest stringToSign:(NSString *)stringToSign stringSignature:(NSString *)stringSignature signedHeaders:(NSString *)signedHeaders requestHead:(NSMutableDictionary *)requestHead{
    self.requestNonceId = requestNonceId;
    self.contentSha256 = contentSha256;
    self.canonicalRequest = canonicalRequest;
    self.stringToSign = stringToSign;
    self.stringSignature = stringSignature;
    self.signedHeaders = signedHeaders;
    self.requestHead = requestHead ;
    return self;
}
@end


