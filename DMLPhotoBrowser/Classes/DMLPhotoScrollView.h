//
//  DMLPhotoScrollView.h
//  DMLPhotoBrowserDemo
//
//  Created by 戴明亮 on 2017/12/27.
//  Copyright © 2017年 戴明亮. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DMLPhotoImageView.h"
#import "DMLPhotoItem.h"
#import "DMLProgressShapeLayer.h"
#import "UIImageView+WebCache.h"
#import "UIView+WebCache.h"
#import "SDWebImageManager.h"

typedef void(^progressBlock)(NSInteger receivedSize, NSInteger expectedSize, NSURL * targetURL);
typedef void(^completedBlock)(UIImage *image,  NSURL *imageURL);

@interface DMLPhotoScrollView : UIScrollView
@property (nonatomic, strong)DMLPhotoImageView *imageView;
@property (nonatomic, strong)DMLPhotoItem *photoItem;
@property (nonatomic, strong)DMLProgressShapeLayer *progressLayer;
@property (nonatomic, copy) progressBlock progressBlock;
@property (nonatomic, copy) completedBlock completedBolck;
/**
 取消当前加载的图片请求
 */
- (void)cancelCurrentImageLoad;
@end
