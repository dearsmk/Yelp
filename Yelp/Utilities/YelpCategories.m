//
//  YelpCategories.m
//  Yelp
//
//  Created by Muthukumar S on 6/20/14.
//  Copyright (c) 2014 Muthukumar S. All rights reserved.
//

#import "YelpCategories.h"

@implementation YelpCategories

+(NSDictionary *)categoriesDict {
    NSMutableDictionary * categoriesDict = [[NSMutableDictionary alloc] init];
    
    NSString *fileRoot =[[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:CATEGORIES_TEXT_FILE];
    NSString* fileContents = [NSString stringWithContentsOfFile:fileRoot
                              encoding:NSUTF8StringEncoding error:nil];
    NSArray *lines = [fileContents componentsSeparatedByString:@"\n"];
    NSString * expr = @"([^()]+)";
    NSError * error;
    NSRegularExpression * regex = [NSRegularExpression regularExpressionWithPattern:expr options:0 error:&error];
    for (NSString * line in lines) {
        NSArray * results =  [regex matchesInString:line options:0 range:NSMakeRange(0, line.length)];
        NSString * key = [line substringWithRange:[(NSTextCheckingResult *)results[0] range]];
        NSString * value = [line substringWithRange:[(NSTextCheckingResult *)results[1] range]];
        
        [categoriesDict setObject:value forKey:key];
    }
    return categoriesDict;
}

+(NSArray *)categories {
    return [self categoriesDict].allKeys;
}

@end
