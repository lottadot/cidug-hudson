//
//  iPhoneAppViewController.h
//  iPhoneApp
//
//  Created by Shane Zatezalo on 9/27/10.
//  Copyright 2010 Personal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iPhoneAppViewController : UIViewController {
	UILabel *helloLabel;
}

@property (nonatomic, retain) IBOutlet UILabel *helloLabel;

@end

