//
//  DataTasks.h
//  PlayingWithNSURLSession
//
//  Created by Michael Vilabrera on 6/26/15.
//  Copyright (c) 2015 Giving Tree. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataTasks : NSObject <NSURLSessionDelegate>

+ (void)sendHTTPGetWithStringURL:(NSString *)stringURL;
- (void)sendHTTPPOSTWithStringURL:(NSString *)stringURL andParameters:(NSString *)param;

@end
