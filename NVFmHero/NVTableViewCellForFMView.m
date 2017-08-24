#import "NVTableViewCellForFMView.h"

@implementation NVTableViewCellForFMView

- (void)dealloc {
    [_nameOfRadioLabel release];
    [_playButton release];
    [super dealloc];
}

@end
