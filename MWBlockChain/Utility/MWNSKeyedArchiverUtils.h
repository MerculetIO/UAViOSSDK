//
//  MWNSKeyedArchiverUtils.h
//  MagicWindowSampleApp
//
//  Created by JackLiu on 14-7-23.
//  Copyright (c) 2014年 MagicWindow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MWNSKeyedArchiverUtils : NSObject

+ (void)archiveObject:(id)object toPath:(NSString *)path;
+ (id)unarchiveObjectWithPath:(NSString *)path;
+ (void)clearArchive:(NSString *)path;

@end
