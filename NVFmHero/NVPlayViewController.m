#import "NVPlayViewController.h"
#import "AVFoundation/AVFoundation.h"
#import "NVDataLoader.h"
#import "NVConsts.h"
#import "NVRadioDataModel.h"
#import "NVAudioController.h"

@interface NVPlayViewController ()
@property(nonatomic,retain) AVPlayer *player;
@property(nonatomic,retain) NVDataLoader *dataLoader;
@property(nonatomic,retain) NVAudioController *audioController;
@end

@implementation NVPlayViewController

#pragma mark - ViewController life cycle

- (void)dealloc {
    [_dataLoader release];
    [_playPauseButton release];
    [_player release];
    [_tickerLabel release];
    [_audioController release];
    [super dealloc];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.dataLoader = [[[NVDataLoader sharedManager] retain] autorelease];
    self.audioController = [[[NVAudioController sharedManager] retain] autorelease];
    
    NSLog(@"viewDidLoad");
}

-(void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
    if(self.audioController.player) {
        if ((self.audioController.player.rate != 0) && (self.audioController.player.error == nil)) {
             [self.playPauseButton setImage:[UIImage imageNamed:@"pauseButton"] forState:UIControlStateNormal];
        }
    }
    if(self.audioController.selectRadioWithIndex != -1){
        NVRadioDataModel *model = [self.dataLoader.radioData objectAtIndex:self.audioController.selectRadioWithIndex];
        [self initializeTickerLabelWithText:model.radioName] ;
    } else{
        self.tickerLabel.text = @"No radio select";
    }
}


#pragma mark - Button Actions

- (IBAction)playPauseButton:(id)sender {
    if(!self.audioController.player){
        [self.audioController playMusicWithCurrentRadioId:0];
    }
    
    if ((self.audioController.player.rate != 0) && (self.audioController.player.error == nil)) {
        [self.audioController.player pause];
        [self.playPauseButton setImage:[UIImage imageNamed:@"playButton"] forState:UIControlStateNormal];
    } else{
        [self.audioController.player play];
        [self.playPauseButton setImage:[UIImage imageNamed:@"pauseButton"] forState:UIControlStateNormal];
        
    }
     NVRadioDataModel *model = [self.dataLoader.radioData objectAtIndex:self.audioController.selectRadioWithIndex];
     [self initializeTickerLabelWithText:model.radioName];
}

- (IBAction)backButtonAction:(UIButton *)sender {
    if(self.audioController.player){
        int radioId = self.audioController.selectRadioWithIndex;
        if(radioId == 0){
            radioId = [self.dataLoader.radioData count] - 1;
        } else{
             --radioId;
        }
       
        NVRadioDataModel *model = [self.dataLoader.radioData objectAtIndex:radioId];
        
        if ((self.audioController.player.rate != 0) && (self.audioController.player.error == nil)) {
            [self.audioController playMusicWithCurrentRadioId:radioId];
        } else{
            self.audioController.selectRadioWithIndex = radioId;
            [self initializeTickerLabelWithText:model.radioName];
        }
    }
}

- (IBAction)nextButtonAction:(UIButton *)sender {
    if(self.audioController.player){
        int radioId = self.audioController.selectRadioWithIndex;
        
        if(radioId == ([self.dataLoader.radioData count] - 1)){
            radioId = 0;
        } else{
            ++radioId;
        }
        
        NVRadioDataModel *model = [self.dataLoader.radioData objectAtIndex:radioId];
        
        if ((self.audioController.player.rate != 0) && (self.audioController.player.error == nil)) {
            [self.audioController playMusicWithCurrentRadioId:radioId];
        } else{
             self.audioController.selectRadioWithIndex = radioId;
             [self initializeTickerLabelWithText:model.radioName];
        }
        
    }
}

#pragma mark - Radio methods


- (void)initializeTickerLabelWithText:(NSString *)someText{
    
    self.tickerLabel.text = someText;
    self.tickerLabel.scrollDuration = 4.f;
    self.tickerLabel.fadeLength = self.tickerLabel.frame.size.width*1.5;
}

@end
