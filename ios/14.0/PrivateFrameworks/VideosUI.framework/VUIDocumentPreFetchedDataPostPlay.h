/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIDocumentPreFetchedData.h>

@class NSString, NSArray;

@interface VUIDocumentPreFetchedDataPostPlay : VUIDocumentPreFetchedData {

	BOOL _updateEvent;
	BOOL _canAutoPlay;
	NSString* _host;
	NSString* _productID;
	NSString* _showID;
	NSArray* _excludedCanonicals;

}

@property (nonatomic,copy) NSString * host;                           //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSString * productID;                      //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy) NSString * showID;                         //@synthesize showID=_showID - In the implementation block
@property (nonatomic,copy) NSArray * excludedCanonicals;              //@synthesize excludedCanonicals=_excludedCanonicals - In the implementation block
@property (assign,nonatomic) BOOL updateEvent;                        //@synthesize updateEvent=_updateEvent - In the implementation block
@property (assign,nonatomic) BOOL canAutoPlay;                        //@synthesize canAutoPlay=_canAutoPlay - In the implementation block
-(NSString *)host;
-(NSString *)productID;
-(void)setHost:(NSString *)arg1 ;
-(void)setProductID:(NSString *)arg1 ;
-(NSString *)showID;
-(id)jsonData;
-(BOOL)updateEvent;
-(BOOL)canAutoPlay;
-(NSArray *)excludedCanonicals;
-(void)setShowID:(NSString *)arg1 ;
-(void)setExcludedCanonicals:(NSArray *)arg1 ;
-(void)setUpdateEvent:(BOOL)arg1 ;
-(void)setCanAutoPlay:(BOOL)arg1 ;
@end

