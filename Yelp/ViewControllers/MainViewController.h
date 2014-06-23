//
//  MainViewController.h
//  Yelp
//
//  Created by Muthukumar S on 6/20/14.
//  Copyright (c) 2014 Muthukumar S. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "UIColor+Yelp.h"
#import "YelpClient.h"
#import "Business.h"
#import "YelpTableViewCell.h"
#import "FiltersViewController.h"

@interface MainViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, CLLocationManagerDelegate, FiltersViewControllerDelegate>

@end
