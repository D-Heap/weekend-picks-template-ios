//
//  MBWPDetailViewController.h
//  Weekend Picks
//
//  Copyright (c) 2014 Mapbox, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MBWPDetailViewController : UIViewController <UIWebViewDelegate>

@property (strong, nonatomic) NSString *detailTitle;
@property (strong, nonatomic) NSString *detailDescription;

@end