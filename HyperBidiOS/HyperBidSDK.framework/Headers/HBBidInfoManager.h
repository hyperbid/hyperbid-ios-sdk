//
//  HBBidInfoManager.h
//  HyperBidSDK
//
//  Created by Leo on 2020/4/28.
//  Copyright © 2020 HyperBid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HBBidInfo.h"
@class HBUnitGroupModel;
@class HBPlacementModel;
@interface HBBidInfoManager : NSObject
+(instancetype) sharedManager;
/**
 Used for renew bidinfo
 */
-(void) saveRequestID:(NSString*)requestID forPlacementID:(NSString*)placementID;
-(NSString*)requestForPlacementID:(NSString*)placementID;
-(void) renewBidInfoForPlacementID:(NSString*)placementID fromRequestID:(NSString*)requestID toRequestID:(NSString*)newRequestID unitGroups:(NSArray<HBUnitGroupModel*>*)unitGroups;

/**
 Used for send hb loss notification
 */
-(void) saveLoadMaxPrice:(NSString*)price forRequestID:(NSString*)requestID;
-(NSString*)loadMaxPriceForRequestID:(NSString*)requestID;
-(void)sendHBLossNotificationForPlacementID:(NSString*)placementID requestID:(NSString*)requestID unitGroups:(NSArray<HBUnitGroupModel*>*)unitGroups headerBiddingUnitGroups:(NSArray<HBUnitGroupModel*>*)headerBiddingUnitGroups;

-(void) saveBidInfo:(HBBidInfo*)bidInfo forRequestID:(NSString*)requestID;
-(void) removeDiskBidInfo:(HBBidInfo*)bidInfo;
-(void) invalidateBidInfoForPlacementID:(NSString*)placementID unitGroupModel:(HBUnitGroupModel*)unitGroupModel requestID:(NSString*)requestID;
-(HBBidInfo*) bidInfoForPlacementID:(NSString*)placementID unitGroupModel:(HBUnitGroupModel*)unitGroupModel requestID:(NSString*)requestID;
-(NSArray<HBUnitGroupModel*>*) unitGroupWithHistoryBidInfoAvailableForPlacementID:(NSString*)placementID unitGroups:(NSArray<HBUnitGroupModel*>*)unitGroupsToInspect s2sUnitGroups:(NSArray<HBUnitGroupModel*>*)s2sUnitGroupsToInspect newRequestID:(NSString*)newRequestID;
+(NSString *) priceForUnitGroup:(HBUnitGroupModel*)unitGroupModel placementID:(NSString*)placementID requestID:(NSString*)requestID;
-(BOOL) checkAdxBidInfoExpireForUnitGroupModel:(HBUnitGroupModel*)unitGroupModel ;
@end
