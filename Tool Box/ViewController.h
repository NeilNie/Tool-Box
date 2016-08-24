//
//  ViewController.h
//  Tool Box
//
//  Created by Yongyang Nie on 7/14/15.
//  Copyright (c) 2015 Yongyang Nie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>
#import <StoreKit/StoreKit.h>
#import <MessageUI/MessageUI.h>

@import GoogleMobileAds;

//Setting
BOOL areAdsRemoved;
//calc
int Method;
int SelectNumber;
float RunningTotal;
int cases;
int cases1;
int cases2;
//Timer
int countnumber;
int countnumber2;
int countnumber3;
int timercases;
int timercases1;
//Unit Convert

@interface ViewController : UIViewController <MFMailComposeViewControllerDelegate, SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    //Calc
    IBOutlet UILabel *Screen;
    //Timer
    IBOutlet UILabel *timerdisplay;
    IBOutlet UILabel *timerdisplay2;
    IBOutlet UILabel *timerdisplay3;
    IBOutlet UIButton *Start;
    NSTimer *timer;
    //Unit Convert
}
//Calc
-(IBAction)Number1:(id)sender;
-(IBAction)Number2:(id)sender;
-(IBAction)Number3:(id)sender;
-(IBAction)Number4:(id)sender;
-(IBAction)Number5:(id)sender;
-(IBAction)Number6:(id)sender;
-(IBAction)Number7:(id)sender;
-(IBAction)Number8:(id)sender;
-(IBAction)Number9:(id)sender;
-(IBAction)Number0:(id)sender;
-(IBAction)Times:(id)sender;
-(IBAction)Divide:(id)sender;
-(IBAction)Subtract:(id)sender;
-(IBAction)Plus:(id)sender;
-(IBAction)Equals:(id)sender;
-(IBAction)AllClear:(id)sender;

//Timer
-(IBAction)start:(id)sender;
-(IBAction)stop:(id)sender;
-(IBAction)restart:(id)sender;

//Setting
-(IBAction)rate:(id)sender;
-(IBAction)Foremore:(id)sender;
- (IBAction)restore;
- (IBAction)tapsRemoveAdsButton;
- (IBAction)tapsRemoveAdsButton2;
-(IBAction)feedback:(id)sender;
@property (weak, nonatomic) IBOutlet GADBannerView *banner;

@end


