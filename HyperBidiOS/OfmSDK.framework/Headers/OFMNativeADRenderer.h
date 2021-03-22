//
//  OFMNativeADRenderer.h
//  OfmSDK
//
//  Created by Leo on 18/1/2021.
//  Copyright © 2021 HyperBid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HyperBidNative/HyperBidNative.h>
#import "OFMPlacementModel.h"
#import "OFMNativeAdConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface OFMNativeADRenderer : NSObject

@property(nonatomic, readwrite) OFMNativeAdConfiguration *configuration;
@property(nonatomic, readwrite) HBNativeADView *nativeAdView;
@property(nonatomic, readonly) NSDictionary *assets;

- (instancetype)initWithOFMConfiguration:(OFMNativeAdConfiguration *)configuration placementModel:(OFMPlacementModel *)placementModel assets:(NSDictionary*)assets;
/**
 Might return nil.
 */
-(__kindof UIView*)createMediaView;

/**
 Render the assets onto the the associated AD view. Adopter implements this method in a network-specific way.
 */
-(void) renderOfferWithNativeAdView:(HBNativeADView*) nativeAdView;

@end

NS_ASSUME_NONNULL_END
