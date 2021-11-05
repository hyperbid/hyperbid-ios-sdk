//
//  HBMobrainBaseManager.h
//  HyperBidMobrainAdapter
//
//  Created by HyperBid on 2/1/21.
//  Copyright © 2021 HyperBid. All rights reserved.
//

#import <HyperBidSDK/HyperBidSDK.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Mobrain
extern NSString *const kHBSplashExtraMobrainAdnTypeKey;
extern NSString *const kHBSplashExtraMobrainAppKeyKey;
extern NSString *const kHBSplashExtraMobrainAppIDKey;
extern NSString *const kHBSplashExtraMobrainRIDKey;
/**
 optional
 Set whether to mute the video，YES = mute，NO = unMute
 PS:
 1、RV：only  GDT，Klevin，MTG support setting mute
 2、IV：only  GDT support setting mute
 3、Native video：only  GDT，Admob，Baidu，MTG support setting mute
 */
extern NSString *const kHBExtraMobrainMutedKey;

typedef NS_ENUM(NSUInteger, HBBUAdSDKTerritory) {
    BUAdSDKTerritory_CN = 1,
    BUAdSDKTerritory_NO_CN,
};

@interface HBMobrainBaseManager : HBNetworkBaseManager

@end

@protocol HBABUPanglePersonaliseConfigAdapter <NSObject>
+ (void)configAdapterWithBlock:(void(^)(void))block;
@end

@protocol HBBUAdSDKConfiguration <NSObject>
+ (instancetype)configuration;
@property (nonatomic, assign) HBBUAdSDKTerritory territory;
@property (nonatomic, strong) NSNumber *debugLog;

@end

NS_ASSUME_NONNULL_END
