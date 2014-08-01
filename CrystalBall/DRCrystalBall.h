//
//  DRCrystalBall.h
//  CrystalBall
//
//  Created by Dale Rivera on 7/15/14.
//  Copyright (c) 2014 example. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DRCrystalBall : NSObject{
    NSArray *_predictions;
}
-(NSString*) randomPrediction;
@property (strong, nonatomic, readonly) NSArray *predictions;
@property (strong,nonatomic) NSArray *colors;

@end
