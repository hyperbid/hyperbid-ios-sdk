//
//  OFMAdLoadingDelegate.h
//  OfmSDK
//
//  Created by Leo on 12/1/2021.
//  Copyright © 2021 HyperBid. All rights reserved.
//

#ifndef OFMAdLoadingDelegate_h
#define OFMAdLoadingDelegate_h
@protocol OFMAdLoadingDelegate<NSObject>
-(void) didFinishLoadingOFMADWithPlacementID:(NSString *)placementID;
-(void) didFailToLoadOFMADWithPlacementID:(NSString*)placementID error:(NSError*)error;
@end
#endif /* HBAdLoadingDelegate_h */
