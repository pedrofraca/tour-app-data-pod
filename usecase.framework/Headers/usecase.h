#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UsecaseDomainStage, UsecaseSetStageAsFavoriteParam, UsecaseDomainRankeableStage;

@protocol UsecaseGetStagesUseCase, UsecaseStageRepository, UsecaseSetStageAsFavoriteUseCase, UsecaseFavouritesRepository, UsecaseGetTopRankedStagesUseCase, UsecaseRankeableStageRepository;

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
@interface UsecaseBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface UsecaseBase (UsecaseBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface UsecaseMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface UsecaseMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorUsecaseKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface UsecaseNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface UsecaseByte : UsecaseNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface UsecaseUByte : UsecaseNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface UsecaseShort : UsecaseNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface UsecaseUShort : UsecaseNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface UsecaseInt : UsecaseNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface UsecaseUInt : UsecaseNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface UsecaseLong : UsecaseNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface UsecaseULong : UsecaseNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface UsecaseFloat : UsecaseNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface UsecaseDouble : UsecaseNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface UsecaseBoolean : UsecaseNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("GetStagesUseCase")))
@protocol UsecaseGetStagesUseCase
@required
- (NSArray<UsecaseDomainStage *> *)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetStagesUseCaseImpl")))
@interface UsecaseGetStagesUseCaseImpl : UsecaseBase <UsecaseGetStagesUseCase>
- (instancetype)initWithRepository:(id<UsecaseStageRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (NSArray<UsecaseDomainStage *> *)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((swift_name("StageRepository")))
@protocol UsecaseStageRepository
@required
- (UsecaseDomainStage * _Nullable)getStageByIdStageId:(int32_t)stageId __attribute__((swift_name("getStageById(stageId:)")));
- (NSArray<UsecaseDomainStage *> *)refresh __attribute__((swift_name("refresh()")));
@property (readonly) NSArray<UsecaseDomainStage *> *stages __attribute__((swift_name("stages")));
@end;

__attribute__((swift_name("SetStageAsFavoriteUseCase")))
@protocol UsecaseSetStageAsFavoriteUseCase
@required
- (BOOL)invokeParam:(UsecaseSetStageAsFavoriteParam *)param __attribute__((swift_name("invoke(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetStageAsFavoriteUseCaseImpl")))
@interface UsecaseSetStageAsFavoriteUseCaseImpl : UsecaseBase <UsecaseSetStageAsFavoriteUseCase>
- (instancetype)initWithRepository:(id<UsecaseFavouritesRepository>)repository stageRepository:(id<UsecaseStageRepository>)stageRepository __attribute__((swift_name("init(repository:stageRepository:)"))) __attribute__((objc_designated_initializer));
- (BOOL)invokeParam:(UsecaseSetStageAsFavoriteParam *)param __attribute__((swift_name("invoke(param:)")));
@end;

__attribute__((swift_name("FavouritesRepository")))
@protocol UsecaseFavouritesRepository
@required
- (NSArray<UsecaseSetStageAsFavoriteParam *> *)getFavouriteStagesByUsernameUsername:(NSString *)username __attribute__((swift_name("getFavouriteStagesByUsername(username:)")));
- (UsecaseSetStageAsFavoriteParam * _Nullable)getStageByUsernameStageId:(int32_t)stageId username:(NSString *)username __attribute__((swift_name("getStageByUsername(stageId:username:)")));
- (BOOL)setFavouriteStageParam:(UsecaseSetStageAsFavoriteParam *)param __attribute__((swift_name("setFavouriteStage(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetStageAsFavoriteParam")))
@interface UsecaseSetStageAsFavoriteParam : UsecaseBase
- (instancetype)initWithUsername:(NSString *)username stageId:(int32_t)stageId favouriteState:(BOOL)favouriteState __attribute__((swift_name("init(username:stageId:favouriteState:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (UsecaseSetStageAsFavoriteParam *)doCopyUsername:(NSString *)username stageId:(int32_t)stageId favouriteState:(BOOL)favouriteState __attribute__((swift_name("doCopy(username:stageId:favouriteState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL favouriteState __attribute__((swift_name("favouriteState")));
@property (readonly) int32_t stageId __attribute__((swift_name("stageId")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((swift_name("GetTopRankedStagesUseCase")))
@protocol UsecaseGetTopRankedStagesUseCase
@required
- (NSArray<UsecaseDomainRankeableStage *> *)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTopRankedStagesUseCaseImpl")))
@interface UsecaseGetTopRankedStagesUseCaseImpl : UsecaseBase <UsecaseGetTopRankedStagesUseCase>
- (instancetype)initWithRepository:(id<UsecaseRankeableStageRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (NSArray<UsecaseDomainRankeableStage *> *)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((swift_name("RankeableStageRepository")))
@protocol UsecaseRankeableStageRepository
@required
- (NSArray<UsecaseDomainRankeableStage *> *)refresh __attribute__((swift_name("refresh()")));
@property (readonly) NSArray<UsecaseDomainRankeableStage *> *rankeableStages __attribute__((swift_name("rankeableStages")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainStage")))
@interface UsecaseDomainStage : UsecaseBase
- (instancetype)initWithName:(NSString *)name stage:(int32_t)stage winner:(NSString * _Nullable)winner leader:(NSString * _Nullable)leader images:(NSArray<NSString *> * _Nullable)images description:(NSString * _Nullable)description km:(NSString * _Nullable)km imgUrl:(NSString * _Nullable)imgUrl profileImgUrl:(NSString * _Nullable)profileImgUrl date:(NSString * _Nullable)date averageSpeed:(NSString * _Nullable)averageSpeed startFinish:(NSString * _Nullable)startFinish __attribute__((swift_name("init(name:stage:winner:leader:images:description:km:imgUrl:profileImgUrl:date:averageSpeed:startFinish:)"))) __attribute__((objc_designated_initializer));
- (BOOL)completed __attribute__((swift_name("completed()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (UsecaseDomainStage *)doCopyName:(NSString *)name stage:(int32_t)stage winner:(NSString * _Nullable)winner leader:(NSString * _Nullable)leader images:(NSArray<NSString *> * _Nullable)images description:(NSString * _Nullable)description km:(NSString * _Nullable)km imgUrl:(NSString * _Nullable)imgUrl profileImgUrl:(NSString * _Nullable)profileImgUrl date:(NSString * _Nullable)date averageSpeed:(NSString * _Nullable)averageSpeed startFinish:(NSString * _Nullable)startFinish __attribute__((swift_name("doCopy(name:stage:winner:leader:images:description:km:imgUrl:profileImgUrl:date:averageSpeed:startFinish:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable averageSpeed __attribute__((swift_name("averageSpeed")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<NSString *> * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSString * _Nullable imgUrl __attribute__((swift_name("imgUrl")));
@property (readonly) NSString * _Nullable km __attribute__((swift_name("km")));
@property (readonly) NSString * _Nullable leader __attribute__((swift_name("leader")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable profileImgUrl __attribute__((swift_name("profileImgUrl")));
@property (readonly) int32_t stage __attribute__((swift_name("stage")));
@property (readonly) NSString * _Nullable startFinish __attribute__((swift_name("startFinish")));
@property (readonly) NSString * _Nullable winner __attribute__((swift_name("winner")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainRankeableStage")))
@interface UsecaseDomainRankeableStage : UsecaseBase
- (instancetype)initWithId:(int32_t)id voters:(NSArray<NSString *> *)voters __attribute__((swift_name("init(id:voters:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (UsecaseDomainRankeableStage *)doCopyId:(int32_t)id voters:(NSArray<NSString *> *)voters __attribute__((swift_name("doCopy(id:voters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> *voters __attribute__((swift_name("voters")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
