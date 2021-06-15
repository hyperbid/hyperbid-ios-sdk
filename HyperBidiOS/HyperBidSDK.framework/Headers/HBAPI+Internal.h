//
//  HBAPI+Internal.h
//  HyperBidSDK
//
//  Created by Leo on 08/05/2018.
//  Copyright © 2018 Leo. All rights reserved.
//

#ifndef HBAPI_Internal_h
#define HBAPI_Internal_h
#import "HBAPI.h"
extern NSString *const kNativeADAssetsAdvertiserKey;
extern NSString *const kNativeADAssetsMainTextKey;
extern NSString *const kNativeADAssetsMainTitleKey;
extern NSString *const kNativeADAssetsMainImageKey;
extern NSString *const kNativeADAssetsIconImageKey;
extern NSString *const kNativeADAssetsLogoImageKey;
extern NSString *const kNativeADAssetsCTATextKey;
extern NSString *const kNativeADAssetsRatingKey;
extern NSString *const kNativeADAssetsContainsVideoFlag;
extern NSString *const kNativeADAssetsUnitIDKey;
extern NSString *const kNativeADAssetsIconURLKey;
extern NSString *const kNativeADAssetsImageURLKey;
extern NSString *const kNativeADAssetsLogoURLKey;
extern NSString *const kNativeADAssetsSponsoredImageKey;

extern NSString *const kAdAssetsCustomObjectKey;

extern NSString *const kHBADLoadingStartLoadNotification;
extern NSString *const kHBADLoadingOfferSuccessfullyLoadedNotification;
extern NSString *const kHBADLoadingFailedToLoadNotification;
extern NSString *const kHBADLoadingNotificationUserInfoRequestIDKey;
extern NSString *const kHBADLoadingNotificationUserInfoPlacementKey;//Not used
extern NSString *const kHBADLoadingNotificationUserInfoUnitGroupKey;//Not used
extern NSString *const kHBADLoadingNotificationUserInfoErrorKey;
extern NSString *const kHBADLoadingNotificationUserInfoExtraKey;

/**
 Adopters are expected to implement logic for network offers, for which storage mechanisms must be devise.
 */
@protocol HBNativeAdapter<NSObject>
/**
 The class of the renderer used to render the AD view. This method is a class-method because by the time this information is needed the adapter instance will have been released.
 */
+(Class) rendererClass;
/**
 Adopter should implement this method for the initialization of a adapter instance, which will store the passed info for further use.
 
 @param info contains the info specific to the network. Keys used to retrive the value in the info dictionary are pre-defined by the SDK
 */
-(instancetype) initWithNetworkCustomInfo:(NSDictionary*)serverInfo localInfo:(NSDictionary*)localInfo;

/**
 Adopter should implement this method to load network offers.
 
 @param info contains the info needed to load offers.
 @param completion might need to be stored and invoked after ad's succeffully loaded.
 Parameters passed to the completion block include a dictionary and an error objects. The error object encapsulates the error info if loading request failed somehow; the dictionary contains all publicly accessible assets (such as title and text) for the native ad, which should be stored using the keys predefined by the SDK.
 */
-(void) loadADWithInfo:(NSDictionary*)serverInfo localInfo:(NSDictionary*)localInfo completion:(void(^)(NSArray<NSDictionary*>* assets, NSError *error))completion;
@property (nonatomic,copy) void (^metaDataDidLoadedBlock)(void);
@end

@interface HBAPI(Internal)
+(BOOL)logEnabled;
+(BOOL)adLogoVisible;
+(HBNetworkTerritory)networkTerritory;
+(BOOL)isOfm;
-(void) setVersion:(NSString*)version forNetwork:(NSString*)network;
-(NSDictionary*)networkVersions;
-(NSString*)versionForNetworkFirmID:(NSInteger)networkFirmID;
-(BOOL) initFlagForNetwork:(NSString*)networkName;
-(void) setInitFlagForNetwork:(NSString*)networkName;
-(void) inspectInitFlagForNetwork:(NSString*)networkName usingBlock:(NSInteger(^)(NSInteger currentValue))block;
-(void) setInitFlag:(NSInteger)flag forNetwork:(NSString*)networkName;
-(BOOL) initWithAppID:(NSString*)appID appKey:(NSString*)appKey error:(NSError**)error isOfm:(BOOL) isOfm shouldUpdateOfm:(BOOL)shouldUpdateOfm completion:(void (^)(NSDictionary *, NSError *)) completion;
-(void) applyAppSettingWithCompletion:(void (^)(NSDictionary * setting, NSError * error)) completion shouldUpdateOfm:(BOOL)shouldUpdateOfm;
@property(nonatomic, readonly) NSString *userAgent;
@end

#endif /* HBAPI_Internal_h */
