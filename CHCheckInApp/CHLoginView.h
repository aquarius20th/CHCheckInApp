//
//  CHLoginView.h
//  CHCheckInApp
//
//  Created by hao chen on 7/1/14.
//  Copyright (c) 2014 hao chen. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CHLoginViewDelegate;

@interface CHLoginView : UIViewController

@property  (nonatomic,assign)id<CHLoginViewDelegate> delegate;

- (IBAction)Login:(id)sender;

@end

@protocol CHLoginViewDelegate <NSObject>

@optional
- (void)logInViewController:(CHLoginView*)loginControll;

@end
