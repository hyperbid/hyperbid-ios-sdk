//
//  HBBidInfo.h
//  HyperBidSDK
//
//  Created by Leo on 2020/4/27.
//  Copyright © 2020 HyperBid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HBModel.h"

@interface HBBidInfo : HBModel
@property(nonatomic, readonly) NSDate *expireDate;
@property(nonatomic, readonly) NSDictionary *offerDataDict;
@property(nonatomic, readonly) NSString *bidId;
@property(nonatomic, readonly) NSString *price;
@property(nonatomic, readonly) id customObject;
@property(nonatomic, readonly) NSString *placementID;
@property(nonatomic, readonly) NSString *unitGroupUnitID;
@property(nonatomic, readonly) NSInteger networkFirmID;
@property(nonatomic, readonly) NSString *lURL;
@property(nonatomic, readonly) NSString *nURL;
@property(nonatomic, readonly, getter=isValid) BOOL valid;
@property(nonatomic, readonly, getter=isExpired) BOOL expired;
@property(nonatomic, readonly, getter=isSendNotif) BOOL sendNotif;
+(instancetype) bidInfoWithPlacementID:(NSString*)placementID unitGroupUnitID:(NSString*)unitGroupUnitID token:(NSString*)token price:(NSString*)price expirationInterval:(NSTimeInterval)expirationInterval customObject:(id)customObject;
-(instancetype) initWithDictionary:(NSDictionary*)dictionary placementID:(NSString*)placementID unitGroupUnitID:(NSString*)unitGroupUnitID expirationInterval:(NSTimeInterval)expirationInterval;
-(void) invalidate;
-(void) hasBeenSendNotif;
-(NSDictionary *) serializationToDictionary;
@end
