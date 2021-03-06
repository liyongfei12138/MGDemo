//
//  NSObject+HUD.h
//  MGMiaoBo
//
//  Created by ming on 16/9/10.
//  Copyright © 2016年 ming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (HUD)
/**
 *  弹框提示
 *
 *  @param info 要提醒的内容
 */
- (void)showInfo:(NSString *)info;

#pragma mark -
/** 打印系统所有已注册的字体名称 */
void enumerateFonts();

/** 手动更改iOS状态栏的颜色 */
- (void)setStatusBarBackgroundColor:(UIColor *)color;

/** iOS在当前屏幕获取第一响应 */
- (id)getFirstResponder;

/**
 RunTime交换方法

 @param cls 当前类
 @param originalSel 原方法
 @param swizzledSel 要交换的方法
 */
+ (void)mg_SwitchMethod:(Class)cls originalSelector: (SEL)originalSel swizzledSelector:(SEL)swizzledSel;

void Swizzle(Class c, SEL orig, SEL new);
@end
