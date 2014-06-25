//
//  ViewController.h
//  MarcoPollo
//
//  Created by Jesus Magana on 6/24/14.
//  Copyright (c) 2014 ZeroLinux5. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *tweetTextView;
- (IBAction)postItButtonPressed:(id)sender;

@end
