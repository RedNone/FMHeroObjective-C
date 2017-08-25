#import "NVPlayViewController.h"
#import "AVFoundation/AVFoundation.h"
#import "NVDataLoader.h"
#import "NVConsts.h"
#import "NVRadioDataModel.h"

@interface NVPlayViewController ()
@property(nonatomic,assign) int currentRadioId;
@property(nonatomic,retain) AVPlayer *player;
@property(nonatomic,retain) NVDataLoader *dataLoader;
@end

@implementation NVPlayViewController

#pragma mark - ViewController life cycle

- (void)dealloc {
    [_dataLoader release];
    [_playPauseButton release];
    [_player release];
    [_tickerLabel release];
    [super dealloc];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.dataLoader = [[[NVDataLoader sharedManager] retain] autorelease];
}

-(void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
    if(self.player) {
        if ((self.player.rate != 0) && (self.player.error == nil)) {
             [self.playPauseButton setImage:[UIImage imageNamed:@"pauseButton"] forState:UIControlStateNormal];
        }
    }
    if(self.dataLoader.selectRadioWithIndex != -1){
        NVRadioDataModel *model = [self.dataLoader.radioData objectAtIndex:self.dataLoader.selectRadioWithIndex];
        [self initializeTickerLabelWithText:model.radioName] ;
    } else{
        self.tickerLabel.text = @"No radio select";
    }
}


#pragma mark - Button Actions

- (IBAction)playPauseButton:(id)sender {
    if(!self.player){
        [self playMusicWithCurrentRadioId:0];
    }
    
    if ((self.player.rate != 0) && (self.player.error == nil)) {
        [self.player pause];
        [self.playPauseButton setImage:[UIImage imageNamed:@"playButton"] forState:UIControlStateNormal];
    } else{
        [self.player play];
        [self.playPauseButton setImage:[UIImage imageNamed:@"pauseButton"] forState:UIControlStateNormal];
        
    }
}

- (IBAction)backButtonAction:(UIButton *)sender {
    if(self.player){
        int radioId = self.currentRadioId;
        if(radioId == 0){
            radioId = [self.dataLoader.radioData count] - 1;
        } else{
             --radioId;
        }
       
        if ((self.player.rate != 0) && (self.player.error == nil)) {
            [self playMusicWithCurrentRadioId:radioId];
        } else{
            self.currentRadioId = self.dataLoader.selectRadioWithIndex = radioId;
            [self initializeTickerLabelWithText:[[self.dataLoader.radioData objectAtIndex:radioId] valueForKey:jsonKeyName]];
        }
    }
}

- (IBAction)nextButtonAction:(UIButton *)sender {
    if(self.player){
        int radioId = self.currentRadioId;
        
        if(radioId == ([self.dataLoader.radioData count] - 1)){
            radioId = 0;
        } else{
            ++radioId;
        }
        
        if ((self.player.rate != 0) && (self.player.error == nil)) {
            [self playMusicWithCurrentRadioId:radioId];
        } else{
            self.currentRadioId = self.dataLoader.selectRadioWithIndex = radioId;
             [self initializeTickerLabelWithText:[[self.dataLoader.radioData objectAtIndex:radioId] valueForKey:jsonKeyName]];
        }
        
    }
}

#pragma mark - Radio methods

- (void)playMusicWithCurrentRadioId:(int)radioId{
    
    self.currentRadioId = self.dataLoader.selectRadioWithIndex = radioId;
    
    NVRadioDataModel *model = [self.dataLoader.radioData objectAtIndex:self.currentRadioId];
   
    
    if(self.player){
        [self.player pause];
    }
    self.player = [[[AVPlayer alloc] initWithURL:model.radioUrl] autorelease];
    
    [self.player play];
    
    [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryPlayback error:nil];
    
    [self initializeTickerLabelWithText:model.radioName];
}

- (void)initializeTickerLabelWithText:(NSString *)someText{
    
    self.tickerLabel.text = someText;
    self.tickerLabel.scrollDuration = 4.f;
    self.tickerLabel.fadeLength = self.tickerLabel.frame.size.width*1.5;

}


@end
