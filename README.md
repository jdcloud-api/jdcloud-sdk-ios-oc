# 京东云 Objective-C Open API SDK

## 说明

* 此项目为京东云 Objective-C Open API SDK 适用于 iOS 开发，目前没有创建 Mac 环境的 Target ,如果需要请自行创建 Target 编译。

* 目前没有自动生成 SDK 编译的环境，因此无法提供 framework 私有仓库。如果需要请联系 erp：lishijun10 生成 SDK 并编译修复问题。

* 如果在使用过程中有新的需求请联系网关组，讨论咚咚群号 6142220

* 如果使用 Swift 构建项目请转到 [jcloud-sdk-ios](http://git.jd.com/jcloud-api-gateway/jcloud-sdk-ios) 项目。

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

    //get response data, the result key please see client not
    VmDescribeInstancesResponse* response = [result objectForKey:@"describeInstancesResponse"];
    NSLog(@"总条数为：%@",[[response result] totalCount]);
}
  
```

## 关于 GZIP 数据加密

* 如果服务端支持请求 body 发送的数据为 gzip 可以开启此方法

* 开启方法为  `[gzipClient addCustomerHeaderWithKey:CONTENT_ENCODING value:@"gzip"];` 在请求时 添加 `CONTENT_ENCODING` 头，添加以后 SDK 会自动的将请求的 body 转换为 json  然后生成 `x-jdcloud-content-sha256` 的 header 然后将已经转换为 json 的 body 内容 进行 gzip 压缩，然后发送请求。

* 服务端开发 java 实现方案请查看[jdcloud-sdk-oc-gzip-java-server-demo](http://git.jd.com/jdcloud-sdk-demp/jdcloud-sdk-oc-gzip-java-server-demo) 这个项目

* 客户端 gzip 调用的 demo 请查看[jdcloud-sdk-objective-c](http://git.jd.com/lishijun10/jdcloud-sdk-objective-c) 中的 `JDCloudSDKGzipTests`

* 也可以自己设置 名称 `x-jdcloud-content-sha256` 的请求头，在请求的时候 会自动的忽略 使用 body 内容进行验签，body 可以发送二进制数据。

## 注意事项

* 在请求参数中目前还不支持 NSArray<NSMutableDictionary*> 这种类型的 和NSMutableDictionary<NSString ，NSObject*> 这种类型的,目前需要用实体类进行描述，后期会考虑支持这种类型，如果有需要，请联系 erp：lishijun10

