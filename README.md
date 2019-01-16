# ZHDeviceTool
有关iOS设备信息的操作

# cocoapods support
```
pod 'ZHDeviceTool'
```


```
/**
设备唯一标识符
*/
+ (NSString *)UUID;

/**
设备型号名字 eg:iPhone 7
*/
+ (NSString *)deviceModelName;

/**
设备系统名字 eg:iOS 10.3.2
*/
+ (NSString *)deviceSystemVersion;

/**
手机运行商 eg:中国联通
*/
+ (NSString *)carrierName;

```
