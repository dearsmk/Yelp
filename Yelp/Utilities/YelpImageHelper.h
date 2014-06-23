//
//  YelpImageHelper.h
//  Yelp
//
//  Created by Muthukumar S on 6/20/14.
//  Copyright (c) 2014 Muthukumar S. All rights reserved.
//

#import <Foundation/Foundation.h>

#define IMAGE_REQUEST_TIMEOUT 60

@interface YelpImageHelper : NSObject

+ (void)setImageWithURL:(NSString *)url placeHolderImage:(UIImage *)placeHolderImage forView:(UIImageView *)imageView;

+ (UIImage *)placeHolderImageWithFrame:(CGRect)frame Color:(UIColor *)color;

@end
