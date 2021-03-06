//
//  MapOverlayCreatorViewController.h
//  MapOverlayCreator
//
//  Created by Philipp Häfele on 01.02.14.
//  Copyright (c) 2014 Philipp Häfele. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Overlay.h"

@interface MapOverlayCreatorViewController : UIViewController <MFMailComposeViewControllerDelegate>

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end
