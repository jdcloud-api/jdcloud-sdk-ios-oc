# JDCloud Objective-C Open API SDK

## 简介

&emsp;&emsp;欢迎使用京东云开发者  iOS 工具套件（使用 Objective-C 语言编写）。使用京东云 iOS SDK，您无需复杂编程就可以访问京东云提供的各种服务。    
&emsp;&emsp;为了方便您理解SDK中的一些概念和参数的含义，使用SDK前建议您先查看OpenAPI使用入门。要了解每个API的具体参数和含义，请参考程序注释或参考[OpenAPI&SDK](https://www.jdcloud.com/help/faq?act=3)下具体产品线的API文档。

## 环境准备 & 编译

* 此代码使用 XCode 10.1 编写,打开项目需要安装 XCode 10.1 以上版本。

## 调用方法

* 目前没有上传 pod 因此请手动引用源码到您的项目中进行编译。

* 关于使用方法请查看项目的`JDCloudOCSDKVmTests` 文件夹下的`JDCloudOCSDKVmTests.m` 文件 ，简单的调用示例如下：

```Objective-C

-(void)testRequestSync{
    /// init Credential
    Credential * credential = [[Credential alloc]initWithAccessKeyId:@"your jdcloud ak" secretAccessKey:@"your jdcloud sk"];
    
    /// if use internal service create this object and set client sdkEnvironment property
    SDKEnvironment* sdkEnvironment = [[SDKEnvironment alloc]initWithEndPoint:@"apigw-internal.cn-north-1.jcloudcs.com"];

    /// init client if use default environment please write like this "VmClient* vmClient = [[VmClient alloc] initWithCredential:credential]"
    VmClient* vmClient = [[VmClient alloc] initWithCredential:credential sdkEnvironment:sdkEnvironment];

    /// if set debug true  it will write debug log
    [GlobalConfig setDebug:true];

    // set httpRequestProtocol if use internal set http else do not need to set this property , default value is https
    vmClient.httpRequestProtocol = @"http";

    // create request param
    VmDescribeInstancesRequest* describeInstancesRequest = [[VmDescribeInstancesRequest alloc]initWithRegion:@"cn-north-1"];
    
    // call sync method , if you want call async method see "JDCloudOCSDKVmTests/JDCloudOCSDKVmTests.m"
    NSDictionary* result = [vmClient describeInstancesSyncWithRequest:describeInstancesRequest];

    //get response data, the result key please see client notice
    VmDescribeInstancesResponse* response = [result objectForKey:@"describeInstancesResponse"];
    NSLog(@"总条数为：%@",[[response result] totalCount]);
}
  
```

## 注意事项

* 如果需要设置额外的header，例如要调用开启了MFA操作保护的接口，需要传递x-jdcloud-security-token，则按照如下方式：

```

    [vmClient addCustomerHeaderWithKey:@"x-jdcloud-security-token" value:@"xxx"]

```

* 如果需要设置访问点，使用异步请求，请参考下面的例子：

```
    
    Credential * credential = [[Credential alloc]initWithAccessKeyId:@"ak" secretAccessKey:@"sk"];
    // set request host
    SDKEnvironment* sdkEnvironment = [[SDKEnvironment alloc]initWithEndPoint:@"apigw-internal.cn-north-1.jcloudcs.com"];
    VmClient* vmClient = [[VmClient alloc] initWithCredential:credential sdkEnvironment:sdkEnvironment];
    [GlobalConfig setDebug:true];
    VmDescribeInstancesRequest* describeInstancesRequest = [[VmDescribeInstancesRequest alloc]initWithRegion:@"cn-north-1"];
    vmClient.httpRequestProtocol = @"http";
    dispatch_semaphore_t semaphore = dispatch_semaphore_create(0);
    [vmClient describeInstancesAsyncWithRequest:describeInstancesRequest completionHandler:^(int statusCode, VmDescribeInstancesResponse * _Nullable describeInstancesResponse, NSData * _Nullable responseData, NSError * _Nullable error) {
        NSLog(@"总条数为：%@",[[describeInstancesResponse result] totalCount]);
        dispatch_semaphore_signal(semaphore);
    }];
    dispatch_semaphore_wait(semaphore, DISPATCH_TIME_FOREVER);

```
 * 因 ios 默认的 http 请求超时时间为 60s（IOS6+）暂时没有添加请求超时时间的设置。
