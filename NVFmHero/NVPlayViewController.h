#import <UIKit/UIKit.h>
#import "MarqueeLabel.h"

@interface NVPlayViewController : UIViewController

@property (retain, nonatomic) IBOutlet MarqueeLabel *tickerLabel;
@property (retain, nonatomic) IBOutlet UIButton *playPauseButton;

- (IBAction)playPauseButton:(id)sender;
- (IBAction)backButtonAction:(UIButton *)sender;
- (IBAction)nextButtonAction:(UIButton *)sender;


@end
