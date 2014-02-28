//
//  Card.h
//  Practice1
//
//  Created by Jon Diehl on 2/17/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic) BOOL chosen;
@property (nonatomic) BOOL matched;

- (int)match:(Card *)aCard;
@end
