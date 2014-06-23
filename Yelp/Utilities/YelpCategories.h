//
//  YelpCategories.h
//  Yelp
//
//  Created by Muthukumar S on 6/20/14.
//  Copyright (c) 2014 Muthukumar S. All rights reserved.
//

#import <Foundation/Foundation.h>

#define CATEGORIES_TEXT_FILE @"categories.txt"

@interface YelpCategories : NSObject

/*
 key is the human readable category, value is the category_filter
 */
+(NSDictionary *)categoriesDict;
+(NSArray *)categories;

@end
