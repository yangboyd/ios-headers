/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDAssociatedApp, NSString, NSArray;

@interface GEOAssociatedApp : NSObject {

	GEOPDAssociatedApp* _geoAssociatedApp;

}

@property (nonatomic,retain) GEOPDAssociatedApp * geoAssociatedApp;              //@synthesize geoAssociatedApp=_geoAssociatedApp - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredAppAdamId; 
@property (nonatomic,readonly) NSString * preferredAppAdamId; 
@property (nonatomic,readonly) NSArray * alternateAppAdamIds; 
-(NSString *)preferredAppAdamId;
-(NSArray *)alternateAppAdamIds;
-(BOOL)hasPreferredAppAdamId;
-(id)initWithGEOPDAssociatedApp:(id)arg1 ;
-(GEOPDAssociatedApp *)geoAssociatedApp;
-(void)setGeoAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
@end

