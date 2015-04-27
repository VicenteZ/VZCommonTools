#import <Foundation/Foundation.h>

@interface NSObject (Extension)

/**
 *  这里保存的是需要忽略的属性数组
 */
- (NSArray *)ignoredNames;

/**
 *  对属性进行归档
 */
- (void)decode:(NSCoder *)decoder;

/**
 *  对属性进行解挡
 */
- (void)encode:(NSCoder *)encoder;

@end
