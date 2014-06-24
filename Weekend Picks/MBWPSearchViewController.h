//
//  MTSearchViewController.h
//  Transit PDX
//
//  Copyright (c) 2014 Mapbox, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MBWPSearchViewController;

@protocol MBWPSearchDelegate <NSObject>

- (void)searchViewController:(MBWPSearchViewController *)controller didApplyFilterTypes:(NSArray *)filterTypes;

@end

#pragma mark -

@interface MBWPSearchViewController : UITableViewController

@property (weak) id <MBWPSearchDelegate>delegate;
@property (strong, nonatomic) NSArray *filterTypes;

@end