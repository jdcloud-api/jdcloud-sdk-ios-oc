//
//  RequestInfo.h
//  JDCloudOCSDK
//
//  Created by 李士军 on 2019/1/2.
//  Copyright © 2019年 李士军. All rights reserved.
//

#ifndef RequestInfo_h
#define RequestInfo_h
@interface RequestInfo:NSObject

@property (strong,nonatomic) NSString* requestUrl;

@property (strong,nonatomic) NSData* requestBodyContent;

@property (strong,nonatomic) NSString* requestParams;

@property (strong,nonatomic) NSString* requestPath;

@property (strong,nonatomic) NSString* requestMethod;

@property (strong,nonatomic) NSString* contentType;

@property (strong,nonatomic) NSString* signedHost;

@property (strong,nonatomic) NSString* requestHost;

@property (strong,nonatomic) NSMutableDictionary* requestHeader;

-(id)initWithRequestUrl:(NSString*) requestUrl
     requestBodyContent:(NSData*) requestBodyContent
          requestParams:(NSString*) requestParams
            requestPath:(NSString*) requestPath
          requestMethod:(NSString*) requestMethod
            contentType:(NSString*) contentType
             signedHost:(NSString*) signedHost
            requestHost:(NSString*) requestHost
          requestHeader:(NSMutableDictionary*) requestHeader;
@end


@interface SignedRequestInfo : NSObject

@property (strong,nonatomic) NSString* requestNonceId;

@property (strong,nonatomic) NSString* contentSha256;

@property (strong,nonatomic) NSString* canonicalRequest;

@property (strong,nonatomic) NSString* stringToSign;

@property (strong,nonatomic) NSString* stringSignature;

@property (strong,nonatomic) NSString* signedHeaders;

@property (strong,nonatomic) NSMutableDictionary* requestHead;

-(id)initWithRequestNonceId:(NSString*) requestNonceId
              contentSha256:(NSString*) contentSha256
           canonicalRequest:(NSString*) canonicalRequest
               stringToSign:(NSString*) stringToSign
            stringSignature:(NSString*) stringSignature
              signedHeaders:(NSString*) signedHeaders
                requestHead:(NSMutableDictionary*) requestHead;

@end
#endif /* RequestInfo_h */
