//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItemWithNoChildren.h>

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren
{
    NSString *_nameAttribute;
    NSString *_typeAttribute;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *typeAttribute; // @synthesize typeAttribute=_typeAttribute;
@property(retain, nonatomic) NSString *nameAttribute; // @synthesize nameAttribute=_nameAttribute;
- (void)parserFoundAttributes:(id)arg1;

@end

