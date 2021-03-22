//
//  OFMSplashDelegate.h
//  OfmSDK
//
//  Created by Leo on 12/1/2021.
//  Copyright © 2021 HyperBid. All rights reserved.
//

#ifndef OFMSplashDelegate_h
#define OFMSplashDelegate_h
#import "OFMAdLoadingDelegate.h"

@protocol OFMSplashDelegate<OFMAdLoadingDelegate>

-(void)splashDidShowForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
-(void)splashDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
-(void)splashDidCloseForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
-(void)splashDeepLinkOrJumpForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra result:(BOOL)success;

-(void)splashZoomOutViewDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
-(void)splashZoomOutViewDidCloseForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
@end
#endif /* HBSplashDelegate_h */
