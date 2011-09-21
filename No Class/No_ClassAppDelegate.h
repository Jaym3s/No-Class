//
//  No_ClassAppDelegate.h
//  No Class
//
//  Created by Jaymes Waters on 09/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class No_ClassViewController;

@interface No_ClassAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet No_ClassViewController *viewController;

@end
