
#import <Foundation/Foundation.h>

@interface NVRadioDataModel : NSObject

@property(nonatomic,assign) int radioId;
@property(nonatomic,retain) NSString *radioName;
@property(nonatomic,retain) NSURL *radioUrl;

@end
