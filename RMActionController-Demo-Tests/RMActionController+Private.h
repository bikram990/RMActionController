//
//  RMActionController+Private.h
//  RMActionController-Demo
//
//  Created by Roland Moers on 19.11.16.
//  Copyright © 2016 Roland Moers. All rights reserved.
//

#import <RMActionController/RMActionController.h>

@interface RMActionController (Private)

@property (nonatomic, strong) NSMutableArray *additionalActions;
@property (nonatomic, strong) NSMutableArray *doneActions;
@property (nonatomic, strong) NSMutableArray *cancelActions;

@property (nonatomic, strong) UIView *backgroundView;
@property (nonatomic, assign) BOOL hasBeenDismissed;

@property (nonatomic, weak) NSLayoutConstraint *yConstraint;

- (void)setupTopContainersTopMarginConstraint;

- (UIBlurEffectStyle)containerBlurEffectStyleForCurrentStyle;
- (UIBlurEffectStyle)backgroundBlurEffectStyleForCurrentStyle;

- (void)backgroundViewTapped:(UIGestureRecognizer *)sender;

@end
