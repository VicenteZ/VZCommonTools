//
//  NSString+Regex.h
//  VZCommonTools
//
//  Created by 赵欣 on 15/4/26.
//  Copyright (c) 2015年 vicentez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Regex)

/** 将GBK编码的二进制数据转换成字符串 */
+ (NSString *)UTF8StringWithHZGB2312Data:(NSData *)data;

/** 查找并返回第一个匹配的文本内容 */
- (NSString *)firstMatchWithPattern:(NSString *)pattern;

/** 查找多个匹配方案结果 */
- (NSArray *)matchesWithPattern:(NSString *)pattern;

/** 查找多个匹配方案结果，并根据键值数组生成对应的字典数组 */
- (NSArray *)matchesWithPattern:(NSString *)pattern keys:(NSArray *)keys;

@end
