//
//  VZNetworkInspector.h
//  VZInspector
//
//  Created by moxin.xt on 14-9-23.
//  Copyright (c) 2014年 VizLabe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VZNetworkInspector : NSObject

+ (instancetype)sharedInstance;

@property(nonatomic,assign) size_t totalResponseBytes;
@property(nonatomic,assign) NSInteger totalNetworkCount;

@end