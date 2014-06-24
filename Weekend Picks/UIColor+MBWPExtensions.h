//
//  UIColor_MBWPExtensions.h
//  Weekend Picks
//
//  Copyright (c) 2014 Mapbox, Inc. All rights reserved.
//

// Largely based on Erica Sadun's uicolor-utilities
// https://github.com/erica/uicolor-utilities

#import <UIKit/UIKit.h>

@interface UIColor (MBWPExtensions)

+ (UIColor *)colorWithHexString:(NSString *)hexString;
- (NSString *)hexStringFromColor;

@end