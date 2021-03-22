//
//  OFMInterstitialAdManager.h
//  OfmSDK
//
//  Created by HyperBid on 1/16/21.
//  Copyright © 2021 HyperBid. All rights reserved.
//

#import "OFMAdManager.h"
#import "OFMInterstitialDelegate.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kOFMInterstitialExtraAdSizeKey;//Supported by TT interstitial, defaults to ScreenWidth * ScreenHeight

@interface OFMInterstitialAdManager : OFMAdManager
-(void) showInterstitialAd:(NSString*)placementID inViewController:(UIViewController*)viewController delegate:(id<OFMInterstitialDelegate>)delegate;
-(void) showInterstitialAd:(NSString*)placementID scene:(NSString*)scene inViewController:(UIViewController*)viewController delegate:(id<OFMInterstitialDelegate>)delegate;
@end

NS_ASSUME_NONNULL_END
