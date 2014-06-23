//
//  YelpClient.h
//  Yelp
//
//  Created by Muthukumar S on 6/20/14.
//  Copyright (c) 2014 Muthukumar S. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BDBOAuth1RequestOperationManager.h"
#import "FilterOption.h"

@interface YelpClient : BDBOAuth1RequestOperationManager

- (AFHTTPRequestOperation *)searchWithFilterOption:(FilterOption *)filterOption success:(void (^)(AFHTTPRequestOperation *operation, id response))success failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

@end
