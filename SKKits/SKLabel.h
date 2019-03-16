//
//  SKLabel.h
//  1234123
//
//  Created by 阿汤哥 on 2019/3/16.
//  Copyright © 2019 aze. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger , SKLabelStyle){
    SKLabelStyleNone = 0,
    SKLabelStyleUser = 1,
    SKLabelStyleTopic = 2,
    SKLabelStyleLink = 3,
    SKLabelStyleAgreement = 4,
    SKLabelStyleUserDefine = 5,
    SKLabelStylePhoneNumber = 6
};

@class SKLabel ;

@protocol SKLabelDelegate <NSObject>

@optional

// 代理
-(void)SKLabel:(SKLabel *)label didSelectedString:(NSString *)selectedString forSKLabelStyle:(SKLabelStyle *)style onRange:(NSRange)range ;

@end

//Block
typedef void(^TapSKLabel)(UILabel *,SKLabelStyle, NSString * , NSRange);

@interface SKLabel : UILabel

/* 普通文字颜色 */
@property(nonatomic , strong)UIColor *SKLabelNormalColor ;

/* 选中时高亮背景色 */
@property(nonatomic , strong)UIColor *SKLabelHightLightBackgroundColor ;

/* 字符串+显示颜色 字典数组, */
@property(nonatomic, strong)NSArray<NSDictionary *> *SKLabelMatchArr;

/* 高亮文字设置颜色*/
-(void)setHightLightLabelColor:(UIColor *)hightLightColor forSKLabelStyle:(SKLabelStyle)SKLabelStyle;

/* delegate */
@property(nonatomic, weak)id<SKLabelDelegate> delegate;


/* 点击事件block */
@property(nonatomic, strong)TapSKLabel SKTapOperation;

@end
