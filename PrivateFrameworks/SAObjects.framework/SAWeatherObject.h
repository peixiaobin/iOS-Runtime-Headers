/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherObject : SADomainObject

@property (nonatomic, retain) SAWeatherCurrentConditions *currentConditions;
@property (nonatomic, copy) NSArray *dailyForecasts;
@property (nonatomic, copy) NSString *extendedForecastUrl;
@property (nonatomic, copy) NSArray *hourlyForecasts;
@property (nonatomic, retain) SAWeatherUnits *units;
@property (nonatomic, copy) NSString *view;
@property (nonatomic, retain) SAWeatherLocation *weatherLocation;
@property (nonatomic, copy) NSString *weatherRequest;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)currentConditions;
- (id)dailyForecasts;
- (id)encodedClassName;
- (id)extendedForecastUrl;
- (id)groupIdentifier;
- (id)hourlyForecasts;
- (void)setCurrentConditions:(id)arg1;
- (void)setDailyForecasts:(id)arg1;
- (void)setExtendedForecastUrl:(id)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setUnits:(id)arg1;
- (void)setView:(id)arg1;
- (void)setWeatherLocation:(id)arg1;
- (void)setWeatherRequest:(id)arg1;
- (id)units;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)view;
- (id)weatherLocation;
- (id)weatherRequest;

@end
