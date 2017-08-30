#import "NVFMViewController.h"
#import "NVDataLoader.h"
#import "NVConsts.h"
#import "NVTableViewCellForFMView.h"
#import "NVPlayViewController.h"
#import "NVRadioDataModel.h"
#import "NVAudioController.h"
#import <ObjectiveDropboxOfficial/ObjectiveDropboxOfficial.h>

@interface NVFMViewController ()
@property(nonatomic,retain) NVDataLoader *dataLoader;
@property(nonatomic,retain) NVAudioController *audioController;
@property(nonatomic,retain) DBUserClient *clientDropBox;
@end

@implementation NVFMViewController

#pragma mark - ViewController life cycle

- (void)dealloc{
    [_tableView release];
    [_indicator release];
    [_dataLoader release];
    [_audioController release];
    [_clientDropBox release];
    [_logInDropBox release];
    [super dealloc];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.dataLoader = [NVDataLoader sharedManager];
    self.audioController = [NVAudioController sharedManager];
    
  
}
- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.tableView reloadData];
   
    self.clientDropBox = [DBClientsManager authorizedClient];
    
    bool isClientAuthorized = [self.clientDropBox isAuthorized];
    
    if(isClientAuthorized){
        [self.logInDropBox setHidden:YES];
    } else{
        [self.indicator setHidden:YES];
    }
    
    
    if(isClientAuthorized || self.dataLoader.radioData){
        [self.dataLoader loadDataWithCompletionBlock:^{
            if(self.dataLoader.radioData){
                [self.indicator setHidden:YES];
                [self.logInDropBox setHidden:YES];
                [self.tableView setHidden:NO];                
                [self.tableView reloadData];                
            }
        }];
    }
}


- (IBAction)logInDropBox:(UIButton *)sender {
    
    [DBClientsManager authorizeFromController:[UIApplication sharedApplication]
                                   controller:self
                                      openURL:^(NSURL *url) {
                                          [[UIApplication sharedApplication] openURL:url];
                                      }];

}


#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return [self.dataLoader.radioData count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
   
    NSString* identifire = @"fmCells";
    
    NVRadioDataModel *model = [self.dataLoader.radioData objectAtIndex:indexPath.row];
    
    NVTableViewCellForFMView *cell = [tableView dequeueReusableCellWithIdentifier:identifire];
    
    cell.nameOfRadioLabel.text = model.radioName;
    
    if(self.audioController.selectRadioWithIndex == indexPath.row){
        CABasicAnimation *theAnimation;
        theAnimation=[CABasicAnimation animationWithKeyPath:@"opacity"] ;
        theAnimation.duration=1.0;
        theAnimation.repeatCount=HUGE_VALF;
        theAnimation.autoreverses=YES;
        theAnimation.fromValue=[NSNumber numberWithFloat:1.0];
        theAnimation.toValue=[NSNumber numberWithFloat:0.0];
        [cell.contentView.layer addAnimation:theAnimation forKey:@"animateOpacity"];
    }
    
    return cell;
}

#pragma mark - UITableViewDelegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    self.audioController.selectRadioWithIndex = indexPath.row;
    [self.audioController playMusicWithCurrentRadioId:indexPath.row];
    [tableView reloadData];
}


@end
