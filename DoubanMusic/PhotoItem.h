//
//  PhotoItem.h
//  DoubanMusic
//
//  Created by qianfeng1 on 13-5-13.
//  Copyright (c) 2013年 qianfeng1. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PhotoItem : NSObject
@property (nonatomic,copy) NSString *desc;
@property (nonatomic,copy) NSString *order;
@property (nonatomic,copy) NSString *photo_id;
@property (nonatomic,copy) NSString *upload_time;
@property (nonatomic,copy) NSString *uploader_name;
@property (nonatomic,copy) NSString *url;

@end