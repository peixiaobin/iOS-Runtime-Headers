/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAirplayRoute : NSObject {
    PUAirplaySession *_airplaySession;
    NSString *_audioScreenDNSName;
    BOOL _audioScreenDNSNameP2POnly;
    MPAVRoute *_avRoute;
    MPAVRoute *_avScreenRoute;
    NSString *_displayName;
    BOOL _isCurrentRoute;
    BOOL _isDefaultRoute;
    BOOL _isPasswordPIN;
    BOOL _isSecondScreenActive;
    NSString *_photoVideoDNSName;
    BOOL _photoVideoDNSNameP2POnly;
    BOOL _requiresPassword;
    NSDictionary *_routeDescription;
    NSString *_routeUID;
    NSDictionary *_screenRouteDescription;
    BOOL _supportsAudio;
    BOOL _supportsMirroring;
    BOOL _supportsPhotos;
    BOOL _supportsSlideshow;
    BOOL _supportsVideo;
}

@property (nonatomic, readonly) PUAirplaySession *airplaySession;
@property (nonatomic, readonly, copy) NSString *audioScreenDNSName;
@property (nonatomic, readonly) BOOL audioScreenDNSNameP2POnly;
@property (nonatomic, readonly) MPAVRoute *avRoute;
@property (nonatomic, readonly) MPAVRoute *avScreenRoute;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) BOOL isCurrentRoute;
@property (nonatomic, readonly) BOOL isDefaultRoute;
@property (nonatomic, readonly) BOOL isPasswordPIN;
@property (nonatomic, readonly) BOOL isSecondScreenActive;
@property (nonatomic, readonly, copy) NSString *lastKnownPassword;
@property (nonatomic, readonly, copy) NSString *photoVideoDNSName;
@property (nonatomic, readonly) BOOL photoVideoDNSNameP2POnly;
@property (nonatomic, readonly) BOOL requiresPassword;
@property (nonatomic, readonly, copy) NSDictionary *routeDescription;
@property (nonatomic, readonly, copy) NSString *routeUID;
@property (nonatomic, readonly, copy) NSDictionary *screenRouteDescription;
@property (nonatomic, readonly) BOOL supportsAudio;
@property (nonatomic, readonly) BOOL supportsMirroring;
@property (nonatomic, readonly) BOOL supportsPhotos;
@property (nonatomic, readonly) BOOL supportsSlideshow;
@property (nonatomic, readonly) BOOL supportsVideo;

- (void).cxx_destruct;
- (BOOL)_sameAsAVRoute:(id)arg1;
- (void)_updateFromAVRoutes;
- (id)airplaySession;
- (id)audioScreenDNSName;
- (BOOL)audioScreenDNSNameP2POnly;
- (id)avRoute;
- (id)avScreenRoute;
- (id)description;
- (id)displayName;
- (BOOL)doesAVRouteReferencesSameRoute:(id)arg1;
- (id)initWithAVRoute:(id)arg1;
- (BOOL)isCurrentRoute;
- (BOOL)isDefaultRoute;
- (BOOL)isPasswordPIN;
- (BOOL)isSameRoute:(id)arg1;
- (BOOL)isSecondScreenActive;
- (id)lastKnownPassword;
- (void)makeRouteCurrentWithCompletion:(id /* block */)arg1;
- (id)photoVideoDNSName;
- (BOOL)photoVideoDNSNameP2POnly;
- (BOOL)requiresPassword;
- (void)resignAsCurrentRoute;
- (id)routeDescription;
- (id)routeUID;
- (id)screenRouteDescription;
- (BOOL)supportsAudio;
- (BOOL)supportsMirroring;
- (BOOL)supportsPhotos;
- (BOOL)supportsSlideshow;
- (BOOL)supportsVideo;
- (void)updateFromAVRoute:(id)arg1;

@end
