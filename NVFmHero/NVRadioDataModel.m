
#import "NVRadioDataModel.h"

@implementation NVRadioDataModel

- (void)dealloc{
    [_radioName release];
    [_radioUrl release];
    [super dealloc];
}

@end
