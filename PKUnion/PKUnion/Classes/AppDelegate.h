//
//  AppDelegate.h
//  KYCircleMenuDemo
//
//  Created by Kjuly on 7/18/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

// Button Size
#define kKYButtonInMiniSize   16.f
#define kKYButtonInSmallSize  32.f
#define kKYButtonInNormalSize 64.f

#pragma mark - KYCircleMenu Configuration

// Number of buttons around the circle menu
#define kKYCCircleMenuButtonsCount 6
// Circle Menu
// Basic constants
#define kKYCircleMenuSize             280.f
#define kKYCircleMenuButtonSize       kKYButtonInNormalSize
#define kKYCircleMenuCenterButtonSize kKYButtonInNormalSize
// Image
#define kKYICircleMenuCenterButton           @"KYICircleMenuCenterButton.png"
#define kKYICircleMenuCenterButtonBackground @"KYICircleMenuCenterButtonBackground.png"
#define kKYICircleMenuButtonImageNameFormat  @"KYICircleMenuButton%.2d.png" // %.2d: 1 - 6

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow * window;

@end
