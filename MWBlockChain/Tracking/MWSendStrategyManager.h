//
//  MWSendStrategyManager.h
//  MagicWindowSampleApp
//
//  Created by 刘家飞 on 14/12/11.
//  Copyright (c) 2014年 MagicWindow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MWSendStrategyManager : NSObject

+ (id)sharedInstance;
- (void)startSendStrategy;
- (void)stopTimer;

@end
