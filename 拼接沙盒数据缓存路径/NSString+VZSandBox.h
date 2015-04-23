//
//  NSString+VZSandBox.h
//  VZCommonTools
//
//  Created by 赵欣 on 15/4/24.
//  Copyright (c) 2015年 vicentez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (VZSandBox)

/**
 *  追加文档目录
 */
- (NSString *)appendDocumentDir;

/**
 *  追加缓存目录
 */
- (NSString *)appendCacheDir;

/**
 *  追加临时目录
 */
- (NSString *)appendTempDir;

@end
