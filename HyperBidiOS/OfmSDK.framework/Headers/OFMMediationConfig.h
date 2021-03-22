//
//  OFMMediation.h
//  OfmSDK
//
//  Created by Leo on 12/1/2021.
//  Copyright © 2021 HyperBid. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface OFMMediationConfig: NSObject

@property(nonatomic, readwrite) NSInteger mediationSystem;
@property(nonatomic, readwrite) NSInteger mediationTrafficId;
@property(nonatomic, readwrite) NSDictionary *mediationAppInfo;
@property(nonatomic, readwrite) BOOL isDefault;

@end
