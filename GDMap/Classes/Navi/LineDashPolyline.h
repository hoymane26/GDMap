//
//  LineDashPolyline.h
//  OfficialDemo3D
//
//  Created by Li Fei on 10/25/13.
//  Copyright (c) 2013 songjian. All rights reserved.
//

//#import <MAMapKit/MAPolyline.h>
//#import <MAMapKit/MAOverlay.h>

//#import "MAMapKit.h"


#import "MAPolyline.h"
#import "MAOverlay.h"

@interface LineDashPolyline :NSObject <MAOverlay>

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

@property (nonatomic, readonly) MAMapRect boundingMapRect;

@property (nonatomic, retain)  MAPolyline *polyline;

- (id)initWithPolyline:(MAPolyline *)polyline;

@end
