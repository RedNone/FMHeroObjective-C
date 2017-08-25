#import "NVFMViewController.h"
#import "NVDataLoader.h"
#import "NVConsts.h"
#import "NVTableViewCellForFMView.h"
#import "NVPlayViewController.h"

@interface NVFMViewController ()
@property(nonatomic,retain) NVDataLoader *dataLoader;
@end

@implementation NVFMViewController

#pragma mark - ViewController life cycle

- (void)dealloc{
    [_tableView release];
    [_indicator release];
    [_dataLoader release];
    [super dealloc];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.dataLoader = [NVDataLoader sharedManager];
    
    [self.dataLoader loadDataWithCompletionBlock:^{
        if(self.dataLoader.radioData){
            [self.indicator setHidden:YES];
            [self.tableView setHidden:NO];
            [self.tableView reloadData];
        }
    }];
}
- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.tableView reloadData];
}

#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return [self.dataLoader.radioData count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
   
    NSString* identifire = @"fmCells";
    
    NVTableViewCellForFMView *cell = [tableView dequeueReusableCellWithIdentifier:identifire];
    
    cell.nameOfRadioLabel.text = [[self.dataLoader.radioData objectAtIndex:indexPath.row] valueForKey:jsonKeyName];
    
    if(self.dataLoader.selectRadioWithIndex == indexPath.row){
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
    
    NVPlayViewController *controller = (NVPlayViewController*)[self.tabBarController.viewControllers objectAtIndex:1];
    [controller playMusicWithCurrentRadioId:indexPath.row];
    self.dataLoader.selectRadioWithIndex = indexPath.row;
    [tableView reloadData];
}

@end
