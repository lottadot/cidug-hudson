//
//  iPhoneAppAppDelegate.h
//  iPhoneApp
//
//  Created by Shane Zatezalo on 9/27/10.
//  Copyright 2010 Personal. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iPhoneAppViewController;

@interface iPhoneAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    iPhoneAppViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet iPhoneAppViewController *viewController;

@end

