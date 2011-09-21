//
//  No_ClassTests.h
//  No ClassTests
//
//  Created by Jaymes Waters on 09/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>
#import "No_ClassAppDelegate.h"
#import "No_ClassViewController.h"

@interface No_ClassTests : SenTestCase {

@private
  No_ClassAppDelegate *app_delegate;
  No_ClassViewController *view_controller;
  UIView *first_view;
}

@end
