//
//  CHAppDelegate.h
//  CHCheckInApp
//
//  Created by hao chen on 6/30/14.
//  Copyright (c) 2014 hao chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CHLoginView.h"

@interface CHAppDelegate : UIResponder <UIApplicationDelegate,CHLoginViewDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) CHLoginView *loginview;
@end
