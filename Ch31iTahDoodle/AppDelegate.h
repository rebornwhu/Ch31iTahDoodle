//
//  AppDelegate.h
//  Ch31iTahDoodle
//
//  Created by Xiao Lu on 4/4/15.
//  Copyright (c) 2015 Xiao Lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder
<UIApplicationDelegate, UITableViewDataSource>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic) UITableView *taskTable;
@property (nonatomic) UITextField *taskField;
@property (nonatomic) UIButton *insertButton;

@property (nonatomic) NSMutableArray *tasks;

- (void)addTask:(id)sender;


@end

