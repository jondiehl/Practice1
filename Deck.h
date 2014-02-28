//
//  Deck.h
//  Practice1
//
//  Created by Jon Diehl on 2/17/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;
@end
