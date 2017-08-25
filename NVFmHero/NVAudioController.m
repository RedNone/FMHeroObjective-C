#import "NVAudioController.h"
#import "NVRadioDataModel.h"
#import "NVConsts.h"
#import "NVDataLoader.h"


@interface NVAudioController ()
@property(nonatomic,retain) NVDataLoader *dataLoader;
@end

@implementation NVAudioController


- (void)dealloc{
    [_player release];
    [_dataLoader release];
    [super dealloc];
}

+ (NVAudioController *)sharedManager {
    static NVAudioController *sharedMyManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedMyManager = [[self alloc] init];
    });
    return sharedMyManager;
}


- (id)init {
    if (self = [super init]) {
        self.selectRadioWithIndex = -1;
        self.dataLoader = [NVDataLoader sharedManager];
    }
    
    return self;
}


- (void)playMusicWithCurrentRadioId:(int)radioId{
    
    self.selectRadioWithIndex = radioId;
    
    NVRadioDataModel *model = [self.dataLoader.radioData objectAtIndex:self.selectRadioWithIndex];
    
    if(self.player){
        [self.player pause];
    }
    self.player = [[[AVPlayer alloc] initWithURL:model.radioUrl] autorelease];
    
    [self.player play];
    
    NSError *error;
    
    [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryPlayback error:&error];
    
    if(error){
        NSLog(@"%@",error);
    }
}

@end
