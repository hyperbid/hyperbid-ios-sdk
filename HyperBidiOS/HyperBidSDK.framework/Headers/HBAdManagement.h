//
//  HBAdManagement.h
//  HyperBidSDK
//
//  Created by Leo on 04/07/2018.
//  Copyright © 2018 Leo. All rights reserved.
//

#ifndef HBAdManagement_h
#define HBAdManagement_h
@protocol HBAd;
@class HBPlacementModel;
@class HBUnitGroupModel;
@class HBWaterfall;
extern NSString *const kAdAssetsCustomEventKey;
extern NSString *const kAdAssetsCustomObjectKey;
extern NSString *const kAdAssetsUnitIDKey;
extern NSString *const kAdAssetsPriceKey;
extern NSString *const kAdAssetsBidIDKey;

typedef NS_ENUM(NSInteger, HBAdSourceStatus) {
    HBAdSourceStatusInvalid = 0,//pacing & cap_by_hour/cap_by_day
    HBAdSourceStatusNoOffer = 1,
    HBAdSourceStatusOfferNotReady = 2,
    HBAdSourceStatusOfferExpired = 3,
    HBAdSourceStatusReady = 4
};

@protocol HBAdManagement<NSObject>
-(void) addAdWithADAssets:(NSDictionary*)assets withPlacementSetting:(HBPlacementModel*)placementModel unitGroup:(HBUnitGroupModel*)unitGroup finalWaterfall:(HBWaterfall*)finalWaterfall requestID:(NSString*)requestID;
-(BOOL) inspectAdSourceStatusWithPlacementModel:(HBPlacementModel*)placementModel unitGroup:(HBUnitGroupModel*)unitGroup finalWaterfall:(HBWaterfall*)finalWaterfall requestID:(NSString*)requestID extraInfo:(NSArray<NSDictionary*>*__autoreleasing*)extraInfo;
-(void) invalidateStatusForAd:(id<HBAd>)ad;
-(BOOL) adSourceStatusInPlacementModel:(HBPlacementModel*)placementModel unitGroup:(HBUnitGroupModel*)unitGroup;

/**
 
 */
-(NSArray<id<HBAd>>*) adsWithPlacementID:(NSString*)placementID;

/**
 * Clear all cached offer
 */
-(void) clearCache;

/*
 *Return the following structure, indicating the status of the ad-sources within the placement:
 {
     @0:@(HBAdSourceStatusInvalid),
     @1:@(HBAdSourceStatusOfferNotReady),
     @2:@(HBAdSourceStatusOfferExpired),
     @3:@(HBAdSourceStatusReady)
 }
 */
-(NSDictionary<NSNumber*, NSNumber*>*)placementStatusWithPlacementID:(NSString*)placementID;
-(void) clearCahceForPlacementID:(NSString*)placementID;
-(void) removeAdForPlacementID:(NSString*)placementID unitGroupID:(NSString*)unitGroupID;
-(NSInteger) highestPriorityOfShownAdInPlacementID:(NSString*)placementID requestID:(NSString*)requestID;
@end

#endif /* HBAdManagement_h */
