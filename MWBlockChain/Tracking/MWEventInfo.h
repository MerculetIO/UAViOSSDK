//
//  MWEventInfo.h
//  MagicWindowSampleApp
//
//  Created by 刘家飞 on 14/11/9.
//  Copyright (c) 2014年 MagicWindow. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "MagicWindowDefine.h"
//#import "MWPostServiceKey.h"

@interface MWEventInfo : NSObject

@property (nonatomic, strong) NSString *action;         //action
@property (nonatomic, strong) NSDictionary *action_params; // action_params

- (NSMutableDictionary *)getEventDic;

@end
