//
//  MBWPAppDelegate.m
//  Weekend Picks
//
//  Copyright (c) 2014 Mapbox, Inc. All rights reserved.
//

#import "MBWPAppDelegate.h"

#import "MBWPViewController.h"

@implementation MBWPAppDelegate

@synthesize window;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    
    self.window.rootViewController = [[UINavigationController alloc] initWithRootViewController:[[MBWPViewController alloc] initWithNibName:nil bundle:nil]];
    
    [self.window makeKeyAndVisible];
    
    return YES;
}

@end