#import <UIKit/UIKit.h>
#import "MarqueeLabel.h"

@interface NVPlayViewController : UIViewController

@property (retain, nonatomic) IBOutlet MarqueeLabel *tickerLabel;
@property (retain, nonatomic) IBOutlet UIButton *playPauseButton;
@property (retain, nonatomic) IBOutlet UISlider *volumeSlider;

- (IBAction)playPauseButton:(id)sender;
- (IBAction)backButtonAction:(UIButton *)sender;
- (IBAction)nextButtonAction:(UIButton *)sender;
- (IBAction)volumeSliderAction:(id)sender;

@end
