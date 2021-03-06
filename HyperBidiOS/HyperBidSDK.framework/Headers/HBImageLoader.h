//
//  HBImageLoader.h
//  HyperBidSDK
//
//  Created by Leo on 27/04/2018.
//  Copyright © 2018 Leo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HBImageLoader : NSObject
+(instancetype)shareLoader;
/**
 * The completion callback might not be invoked on the same thread as the one on which this method has been called.
 * Only HTTP-GET is supported currently.
 */
-(void) loadImageWithURL:(NSURL*)URL completion:(void(^)(UIImage *image, NSError *error))completion;
@end
