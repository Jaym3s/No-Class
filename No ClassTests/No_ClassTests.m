//
//  No_ClassTests.m
//  No ClassTests
//
//  Created by Jaymes Waters on 09/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "No_ClassTests.h"

@implementation No_ClassTests

- (void)setUp
{
  app_delegate = [[[No_ClassAppDelegate alloc] init] retain];
  STAssertNotNil(app_delegate, @"Could not create test app_delegate");
  view_controller = app_delegate.viewController;
  STAssertNotNil(view_controller, @"Could not create test view_controller");
  first_view = view_controller.view;
  STAssertNotNil(first_view, @"Could not create test first_view");
}

- (void)tearDown
{
 
  [app_delegate release];
  [super tearDown];
}

- (void)testFirstView
{
  STAssertTrue([[view_controller.display_field text] isEqualToString:@""], @"display_field text is not empty");
}

@end
