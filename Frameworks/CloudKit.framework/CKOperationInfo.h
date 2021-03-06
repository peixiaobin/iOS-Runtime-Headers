/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationInfo : NSObject <NSSecureCoding> {
    BOOL _allowsCellularAccess;
    NSString *_deviceIdentifier;
    NSString *_operationID;
    id _parentOperation;
    NSString *_parentSectionID;
    int _qualityOfService;
    CKContainerSetupInfo *_setupInfo;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    int _usesBackgroundSessionOverride;
}

@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSString *operationID;
@property (nonatomic) id parentOperation;
@property (nonatomic, retain) NSString *parentSectionID;
@property (nonatomic) int qualityOfService;
@property (nonatomic, retain) CKContainerSetupInfo *setupInfo;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic) int usesBackgroundSessionOverride;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)allowsCellularAccess;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)operationID;
- (id)parentOperation;
- (id)parentSectionID;
- (int)qualityOfService;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setSetupInfo:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setUsesBackgroundSessionOverride:(int)arg1;
- (id)setupInfo;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (int)usesBackgroundSessionOverride;

@end
