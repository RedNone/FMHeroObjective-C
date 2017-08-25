#import <Foundation/Foundation.h>

@interface NVDataLoader : NSObject

@property(nonatomic,retain) NSMutableArray *radioData;
@property(nonatomic,assign) int selectRadioWithIndex;

+ (NVDataLoader *)sharedManager;
- (void)loadDataWithCompletionBlock:(void (^)(void))completionBlock;

@end
