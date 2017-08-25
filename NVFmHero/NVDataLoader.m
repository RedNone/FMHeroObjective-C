#import "NVDataLoader.h"
#import <AFNetworking/AFNetworking.h>
#import "NVConsts.h"
#import "NVRadioDataModel.h"

@interface NVDataLoader ()

@property(nonatomic,retain) NSURLSessionConfiguration *configuration;
@property(nonatomic,retain) AFURLSessionManager *manager;
@property(nonatomic,retain) NSURL *URL;
@property(nonatomic,retain) NSURLRequest *request;
@property(nonatomic,retain) AFJSONResponseSerializer *responseSerializer;

@end

@implementation NVDataLoader

- (void)dealloc{
    NSLog(@"dealloc");
    [_radioData release];
    [_configuration release];
    [_manager release], _manager = nil;
    [_URL release];
    [_request release];
    [_responseSerializer release];
    [super dealloc];
}

+ (NVDataLoader *)sharedManager {
    static NVDataLoader *sharedMyManager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedMyManager = [[self alloc] init];
    });
    return sharedMyManager;
}


- (id)init {
    if (self = [super init]) {
        self.configuration = [NSURLSessionConfiguration defaultSessionConfiguration];
        self.manager = [[[AFURLSessionManager alloc] initWithSessionConfiguration:self.configuration] autorelease];
        self.URL = [NSURL URLWithString:dataUrl];
        self.request = [NSURLRequest requestWithURL:self.URL];
        self.responseSerializer = [AFJSONResponseSerializer serializerWithReadingOptions:NSJSONReadingAllowFragments];
        self.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"application/json", @"text/json", @"text/javascript", @"text/html",@"text/plain", nil];
        self.manager.responseSerializer = self.responseSerializer;      
        }
    
    return self;
}

- (void)loadDataWithCompletionBlock:(void (^)(void))completionBlock
{
     //__block NVDataLoader *weakSelf = self;
    [completionBlock autorelease];

    NSURLSessionDataTask *dataTask = [self.manager dataTaskWithRequest:self.request completionHandler:^(NSURLResponse *response, id responseObject, NSError *error) {
        if (error) {
            NSLog(@"Error: %@", error);
        } else {
            NSArray *array = [[NSMutableArray alloc] initWithArray:responseObject];
            
            _radioData = [[NSMutableArray alloc] initWithCapacity:[array count]];
            
            for(int i = 0; i < [array count]; i++){
                NVRadioDataModel *model = [NVRadioDataModel new];
                
                model.radioId = [[[array objectAtIndex:i] valueForKey:jsonKeyId] intValue];
                model.radioName = [[array objectAtIndex:i] valueForKey:jsonKeyName];
                model.radioUrl = [NSURL URLWithString:[[array objectAtIndex:i] valueForKey:jsonKeyUrl]];
                [_radioData addObject: model];
                [model release];
            }
            [array release];
            completionBlock();
        }
    }];
    
    [dataTask resume];
}

@end
