//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (EmailFoundationAdditions)
+ (id)ef_yahooAuthAllowedCharacterSet;
+ (id)ef_gmailAuthAllowedCharacterSet;
+ (id)ef_messageAllowedCharacterSet;
+ (id)ef_accountAllowedCharacterSet;
+ (id)ef_defaultAllowedCharacterSet;
- (id)ef_hostNilForEmpty;
- (_Bool)ef_isHTTPOrHTTPSURL;
- (_Bool)ef_hasHost:(id)arg1;
- (_Bool)ef_hasScheme:(id)arg1;
@end

