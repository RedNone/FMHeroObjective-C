#import <Foundation/Foundation.h>
#import "AVFoundation/AVFoundation.h"

@interface NVAudioController : NSObject

@property(nonatomic,retain) AVPlayer *player;
@property(nonatomic,assign) int selectRadioWithIndex;

+ (NVAudioController *)sharedManager;
- (void)playMusicWithCurrentRadioId:(int)radioId;

@end
