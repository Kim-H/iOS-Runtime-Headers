/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAJobConstraints : NSObject <NSCopying> {
    BOOL  _canRunAutomaticBackgroundAnalysis;
    BOOL  _canRunAutomaticForegroundAnalysis;
    BOOL  _canRunUserInitiatedForegroundAnalysis;
    BOOL  _canUseNetwork;
}

@property (nonatomic, readonly) BOOL canRunAutomaticBackgroundAnalysis;
@property (nonatomic, readonly) BOOL canRunAutomaticForegroundAnalysis;
@property (nonatomic, readonly) BOOL canRunUserInitiatedForegroundAnalysis;
@property (nonatomic, readonly) BOOL canUseNetwork;

+ (id)constraintsWithAllAllowances;
+ (id)constraintsWithNoAllowances;

- (void)applyConstraints:(id)arg1 usingMask:(id)arg2;
- (id)asBitString;
- (BOOL)canRunAutomaticBackgroundAnalysis;
- (BOOL)canRunAutomaticForegroundAnalysis;
- (BOOL)canRunUserInitiatedForegroundAnalysis;
- (BOOL)canUseNetwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initFromBitString:(id)arg1;
- (id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)arg1 canRunAutomaticForegroundAnalysis:(BOOL)arg2 canRunUserInitiatedForegroundAnalysis:(BOOL)arg3 canUseNetwork:(BOOL)arg4;
- (BOOL)isEqualToConstraints:(id)arg1;
- (id)statusAsDictionary;

@end
