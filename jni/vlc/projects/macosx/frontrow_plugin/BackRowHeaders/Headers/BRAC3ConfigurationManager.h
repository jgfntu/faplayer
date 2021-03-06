/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@interface BRAC3ConfigurationManager : NSObject
{
    struct MovieType **_movie;
    unsigned int _playbackMode;
    struct TrackType **_playthroughTrack;
    struct TrackType **_softwareDecodeTrack;
}

- (id)init;
- (id)initWithQTMovie:(id)fp8 returningErrorCode:(int *)fp12;
- (void)dealloc;
- (long)setPlaybackMode:(unsigned long)fp8;

@end

