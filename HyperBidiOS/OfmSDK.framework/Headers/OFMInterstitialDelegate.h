//
//  OFMInterstitialDelegate.h
//  OfmSDK
//
//  Created by Leo on 12/1/2021.
//  Copyright © 2021 HyperBid. All rights reserved.
//

#ifndef HBInterstitialDelegate_h
#define HBInterstitialDelegate_h
#import "OFMAdLoadingDelegate.h"

@protocol OFMInterstitialDelegate<OFMAdLoadingDelegate>

-(void) interstitialDidShowForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
-(void) interstitialFailedToShowForPlacementID:(NSString*)placementID error:(NSError*)error extra:(NSDictionary*)extra;
-(void) interstitialDidStartPlayingVideoForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
-(void) interstitialDidEndPlayingVideoForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
-(void) interstitialDidFailToPlayVideoForPlacementID:(NSString*)placementID error:(NSError*)error extra:(NSDictionary*)extra;
-(void) interstitialDidCloseForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
-(void) interstitialDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
-(void) interstitialDeepLinkOrJumpForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra result:(BOOL)success;

@end

#endif /* OFMInterstitialDelegate_h */
