//
//  Timer.h
//  The-Pomodoro-iOS8
//
//  Created by Skyler Clark on 5/11/15.
//  Copyright (c) 2015 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Timer : NSObject
@property (nonatomic, assign) NSInteger minutes;
@property (nonatomic, assign) NSInteger seconds;


+ (instancetype)sharedInstance;


@end