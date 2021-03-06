/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NRNSXPCConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class NRMockClientNSXPCConnection, NRMockNSXPCListener, NSObject, NSXPCInterface, NSString;

@interface NRMockServerNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {

	NRMockClientNSXPCConnection* _clientConnection;
	NRMockNSXPCListener* _listener;
	id _synchronousRemoteObjectProxy;
	id _remoteObjectProxy;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,retain) NSXPCInterface * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                   //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler;                                //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)exportedObject;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxy;
-(id)invalidationHandler;
-(NSXPCInterface *)remoteObjectInterface;
-(void)invalidate;
-(id)valueForEntitlement:(id)arg1 ;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(NSString *)processName;
-(NSXPCInterface *)exportedInterface;
-(void)dealloc;
-(id)interruptionHandler;
-(void)suspend;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)resume;
-(void)setInterruptionHandler:(id)arg1 ;
-(int)processIdentifier;
-(void)_setQueue:(id)arg1 ;
-(id)remoteObjectProxyAsync:(BOOL)arg1 ;
-(id)initWithListener:(id)arg1 clientConnection:(id)arg2 ;
@end

