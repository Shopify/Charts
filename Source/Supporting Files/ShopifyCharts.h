//
//  ShopifyCharts.h
//  ShopifyCharts
//
//  Copyright 2015 Daniel Cohen Gindi & Philipp Jahoda
//  A port of MPAndroidChart for iOS
//  Licensed under Apache License 2.0
//
//  https://github.com/danielgindi/Charts
//

#include <TargetConditionals.h>

#if TARGET_OS_IPHONE || TARGET_OS_TV || TARGET_IPHONE_SIMULATOR
	#import <UIKit/UIKit.h>
#else
    #import <Cocoa/Cocoa.h>
#endif

//! Project version number for ShopifyCharts.
FOUNDATION_EXPORT double ShopifyChartsVersionNumber;

//! Project version string for ShopifyCharts.
FOUNDATION_EXPORT const unsigned char ShopifyChartsVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ShopifyCharts/PublicHeader.h>


