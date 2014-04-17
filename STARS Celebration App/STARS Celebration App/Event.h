//
//  Event.h
//  STARS Celebration App
//
//  Created by Chirag Patel on 3/10/14.
//  Copyright (c) 2014 STARS Computing Corps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Session;

@interface Event : NSManagedObject

@property (nonatomic, retain) NSString * eventAuthor;
@property (nonatomic, retain) NSString * eventCategory;
@property (nonatomic, retain) NSString * eventDesc;
@property (nonatomic, retain) NSString * eventID;
@property (nonatomic, retain) NSString * eventName;
@property (nonatomic, retain) NSString * eventSurvey;
@property (nonatomic, retain) NSString * eventTrack;
@property (nonatomic, retain) NSSet *eid;
@end

@interface Event (CoreDataGeneratedAccessors)

- (void)addEidObject:(Session *)value;
- (void)removeEidObject:(Session *)value;
- (void)addEid:(NSSet *)values;
- (void)removeEid:(NSSet *)values;

@end
