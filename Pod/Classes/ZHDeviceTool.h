//
//  ZHDeviceTool.h
//  ZHDeviceTool
//
//  Created by Lee on 2016/8/22.
//  Copyright © 2016年 leezhihua All rights reserved.
//

#import <UIKit/UIKit.h>

/// Screen Size
#define SCREEN_SIZE                     UIScreen.mainScreen.bounds.size
/// 屏幕宽
#define SCREEN_WIDTH                    UIScreen.mainScreen.bounds.size.width
/// 屏幕高
#define SCREEN_HEIGHT                   UIScreen.mainScreen.bounds.size.height

@interface ZHDeviceTool : NSObject

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

/**
 IP地址（WiFi）
 */
+ (NSString *)getIPAdress;

/**
 WiFi名称
 */
+ (NSString *)getWiFiName;

/**
 退出APP,可能造成数据丢失
 */
+ (void)exitApplication;

/**
 当前屏幕显示的viewcontroller
 */
+ (UIViewController *)currentVisiableViewController;

/**
 全屏截图
 */
+ (UIImage *)screenFullShot;

/**
 截图

 @param aView 要截图的视图
 */
+ (UIImage *)screenshotView:(UIView *)aView;

@end
