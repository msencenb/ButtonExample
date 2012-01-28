//
//  ViewController.h
//  ButtonExample
//
//  Created by Matt Sencenbaugh on 1/27/12.
//  Copyright (c) 2012 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UIButton *ourFirstButton;
}

@property(nonatomic,retain)IBOutlet UIButton *ourFirstButton;
-(IBAction)buttonPressed:(id)sender;
@end
