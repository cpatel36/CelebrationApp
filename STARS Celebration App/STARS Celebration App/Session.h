//
//  Session.h
//  STARS Celebration App
//
//  Created by Chirag Patel on 3/10/14.
//  Copyright (c) 2014 STARS Computing Corps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event;

@interface Session : NSManagedObject

@property (nonatomic, retain) NSNumber * eventID;
@property (nonatomic, retain) NSDate * sessionDate;
@property (nonatomic, retain) NSNumber * sessionID;
@property (nonatomic, retain) NSString * sessionLocation;
@property (nonatomic, retain) NSDate * sessionTime;
@property (nonatomic, retain) Event *eid;

@end
