//
//  MasterViewController.h
//  Geolocations
//
//  Created by Héctor Ramos on 7/31/12.
//  Copyright (c) 2012 Parse, Inc. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <Parse/Parse.h>

@interface MasterViewController : PFQueryTableViewController <CLLocationManagerDelegate>

@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) UIButton *avgButton;
@property (nonatomic, retain) PFGeoPoint *avgPoint;


- (IBAction)insertCurrentLocation:(id)sender;
- (void)showAverageLocation;

@end
