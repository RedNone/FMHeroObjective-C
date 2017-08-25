//
//  NVDataLoader.h
//  NVFmHero
//
//  Created by mac-228 on 24.08.17.
//  Copyright © 2017 mac-228. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NVDataLoader : NSObject

@property(nonatomic,retain) NSMutableArray *radioData;
@property(nonatomic,assign) int selectRadioWithIndex;

+ (NVDataLoader *)sharedManager;
- (void)loadDataWithCompletionBlock:(void (^)(void))completionBlock;

@end
