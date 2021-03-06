//
//  TBAppDelegate.h
//  DriveWeatherHelper
//
//  Created by xulin on 01/11/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MobClick.h"

#define kDBFilename @"dwh.sqlite3"

@class BMKMapManager;

@interface TBAppDelegate : UIResponder <UIApplicationDelegate, MobClickDelegate>
{
    UINavigationController *navController;
    BMKMapManager *mapManager;
}

@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (strong, nonatomic) IBOutlet UINavigationController *navController;
@property (strong, nonatomic) BMKMapManager *mapManager;

- (NSString *)dataFilePath;

@end
