//
//  PICircularProgressView.h
//  PICircularProgressView
//
//  Created by Dominik Alexander on 11.06.13.
//  Copyright (c) 2013 Dominik Alexander. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol PICircularProgressViewDelegate<NSObject>
@optional
-(void)onRefresh:(CGFloat)progress;

@end

@interface PICircularProgressView : UIView

@property (nonatomic) CGFloat progressValue;

// Should be BOOLs, but iOS doesn't allow BOOL as UI_APPEARANCE_SELECTOR
@property (nonatomic) NSInteger showText UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSInteger roundedHead UI_APPEARANCE_SELECTOR;
@property (nonatomic) NSInteger showShadow UI_APPEARANCE_SELECTOR;

@property (nonatomic) CGFloat thicknessRatio UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) UIColor *innerBackgroundColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *outerBackgroundColor UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) UIColor *textColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIFont *font UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) UIColor *progressFillColor UI_APPEARANCE_SELECTOR;

@property (nonatomic, strong) UIColor *progressTopGradientColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *progressBottomGradientColor UI_APPEARANCE_SELECTOR;

@property (nonatomic,weak) id<PICircularProgressViewDelegate> delegate;

- (void)setProgressValue:(CGFloat)progressValue animated:(BOOL)animated;
@end
