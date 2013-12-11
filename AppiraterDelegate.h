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
-(void)appiraterDidOptToRate:(Appirater *)appirater;

// This delegate is called only if appiraterDidOptToRate: is not available or
// if there are more than one rate button and the button pressed is not the first.
// The ratting is not performed (you can call it yourself with [Appirater rateApp]
-(void)appiraterDidOptToRate:(Appirater *)appirater buttonIndex:(NSInteger)buttenIndex;

-(void)appiraterDidOptToRemindLater:(Appirater *)appirater;
-(void)appiraterWillPresentModalView:(Appirater *)appirater animated:(BOOL)animated;
-(void)appiraterDidDismissModalView:(Appirater *)appirater animated:(BOOL)animated;
@end
