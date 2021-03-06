/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@interface LTEAudioManager : NSObject {
    BOOL _microphoneMuted;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } audioLock;
    int audioRefCount;
    int clientPID;
    struct opaqueCMSession { } *cmSession;
    NSObject<OS_dispatch_queue> *cmSessionQueue;
    int cmSessionRefCount;
    int connectionRefCount;
    NSString *currentAudioCategory;
    NSString *currentAudioMode;
    BOOL currentAudioRecordingMode;
    NSNumber *currentClientPriority;
    int currentMinSamplesPerFrame;
    BOOL currentReceiverStatus;
    int currentSampleRate;
    unsigned long currentVPOperatingMode;
    int deviceClass;
    BOOL enableSpeakerPhone;
    struct AudioEventQueue_t { } *eventQ;
    float fLastStartAudioSessionCall;
    struct tagHANDLE { int x1; } *hAUIO;
    int hardwareSampleRate;
    NSObject<OS_dispatch_queue> *inputDeviceQueue;
    BOOL isGKVoiceChat;
    BOOL isTetheredDisplayMode;
    BOOL isUsingSuppression;
    NSMutableArray *micConfList;
    unsigned long preferredHardwareSampleRate;
    NSDictionary *requestedSessionParams;
    BOOL shouldSetupAudioSession;
    NSMutableArray *spkrConfList;
    LTEAudioDevice *targetInputDevice;
    BOOL usingFloat;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } vpioFormat;
}

@property (nonatomic) int clientPID;
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property (nonatomic) BOOL isGKVoiceChat;
@property (nonatomic) BOOL isUsingSuppression;
@property (getter=isMicrophoneMuted, nonatomic) BOOL microphoneMuted;
@property BOOL shouldSetupAudioSession;
@property (retain) LTEAudioDevice *targetInputDevice;
@property (nonatomic, readonly) BOOL usingFloat;

+ (id)defaultLTEAudioManager;

- (void)AUIOSetup:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1 minSamplesPerFrame:(int)arg2 allowAudioRecording:(BOOL)arg3 ignoreRefCount:(BOOL)arg4 remoteCodecType:(unsigned long)arg5 remoteCodecSampleRate:(double)arg6 completionHandler:(id /* block */)arg7;
- (void)AUIOTeardown:(BOOL)arg1;
- (void)addConference:(id)arg1;
- (void)audioSessionClientDied:(int)arg1;
- (unsigned long)blockSizeForSampleRate:(double)arg1;
- (void)cleanupAUIOSetupWithResult:(long)arg1 completionHandler:(id /* block */)arg2;
- (int)clientPID;
- (struct opaqueCMSession { }*)cmSessionRef;
- (id)currentInputDevice;
- (void)enableMetering:(BOOL)arg1 isInputMeter:(BOOL)arg2;
- (BOOL)forceBufferFrames:(int*)arg1;
- (BOOL)forceSampleRate:(double*)arg1;
- (void)getVpioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2 cmd:(unsigned int)arg3;
- (id)init;
- (void)invalidateCurrentAudioParams;
- (BOOL)isGKVoiceChat;
- (BOOL)isMicrophoneMuted;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)isUsingSuppression;
- (void)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned long)arg9;
- (void)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (unsigned long)preferredHardwareSampleRate;
- (void)processEventQueue;
- (BOOL)projectionModeEnabledState;
- (void)removeConference:(id)arg1;
- (void)resetAudioSessionProperties;
- (void)setAudioSessionParameters:(id)arg1;
- (void)setAudioSessionProperties;
- (void)setBlockSize:(BOOL)arg1;
- (void)setBlockSizeDispatch:(BOOL)arg1;
- (void)setClientPID:(int)arg1;
- (BOOL)setCurrentInputDevice:(id)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (void)setIsGKVoiceChat:(BOOL)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setSampleRate;
- (void)setSamplesPerFrame:(int)arg1;
- (void)setShouldSetupAudioSession:(BOOL)arg1;
- (void)setTargetInputDevice:(id)arg1;
- (void)setupAudioNotifications;
- (unsigned long)setupAudioSession;
- (void)setupVPBlockFormat;
- (BOOL)shouldSetupAudioSession;
- (void)startAudioIOWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1 minSamplesPerFrame:(int)arg2 internalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3 allowAudioRecording:(BOOL)arg4 remoteCodecType:(unsigned long)arg5 remoteCodecSampleRate:(double)arg6 completionHandler:(id /* block */)arg7;
- (unsigned long)startAudioSessionWithCompletionHandler:(id /* block */)arg1 dispatchQueue:(id)arg2;
- (void)stopAudioIOWithCompletionHandler:(id /* block */)arg1;
- (void)stopAudioSession:(unsigned long)arg1;
- (id)targetInputDevice;
- (void)tearDownAudioIO:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)tearDownAudioSession:(unsigned long)arg1 forceTearDown:(BOOL)arg2;
- (BOOL)usingFloat;

@end
