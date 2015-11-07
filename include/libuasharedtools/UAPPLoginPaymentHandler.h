//
//  UAPPLoginHandler.h
//  PaymentLibrary
//
//  Created by Enea Gjoka on 11/6/15.
//  Copyright © 2015 UnlimApps Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol UAPPLoginPaymentHandlerDelegate <NSObject>
@required
- (void)userToggledLoginStatus;
- (void)userCompletedAdPurchase;
@end

@interface UAPPLoginPaymentHandler : NSObject
- (instancetype)initWithTweakName:(NSString *)tweakName
                       tweakPrice:(NSString *)tweakPrice
                       paypalKeys:(NSDictionary *)paypalKeys
                         delegate:(id <UAPPLoginPaymentHandlerDelegate>)delegate;
- (void)loginAndPurchaseAdRemoval;
@end
