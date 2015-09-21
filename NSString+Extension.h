//
//  NSString+Extension.h
//  CircleExpress
//
//  Created by litt1e-p on 15/8/25.
//  Copyright (c) 2015年 litt1e-p. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Extension)

+ (NSString *)md5:(NSString *)string;
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;
- (CGSize)sizeWithfont:(UIFont*)font MaxX:(CGFloat)maxx;
- (CGSize)sizeWithfont:(UIFont*)font;

@end
