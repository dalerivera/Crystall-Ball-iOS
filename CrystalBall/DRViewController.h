//
//  DRViewController.h
//  CrystalBall
//
//  Created by Dale Rivera on 7/15/14.
//  Copyright (c) 2014 example. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DRCrystalBall;

@interface DRViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong,nonatomic) DRCrystalBall *crystalBall;
@property (strong,nonatomic) NSArray *colors;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;
-(void) makePrediction;
@end
