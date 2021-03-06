/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAControllerBrowser : NSObject <AXHADeviceControllerProtocol, AXHARemoteControllerDelegate, NSNetServiceBrowserDelegate> {
    NSNetServiceBrowser *_browser;
    <AXHAControllerBrowserDelegateProtocol> *_delegate;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXHATimer *_deviceUpdatesTimer;
    NSMutableArray *_remoteControllers;
    AXHearingSlaveController *_slaveController;
    int _state;
    NSMutableArray *_updateDeviceBlocks;
}

@property (nonatomic, retain) NSNetServiceBrowser *browser;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXHAControllerBrowserDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *remoteControllers;
@property (nonatomic, retain) AXHearingSlaveController *slaveController;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *updateDeviceBlocks;

+ (id)sharedInstance;

- (id)availableControllers;
- (id)availableRemoteControllers;
- (void)becomeMaster;
- (id)browser;
- (void)clearControllers;
- (void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
- (void)controller:(id)arg1 didFinishSendingData:(id)arg2;
- (void)controller:(id)arg1 didReceiveData:(id)arg2;
- (void)controllerDidFinishConnecting:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)device:(id)arg1 didUpdateProperty:(int)arg2;
- (id)init;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)registerForPropertyUpdates:(id /* block */)arg1;
- (id)remoteControllerForHostname:(id)arg1;
- (id)remoteControllers;
- (void)resolveMasterWithCompletion:(id /* block */)arg1;
- (void)sendObject:(id)arg1 toAllControllersExcept:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)sendObject:(id)arg1 toController:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)sendObject:(id)arg1 toController:(id)arg2 withSendCompletion:(id /* block */)arg3;
- (void)setBrowser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteControllers:(id)arg1;
- (void)setSlaveController:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUpdateDeviceBlocks:(id)arg1;
- (BOOL)shouldRelinquishConnection;
- (id)slaveController;
- (int)state;
- (void)stop;
- (void)stopPropertyUpdates;
- (void)transitionToSlaveWithCompletion:(id /* block */)arg1;
- (id)updateDeviceBlocks;
- (void)updateProperty:(int)arg1 forDeviceID:(id)arg2;
- (void)writePayload:(id)arg1 toControllers:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(int)arg2 forControllers:(id)arg3;
- (void)writeValue:(id)arg1 forProperty:(int)arg2 forDeviceID:(id)arg3;

@end
