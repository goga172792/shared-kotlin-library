#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedScreen, SharedKotlinArray<T>;

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
__attribute__((swift_name("Screen")))
@interface SharedScreen : SharedKotlinEnum<SharedScreen *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedScreen *screennotinitialized __attribute__((swift_name("screennotinitialized")));
@property (class, readonly) SharedScreen *splash __attribute__((swift_name("splash")));
@property (class, readonly) SharedScreen *webview __attribute__((swift_name("webview")));
@property (class, readonly) SharedScreen *home __attribute__((swift_name("home")));
@property (class, readonly) SharedScreen *catalogue __attribute__((swift_name("catalogue")));
@property (class, readonly) SharedScreen *catalogueservicestab __attribute__((swift_name("catalogueservicestab")));
@property (class, readonly) SharedScreen *cataloguepersonaltab __attribute__((swift_name("cataloguepersonaltab")));
@property (class, readonly) SharedScreen *offerslist __attribute__((swift_name("offerslist")));
@property (class, readonly) SharedScreen *offerslistalltab __attribute__((swift_name("offerslistalltab")));
@property (class, readonly) SharedScreen *offerslistcashbacktab __attribute__((swift_name("offerslistcashbacktab")));
@property (class, readonly) SharedScreen *offerslistbonustab __attribute__((swift_name("offerslistbonustab")));
@property (class, readonly) SharedScreen *offerslistfavoritetab __attribute__((swift_name("offerslistfavoritetab")));
@property (class, readonly) SharedScreen *offerslistpersonaltab __attribute__((swift_name("offerslistpersonaltab")));
@property (class, readonly) SharedScreen *partnerslist __attribute__((swift_name("partnerslist")));
@property (class, readonly) SharedScreen *partnerslistalltab __attribute__((swift_name("partnerslistalltab")));
@property (class, readonly) SharedScreen *partnerslistcashbacktab __attribute__((swift_name("partnerslistcashbacktab")));
@property (class, readonly) SharedScreen *partnerslistbonustab __attribute__((swift_name("partnerslistbonustab")));
@property (class, readonly) SharedScreen *partnerslistgifttab __attribute__((swift_name("partnerslistgifttab")));
@property (class, readonly) SharedScreen *partnerslistfueltab __attribute__((swift_name("partnerslistfueltab")));
@property (class, readonly) SharedScreen *partnerslistfavoritetab __attribute__((swift_name("partnerslistfavoritetab")));
@property (class, readonly) SharedScreen *giftcardlist __attribute__((swift_name("giftcardlist")));
@property (class, readonly) SharedScreen *fuelcardlist __attribute__((swift_name("fuelcardlist")));
@property (class, readonly) SharedScreen *receivedgiftcardtab __attribute__((swift_name("receivedgiftcardtab")));
@property (class, readonly) SharedScreen *receivedbonuscardtab __attribute__((swift_name("receivedbonuscardtab")));
@property (class, readonly) SharedScreen *receivedfuelcardtab __attribute__((swift_name("receivedfuelcardtab")));
@property (class, readonly) SharedScreen *story __attribute__((swift_name("story")));
@property (class, readonly) SharedScreen *card __attribute__((swift_name("card")));
@property (class, readonly) SharedScreen *fuelcardinfo __attribute__((swift_name("fuelcardinfo")));
@property (class, readonly) SharedScreen *fuelcardbranches __attribute__((swift_name("fuelcardbranches")));
@property (class, readonly) SharedScreen *fuelmapbranches __attribute__((swift_name("fuelmapbranches")));
@property (class, readonly) SharedScreen *bonuscardinfo __attribute__((swift_name("bonuscardinfo")));
@property (class, readonly) SharedScreen *giftcardinfo __attribute__((swift_name("giftcardinfo")));
@property (class, readonly) SharedScreen *giftcardhistory __attribute__((swift_name("giftcardhistory")));
@property (class, readonly) SharedScreen *bonuscardhistory __attribute__((swift_name("bonuscardhistory")));
@property (class, readonly) SharedScreen *fuelcardhistory __attribute__((swift_name("fuelcardhistory")));
@property (class, readonly) SharedScreen *filter __attribute__((swift_name("filter")));
@property (class, readonly) SharedScreen *partnerinfo __attribute__((swift_name("partnerinfo")));
@property (class, readonly) SharedScreen *partneroffers __attribute__((swift_name("partneroffers")));
@property (class, readonly) SharedScreen *partnergallery __attribute__((swift_name("partnergallery")));
@property (class, readonly) SharedScreen *partnergiftcards __attribute__((swift_name("partnergiftcards")));
@property (class, readonly) SharedScreen *partnerbranches __attribute__((swift_name("partnerbranches")));
@property (class, readonly) SharedScreen *partnerfuel __attribute__((swift_name("partnerfuel")));
@property (class, readonly) SharedScreen *partnerfindus __attribute__((swift_name("partnerfindus")));
@property (class, readonly) SharedScreen *partnerbrands __attribute__((swift_name("partnerbrands")));
@property (class, readonly) SharedScreen *infopopup __attribute__((swift_name("infopopup")));
@property (class, readonly) SharedScreen *partnerfilterresult __attribute__((swift_name("partnerfilterresult")));
@property (class, readonly) SharedScreen *offerfilterresult __attribute__((swift_name("offerfilterresult")));
@property (class, readonly) SharedScreen *offer __attribute__((swift_name("offer")));
@property (class, readonly) SharedScreen *settings __attribute__((swift_name("settings")));
@property (class, readonly) SharedScreen *buygiftcardinput __attribute__((swift_name("buygiftcardinput")));
@property (class, readonly) SharedScreen *buygiftcardresult __attribute__((swift_name("buygiftcardresult")));
@property (class, readonly) SharedScreen *buyfuelcardinput __attribute__((swift_name("buyfuelcardinput")));
@property (class, readonly) SharedScreen *qrscanner __attribute__((swift_name("qrscanner")));
@property (class, readonly) SharedScreen *paymentmethod __attribute__((swift_name("paymentmethod")));
@property (class, readonly) SharedScreen *paymentsources __attribute__((swift_name("paymentsources")));
@property (class, readonly) SharedScreen *profile __attribute__((swift_name("profile")));
@property (class, readonly) SharedScreen *dealhistory __attribute__((swift_name("dealhistory")));
@property (class, readonly) SharedScreen *dealhistoryalltab __attribute__((swift_name("dealhistoryalltab")));
@property (class, readonly) SharedScreen *dealhistorypinnedtab __attribute__((swift_name("dealhistorypinnedtab")));
@property (class, readonly) SharedScreen *dealhistoryfilter __attribute__((swift_name("dealhistoryfilter")));
@property (class, readonly) SharedScreen *dealhistorysource __attribute__((swift_name("dealhistorysource")));
@property (class, readonly) SharedScreen *dealhistoryccm __attribute__((swift_name("dealhistoryccm")));
@property (class, readonly) SharedScreen *notification __attribute__((swift_name("notification")));
@property (class, readonly) SharedScreen *accountswitchingpopup __attribute__((swift_name("accountswitchingpopup")));
@property (class, readonly) SharedScreen *pincodeinput __attribute__((swift_name("pincodeinput")));
@property (class, readonly) SharedScreen *pincoderecoverymethods __attribute__((swift_name("pincoderecoverymethods")));
@property (class, readonly) SharedScreen *pincodereset __attribute__((swift_name("pincodereset")));
@property (class, readonly) SharedScreen *changepincode __attribute__((swift_name("changepincode")));
@property (class, readonly) SharedScreen *security __attribute__((swift_name("security")));
@property (class, readonly) SharedScreen *profileadditionalphone __attribute__((swift_name("profileadditionalphone")));
@property (class, readonly) SharedScreen *profileadditionalemail __attribute__((swift_name("profileadditionalemail")));
@property (class, readonly) SharedScreen *profilephoneemailverificationcode __attribute__((swift_name("profilephoneemailverificationcode")));
@property (class, readonly) SharedScreen *fuelcardsharedcontacts __attribute__((swift_name("fuelcardsharedcontacts")));
@property (class, readonly) SharedScreen *tutorial __attribute__((swift_name("tutorial")));
@property (class, readonly) SharedScreen *profileavatars __attribute__((swift_name("profileavatars")));
@property (class, readonly) SharedScreen *contactus __attribute__((swift_name("contactus")));
@property (class, readonly) SharedScreen *cardtutorial __attribute__((swift_name("cardtutorial")));
@property (class, readonly) SharedScreen *receivedcardinfologinpopup __attribute__((swift_name("receivedcardinfologinpopup")));
@property (class, readonly) SharedScreen *loginmethods __attribute__((swift_name("loginmethods")));
@property (class, readonly) SharedScreen *loginphoneinput __attribute__((swift_name("loginphoneinput")));
@property (class, readonly) SharedScreen *loginverificationcode __attribute__((swift_name("loginverificationcode")));
@property (class, readonly) SharedScreen *loginpincodesetup __attribute__((swift_name("loginpincodesetup")));
@property (class, readonly) SharedScreen *loginpincodeinput __attribute__((swift_name("loginpincodeinput")));
@property (class, readonly) SharedScreen *loginbiometricid __attribute__((swift_name("loginbiometricid")));
@property (class, readonly) SharedScreen *loginsmstimer __attribute__((swift_name("loginsmstimer")));
@property (class, readonly) SharedScreen *sellbonuscard __attribute__((swift_name("sellbonuscard")));
@property (class, readonly) SharedScreen *bonusauction __attribute__((swift_name("bonusauction")));
@property (class, readonly) SharedScreen *bonusauctionselltab __attribute__((swift_name("bonusauctionselltab")));
@property (class, readonly) SharedScreen *bonusauctionbuytab __attribute__((swift_name("bonusauctionbuytab")));
@property (class, readonly) SharedScreen *bonusauctionwishlist __attribute__((swift_name("bonusauctionwishlist")));
@property (class, readonly) SharedScreen *bonusauctionsellfilterresult __attribute__((swift_name("bonusauctionsellfilterresult")));
@property (class, readonly) SharedScreen *bonusauctionbuyfilterresult __attribute__((swift_name("bonusauctionbuyfilterresult")));
@property (class, readonly) SharedScreen *bonusauctionwishlistfilterresult __attribute__((swift_name("bonusauctionwishlistfilterresult")));
@property (class, readonly) SharedScreen *relatedpartnermerchants __attribute__((swift_name("relatedpartnermerchants")));
@property (class, readonly) SharedScreen *partnerauction __attribute__((swift_name("partnerauction")));
@property (class, readonly) SharedScreen *buycards __attribute__((swift_name("buycards")));
@property (class, readonly) SharedScreen *idcoinwalletinfo __attribute__((swift_name("idcoinwalletinfo")));
@property (class, readonly) SharedScreen *idcoinwallethistory __attribute__((swift_name("idcoinwallethistory")));
+ (SharedKotlinArray<SharedScreen *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedScreen *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface SharedPlatform_iosKt : SharedBase
+ (id<SharedPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
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
