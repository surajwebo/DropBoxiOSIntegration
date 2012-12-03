//
//  PhotoViewController.h
//  DBRoulette
//


@class DBRestClient;

@interface PhotoViewController : UIViewController {
    UIImageView* imageView;
    UIButton* nextButton;
    UIActivityIndicatorView* activityIndicator;
    
    NSArray* photoPaths;
    NSString* photosHash;
    NSString* currentPhotoPath;
    BOOL working;
    DBRestClient* restClient;
}

@property (nonatomic, retain) IBOutlet UIImageView* imageView;
@property (nonatomic, retain) IBOutlet UIButton* nextButton;
@property (nonatomic, retain) IBOutlet UIActivityIndicatorView* activityIndicator;

- (IBAction)uploadToDropBox:(id)sender;
- (IBAction)deleteFromDropBox:(id)sender;
- (IBAction)getSharableLink:(id)sender;

@end
