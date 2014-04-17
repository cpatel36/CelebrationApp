//
//  Conference.h
//  STARS Celebration App
//
//  Created by Chirag Patel on 3/10/14.
//  Copyright (c) 2014 STARS Computing Corps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Conference : NSManagedObject

@property (nonatomic, retain) NSNumber * confID;
@property (nonatomic, retain) NSString * confLoc;
@property (nonatomic, retain) NSString * confMap;
@property (nonatomic, retain) NSString * confName;
@property (nonatomic, retain) NSString * confYear;

@end
