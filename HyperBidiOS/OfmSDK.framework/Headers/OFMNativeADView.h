//
//  OFMNativeADView.h
//  OfmSDK
//
//  Created by HyperBid on 1/16/21.
//  Copyright © 2021 HyperBid. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <HyperBidNative/HyperBidNative.h>
#import "OFMNativeAdConfiguration.h"
#import "OFMNativeADRenderer.h"
#import "OFMNativeAdDelegate.h"
#import "OFMPlacementModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface OFMNativeADView : HBNativeADView

@property(nonatomic, readonly) OFMNativeAdConfiguration *configuration;
@property(nonatomic, readonly) OFMNativeADRenderer *renderer;
@property(nonatomic, readonly) NSString *placementID;
- (instancetype)initWithOFMConfiguration:(OFMNativeAdConfiguration *)configuration placementModel:(OFMPlacementModel *)placementModel renderer:(OFMNativeADRenderer *) renderer;

@end

NS_ASSUME_NONNULL_END
