//
//  CrowdfundingCell.h
//  演娱现场
//
//  Created by 汪洋 on 2017/2/22.
//  Copyright © 2017年 yyxc. All rights reserved.
//  众筹的cell

#import <UIKit/UIKit.h>

@interface CrowdfundingCell : UITableViewCell
+ (instancetype)cellWithTableView:(UITableView *)tableView;
- (void)setupView:(NSMutableArray *)array;
@end
