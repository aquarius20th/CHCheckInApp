//
//  CHViewController.m
//  CHCheckInApp
//
//  Created by hao chen on 6/30/14.
//  Copyright (c) 2014 hao chen. All rights reserved.
//

#import "CHViewController.h"


@interface CHViewController ()

@end


int iFirst = 0;
@implementation CHViewController

- (void)viewDidLoad
{
    
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewDidAppear:(BOOL)animated
{
    /*if(iFirst==0)
    {
        iFirst =1;
        CHLoginView* loginview = [[CHLoginView alloc]init];
        loginview.delegate = self;
        [self presentViewController:loginview animated:YES completion:NULL];
    }*/
}
- (void)logInViewController:(CHLoginView*)loginControll
{
    [self dismissViewControllerAnimated:YES completion:NULL];
}
@end
