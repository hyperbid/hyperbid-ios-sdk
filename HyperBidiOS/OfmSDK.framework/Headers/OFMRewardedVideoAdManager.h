//
//  OFMRewardedVideoAdManager.h
//  OfmSDK
//
//  Created by Jean on 2021/1/16.
//  Copyright © 2021 HyperBid. All rights reserved.
//

#import "OFMAdManager.h"
#import "OFMRewardedVideoDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface OFMRewardedVideoAdManager : OFMAdManager

- (void)showRewardedVideoAd:(NSString *)placementID inViewController:(UIViewController *)viewController delegate:(id<OFMRewardedVideoDelegate>)delegate;
- (void)showRewardedVideoAd:(NSString *)placementID scene:(NSString * _Nullable)scene inViewController:(UIViewController *)viewController delegate:(id<OFMRewardedVideoDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
