#import <Foundation/Foundation.h>

@interface NVDataLoader : NSObject

@property(nonatomic,retain) NSMutableArray *radioData;

+ (NVDataLoader *)sharedManager;
- (void)loadDataWithCompletionBlock:(void (^)(void))completionBlock;

@end
