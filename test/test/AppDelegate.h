//
//  AppDelegate.h
//  test
//
//  Created by 崔一鸣 on 2019/1/8.
//  Copyright © 2019年 崔一鸣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

