/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSStickerPrivate.h>

@class NSURL, NSString, NSData, CKImageData, NSError, UIImage;

@interface MSSticker : NSObject <MSStickerPrivate> {

	NSURL* _imageFileURL;
	NSString* _localizedDescription;
	NSData* _data;
	CKImageData* __imageData;
	NSError* __stickerError;
	UIImage* __thumbnail;

}

@property (nonatomic,retain) CKImageData * _imageData;                            //@synthesize _imageData=__imageData - In the implementation block
@property (nonatomic,retain) NSError * _stickerError;                             //@synthesize _stickerError=__stickerError - In the implementation block
@property (nonatomic,retain) UIImage * _thumbnail;                                //@synthesize _thumbnail=__thumbnail - In the implementation block
@property (nonatomic,readonly) NSURL * imageFileURL;                              //@synthesize imageFileURL=_imageFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)MSStickerPreviewCacheKeyForSticker:(id)arg1 ;
+(id)stickerWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3 ;
-(NSString *)localizedDescription;
-(id)accessibilityLabel;
-(NSData *)data;
-(UIImage *)_thumbnail;
-(NSURL *)imageFileURL;
-(id)initWithContentsOfURL:(id)arg1 data:(id)arg2 localizedDescription:(id)arg3 error:(id*)arg4 ;
-(id)initWithContentsOfFileURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3 ;
-(CKImageData *)_imageData;
-(NSString *)description;
-(void)set_stickerError:(NSError *)arg1 ;
-(void)set_imageData:(CKImageData *)arg1 ;
-(NSError *)_stickerError;
-(void)set_thumbnail:(UIImage *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id*)arg3 ;
-(void)_generateImageData;
-(void)_generateThumbnail;
@end

