//
//  AppiraterDelegate.h
//  Banana Stand
//
//  Created by Robert Haining on 9/25/12.
//  Copyright (c) 2012 News.me. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Appirater;

@protocol AppiraterDelegate <NSObject>

@optional
-(void)appiraterDidDisplayAlert:(Appirater *)appirater;
-(void)appiraterDidDeclineToRate:(Appirater *)appirater;
-(BOOL)appiraterDidOptToRate:(Appirater *)appirater;  // return NO to block the switch to rating
-(BOOL)appiraterDidOptToRate:(Appirater *)appirater buttonIndex:(NSInteger)buttenIndex;
-(void)appiraterDidOptToRemindLater:(Appirater *)appirater;
-(void)appiraterWillPresentModalView:(Appirater *)appirater animated:(BOOL)animated;
-(void)appiraterDidDismissModalView:(Appirater *)appirater animated:(BOOL)animated;
@end
