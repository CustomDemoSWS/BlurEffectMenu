//
//  BlurEffectMenu.h
//  joinup_iphone
//
//  Created by shen_gh on 16/2/1.
//  Copyright © 2016年 com.joinup. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BlurEffectMenuViewController,BlurEffectMenuItem;

@protocol BlurEffectMenuDelegate <NSObject>

//点击背景dismiss
- (void)blurEffectMenuDidTapOnBackground:(BlurEffectMenuViewController *)menu;
//点击item
- (void)blurEffectMenu:(BlurEffectMenuViewController *)menu didTapOnItem:(BlurEffectMenuItem *)item;

@end

@interface BlurEffectMenuItem : NSObject

@property (nonatomic,copy) NSString *title;//标题
@property (nonatomic,strong) UIImage *icon;//图标
@end

@interface BlurEffectMenuViewController : UIViewController

@property (nonatomic,assign) id<BlurEffectMenuDelegate>delegate;
@property (nonatomic,copy) NSArray *menuItemArr;
//初始化
- (instancetype)initWithMenus:(NSArray *)menus;

@end
