/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSOperationQueue, NSMutableArray;

@interface OSDRawAccelerometerDevice : NSObject {
    struct __IOHIDServiceClient { } *_AccelerometerPlugin;
    struct __IOHIDEventSystemClient { } *_HIDSystemClient;
    NSOperationQueue *_operationQueue;
    SEL _registeredCallback;
    id _registeredDelegate;
    NSMutableArray *_samples;
}

@property struct __IOHIDServiceClient { }* _AccelerometerPlugin;

- (struct __IOHIDServiceClient { }*)_AccelerometerPlugin;
- (void)dealloc;
- (void)enqueueCallback:(id)arg1;
- (struct __IOHIDServiceClient { }*)getAccelerometerPlugin;
- (struct __IOHIDEventSystemClient { }*)getHIDSystem;
- (id)init;
- (int)registerAccelerometerCallback:(SEL)arg1 delegate:(id)arg2 operationQueue:(id)arg3 sampleInterval:(float)arg4;
- (int)registerAccelerometerCallbackIOKit:(float)arg1;
- (id)sampleForDuration:(float)arg1 sampleInterval:(float)arg2;
- (void)sampleForDurationCallback:(id)arg1;
- (void)set_AccelerometerPlugin:(struct __IOHIDServiceClient { }*)arg1;
- (void)unregisterAccelerometerCallback;
- (void)unregisterAccelerometerCallbackIOKit;

@end