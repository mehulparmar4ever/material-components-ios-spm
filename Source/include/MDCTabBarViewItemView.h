// Copyright 2019-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

#import "MDCTabBarViewCustomViewable.h"
#import "MDCTabBarViewItemViewDelegate.h"

#import "MaterialRipple.h"

/** A basic view that displays a title and image for a tab bar item within MDCTabBarView. */
@interface MDCTabBarViewItemView : UIView <MDCTabBarViewCustomViewable>

@property(nonatomic, strong, nullable) id<MDCTabBarViewItemViewDelegate> itemViewDelegate;

/** The image to display when unselected. */
@property(nonatomic, strong, nullable) UIImage *image;

/** The image to display when selected. */
@property(nonatomic, strong, nullable) UIImage *selectedImage;

/** The image view to display the icon. */
@property(nonatomic, strong, nonnull) UIImageView *iconImageView;

/** The label to display the title. */
@property(nonatomic, strong, nonnull) UILabel *titleLabel;

/** The ripple contronller to display the ripple touch effect. */
@property(nonatomic, strong, nonnull) MDCRippleTouchController *rippleTouchController;

#pragma mark - UILargeContentViewerItem

/**
 The title to display in the large content viewer. If set to nil, this property will return
 @c title.
 */
@property(nonatomic, copy, nullable) NSString *largeContentTitle NS_AVAILABLE_IOS(13_0);

/**
 The image to display in the large content viwer.  If set to nil, the property will return
 @c image . If set to nil (or not set) @c scalesLargeContentImage will return YES otherwise NO.
 */
@property(nonatomic, nullable) UIImage *largeContentImage NS_AVAILABLE_IOS(13_0);

@end
