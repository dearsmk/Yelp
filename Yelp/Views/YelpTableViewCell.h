//
//  YelpTableViewCell.h
//  Yelp
//
//  Created by Muthukumar S on 6/20/14.
//  Copyright (c) 2014 Muthukumar S. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Business.h"

@interface YelpTableViewCell : UITableViewCell

@property (nonatomic, strong) Business * business;

- (void)setBusiness:(Business *)business;

@end
