//
//  AudioStopController.h
//  Tap
//
//  Created by Daniel Cervantes on 8/16/12.
//  Copyright (c) 2012 Indianapolis Museum of Art. All rights reserved.
//

#import <MediaPlayer/MediaPlayer.h>

@class TAPTour, TAPStop, TAPAsset, TAPAssetRef, TAPConnection, TAPContent, TAPProperty, TAPSource;

@interface AudioStopController : MPMoviePlayerViewController {
    TAPStop *audioStop;
}

@property (nonatomic, retain) TAPStop *audioStop;

- (id)initWithStop:(TAPStop *)stop;

@end
