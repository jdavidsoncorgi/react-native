/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <React/RCTBridgeModule.h>
#import <React/RCTFrameUpdate.h>
#import <React/RCTInvalidating.h>

@interface RCTTiming : NSObject <RCTBridgeModule, RCTInvalidating, RCTFrameUpdateObserver>

@end
