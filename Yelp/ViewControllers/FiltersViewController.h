//
//  FiltersViewController.h
//  Yelp
//
//  Created by Muthukumar S on 6/20/14.
//  Copyright (c) 2014 Muthukumar S. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FilterOption.h"
#import "RadiusCell.h"

@protocol FiltersViewControllerDelegate <NSObject>

- (void)searchWithFilterOption:(FilterOption *)fiterOption;

@end

@interface FiltersViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, RadiusCellDelegate>

@property (nonatomic, weak) id<FiltersViewControllerDelegate> delegate;
@property (nonatomic, strong) FilterOption * filterOption;

@end
