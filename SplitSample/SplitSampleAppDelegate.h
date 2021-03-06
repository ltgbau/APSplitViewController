//
//  SplitSampleAppDelegate.h
//  SplitSample
//
//  Created by slatvick on 5/1/11.
//  Copyright 2011 Alterplay. All rights reserved.
//

#import <UIKit/UIKit.h>

@class APCustomTabBarController;

@interface SplitSampleAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet APCustomTabBarController *tabBarController;

@end
