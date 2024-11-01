#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedScreensData, SharedKotlinArray<T>;

@protocol SharedPlatform, SharedKotlinComparable, SharedKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doSomething __attribute__((swift_name("doSomething()")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol SharedPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface SharedIOSPlatform : SharedBase <SharedPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreensData")))
@interface SharedScreensData : SharedKotlinEnum<SharedScreensData *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedScreensData *screennotinitialized __attribute__((swift_name("screennotinitialized")));
@property (class, readonly) SharedScreensData *splash __attribute__((swift_name("splash")));
@property (class, readonly) SharedScreensData *webview __attribute__((swift_name("webview")));
@property (class, readonly) SharedScreensData *home __attribute__((swift_name("home")));
@property (class, readonly) SharedScreensData *catalogue __attribute__((swift_name("catalogue")));
@property (class, readonly) SharedScreensData *catalogueservicestab __attribute__((swift_name("catalogueservicestab")));
@property (class, readonly) SharedScreensData *cataloguepersonaltab __attribute__((swift_name("cataloguepersonaltab")));
@property (class, readonly) SharedScreensData *offerslist __attribute__((swift_name("offerslist")));
@property (class, readonly) SharedScreensData *offerslistalltab __attribute__((swift_name("offerslistalltab")));
@property (class, readonly) SharedScreensData *offerslistcashbacktab __attribute__((swift_name("offerslistcashbacktab")));
@property (class, readonly) SharedScreensData *offerslistbonustab __attribute__((swift_name("offerslistbonustab")));
@property (class, readonly) SharedScreensData *offerslistfavoritetab __attribute__((swift_name("offerslistfavoritetab")));
@property (class, readonly) SharedScreensData *offerslistpersonaltab __attribute__((swift_name("offerslistpersonaltab")));
@property (class, readonly) SharedScreensData *partnerslist __attribute__((swift_name("partnerslist")));
@property (class, readonly) SharedScreensData *partnerslistalltab __attribute__((swift_name("partnerslistalltab")));
@property (class, readonly) SharedScreensData *partnerslistcashbacktab __attribute__((swift_name("partnerslistcashbacktab")));
@property (class, readonly) SharedScreensData *partnerslistbonustab __attribute__((swift_name("partnerslistbonustab")));
@property (class, readonly) SharedScreensData *partnerslistgifttab __attribute__((swift_name("partnerslistgifttab")));
@property (class, readonly) SharedScreensData *partnerslistfueltab __attribute__((swift_name("partnerslistfueltab")));
@property (class, readonly) SharedScreensData *partnerslistfavoritetab __attribute__((swift_name("partnerslistfavoritetab")));
@property (class, readonly) SharedScreensData *giftcardlist __attribute__((swift_name("giftcardlist")));
@property (class, readonly) SharedScreensData *fuelcardlist __attribute__((swift_name("fuelcardlist")));
@property (class, readonly) SharedScreensData *receivedgiftcardtab __attribute__((swift_name("receivedgiftcardtab")));
@property (class, readonly) SharedScreensData *receivedbonuscardtab __attribute__((swift_name("receivedbonuscardtab")));
@property (class, readonly) SharedScreensData *receivedfuelcardtab __attribute__((swift_name("receivedfuelcardtab")));
@property (class, readonly) SharedScreensData *story __attribute__((swift_name("story")));
@property (class, readonly) SharedScreensData *card __attribute__((swift_name("card")));
@property (class, readonly) SharedScreensData *fuelcardinfo __attribute__((swift_name("fuelcardinfo")));
@property (class, readonly) SharedScreensData *fuelcardbranches __attribute__((swift_name("fuelcardbranches")));
@property (class, readonly) SharedScreensData *fuelmapbranches __attribute__((swift_name("fuelmapbranches")));
@property (class, readonly) SharedScreensData *bonuscardinfo __attribute__((swift_name("bonuscardinfo")));
@property (class, readonly) SharedScreensData *giftcardinfo __attribute__((swift_name("giftcardinfo")));
@property (class, readonly) SharedScreensData *giftcardhistory __attribute__((swift_name("giftcardhistory")));
@property (class, readonly) SharedScreensData *bonuscardhistory __attribute__((swift_name("bonuscardhistory")));
@property (class, readonly) SharedScreensData *fuelcardhistory __attribute__((swift_name("fuelcardhistory")));
@property (class, readonly) SharedScreensData *filter __attribute__((swift_name("filter")));
@property (class, readonly) SharedScreensData *partnerinfo __attribute__((swift_name("partnerinfo")));
@property (class, readonly) SharedScreensData *partneroffers __attribute__((swift_name("partneroffers")));
@property (class, readonly) SharedScreensData *partnergallery __attribute__((swift_name("partnergallery")));
@property (class, readonly) SharedScreensData *partnergiftcards __attribute__((swift_name("partnergiftcards")));
@property (class, readonly) SharedScreensData *partnerbranches __attribute__((swift_name("partnerbranches")));
@property (class, readonly) SharedScreensData *partnerfuel __attribute__((swift_name("partnerfuel")));
@property (class, readonly) SharedScreensData *partnerfindus __attribute__((swift_name("partnerfindus")));
@property (class, readonly) SharedScreensData *partnerbrands __attribute__((swift_name("partnerbrands")));
@property (class, readonly) SharedScreensData *infopopup __attribute__((swift_name("infopopup")));
@property (class, readonly) SharedScreensData *partnerfilterresult __attribute__((swift_name("partnerfilterresult")));
@property (class, readonly) SharedScreensData *offerfilterresult __attribute__((swift_name("offerfilterresult")));
@property (class, readonly) SharedScreensData *offer __attribute__((swift_name("offer")));
@property (class, readonly) SharedScreensData *settings __attribute__((swift_name("settings")));
@property (class, readonly) SharedScreensData *buygiftcardinput __attribute__((swift_name("buygiftcardinput")));
@property (class, readonly) SharedScreensData *buygiftcardresult __attribute__((swift_name("buygiftcardresult")));
@property (class, readonly) SharedScreensData *buyfuelcardinput __attribute__((swift_name("buyfuelcardinput")));
@property (class, readonly) SharedScreensData *qrscanner __attribute__((swift_name("qrscanner")));
@property (class, readonly) SharedScreensData *paymentmethod __attribute__((swift_name("paymentmethod")));
@property (class, readonly) SharedScreensData *paymentsources __attribute__((swift_name("paymentsources")));
@property (class, readonly) SharedScreensData *profile __attribute__((swift_name("profile")));
@property (class, readonly) SharedScreensData *dealhistory __attribute__((swift_name("dealhistory")));
@property (class, readonly) SharedScreensData *dealhistoryalltab __attribute__((swift_name("dealhistoryalltab")));
@property (class, readonly) SharedScreensData *dealhistorypinnedtab __attribute__((swift_name("dealhistorypinnedtab")));
@property (class, readonly) SharedScreensData *dealhistoryfilter __attribute__((swift_name("dealhistoryfilter")));
@property (class, readonly) SharedScreensData *dealhistorysource __attribute__((swift_name("dealhistorysource")));
@property (class, readonly) SharedScreensData *dealhistoryccm __attribute__((swift_name("dealhistoryccm")));
@property (class, readonly) SharedScreensData *notification __attribute__((swift_name("notification")));
@property (class, readonly) SharedScreensData *accountswitchingpopup __attribute__((swift_name("accountswitchingpopup")));
@property (class, readonly) SharedScreensData *pincodeinput __attribute__((swift_name("pincodeinput")));
@property (class, readonly) SharedScreensData *pincoderecoverymethods __attribute__((swift_name("pincoderecoverymethods")));
@property (class, readonly) SharedScreensData *pincodereset __attribute__((swift_name("pincodereset")));
@property (class, readonly) SharedScreensData *changepincode __attribute__((swift_name("changepincode")));
@property (class, readonly) SharedScreensData *security __attribute__((swift_name("security")));
@property (class, readonly) SharedScreensData *profileadditionalphone __attribute__((swift_name("profileadditionalphone")));
@property (class, readonly) SharedScreensData *profileadditionalemail __attribute__((swift_name("profileadditionalemail")));
@property (class, readonly) SharedScreensData *profilephoneemailverificationcode __attribute__((swift_name("profilephoneemailverificationcode")));
@property (class, readonly) SharedScreensData *fuelcardsharedcontacts __attribute__((swift_name("fuelcardsharedcontacts")));
@property (class, readonly) SharedScreensData *tutorial __attribute__((swift_name("tutorial")));
@property (class, readonly) SharedScreensData *profileavatars __attribute__((swift_name("profileavatars")));
@property (class, readonly) SharedScreensData *contactus __attribute__((swift_name("contactus")));
@property (class, readonly) SharedScreensData *cardtutorial __attribute__((swift_name("cardtutorial")));
@property (class, readonly) SharedScreensData *receivedcardinfologinpopup __attribute__((swift_name("receivedcardinfologinpopup")));
@property (class, readonly) SharedScreensData *loginmethods __attribute__((swift_name("loginmethods")));
@property (class, readonly) SharedScreensData *loginphoneinput __attribute__((swift_name("loginphoneinput")));
@property (class, readonly) SharedScreensData *loginverificationcode __attribute__((swift_name("loginverificationcode")));
@property (class, readonly) SharedScreensData *loginpincodesetup __attribute__((swift_name("loginpincodesetup")));
@property (class, readonly) SharedScreensData *loginpincodeinput __attribute__((swift_name("loginpincodeinput")));
@property (class, readonly) SharedScreensData *loginbiometricid __attribute__((swift_name("loginbiometricid")));
@property (class, readonly) SharedScreensData *loginsmstimer __attribute__((swift_name("loginsmstimer")));
@property (class, readonly) SharedScreensData *sellbonuscard __attribute__((swift_name("sellbonuscard")));
@property (class, readonly) SharedScreensData *bonusauction __attribute__((swift_name("bonusauction")));
@property (class, readonly) SharedScreensData *bonusauctionselltab __attribute__((swift_name("bonusauctionselltab")));
@property (class, readonly) SharedScreensData *bonusauctionbuytab __attribute__((swift_name("bonusauctionbuytab")));
@property (class, readonly) SharedScreensData *bonusauctionwishlist __attribute__((swift_name("bonusauctionwishlist")));
@property (class, readonly) SharedScreensData *bonusauctionsellfilterresult __attribute__((swift_name("bonusauctionsellfilterresult")));
@property (class, readonly) SharedScreensData *bonusauctionbuyfilterresult __attribute__((swift_name("bonusauctionbuyfilterresult")));
@property (class, readonly) SharedScreensData *bonusauctionwishlistfilterresult __attribute__((swift_name("bonusauctionwishlistfilterresult")));
@property (class, readonly) SharedScreensData *relatedpartnermerchants __attribute__((swift_name("relatedpartnermerchants")));
@property (class, readonly) SharedScreensData *partnerauction __attribute__((swift_name("partnerauction")));
@property (class, readonly) SharedScreensData *buycards __attribute__((swift_name("buycards")));
@property (class, readonly) SharedScreensData *idcoinwalletinfo __attribute__((swift_name("idcoinwalletinfo")));
@property (class, readonly) SharedScreensData *idcoinwallethistory __attribute__((swift_name("idcoinwallethistory")));
+ (SharedKotlinArray<SharedScreensData *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedScreensData *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeClassKt")))
@interface SharedSomeClassKt : SharedBase
+ (NSString *)randomUUID __attribute__((swift_name("randomUUID()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
