#import "NVFMViewController.h"
#import "NVDataLoader.h"
#import "NVConsts.h"
#import "NVTableViewCellForFMView.h"

@interface NVFMViewController ()
@property(nonatomic,retain) NVDataLoader *dataLoader;
@end

@implementation NVFMViewController

- (void)dealloc{
    [_tableView release];
    [_indicator release];
    [_dataLoader release];
    [super dealloc];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.dataLoader = [NVDataLoader sharedManager];
    
}

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    [self.dataLoader loadDataWithCompletionBlock:^{
        if(self.dataLoader.radioData){
            [self.indicator setHidden:YES];
            [self.tableView setHidden:NO];
            [self.tableView reloadData];           
        }
    }];
}


#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return [self.dataLoader.radioData count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    NSString* identifire = @"fmCells";
    
    NVTableViewCellForFMView *cell = [tableView dequeueReusableCellWithIdentifier:identifire];
    //NVTableViewCellForFMView *cell = [[NVTableViewCellForFMView alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifire];
        
    cell.nameOfRadioLabel.text = [[self.dataLoader.radioData objectAtIndex:indexPath.row] valueForKey:jsonKeyName];
    
    return cell;
}

#pragma mark - UITableViewDelegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
}

@end
