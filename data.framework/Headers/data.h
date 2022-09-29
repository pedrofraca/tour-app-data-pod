#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class DataStagesRepositoryImpl, DataDomainStage, DataUsecaseSetStageAsFavoriteParam, DataDomainRankeableStage, DataDomainStageClassification, DataDomainClassification;

@protocol DataReadOnlyDataSource, DataReadOnlyDataSourceWithFilter, DataWriteDataSource, DataUsecaseStageRepository, DataUsecaseFavouritesRepository, DataUsecaseRankeableStageRepository, DataClassificationRepository, DataWriteDataSourceWithFilter;

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
@interface DataBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface DataBase (DataBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface DataMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface DataMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorDataKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface DataNumber : NSNumber
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
@interface DataByte : DataNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface DataUByte : DataNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface DataShort : DataNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface DataUShort : DataNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface DataInt : DataNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface DataUInt : DataNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface DataLong : DataNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface DataULong : DataNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface DataFloat : DataNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface DataDouble : DataNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface DataBoolean : DataNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("ReadOnlyDataSource")))
@protocol DataReadOnlyDataSource
@required
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
@end;

__attribute__((swift_name("ReadOnlyDataSourceWithFilter")))
@protocol DataReadOnlyDataSourceWithFilter <DataReadOnlyDataSource>
@required
- (id _Nullable)getParam:(id _Nullable)param __attribute__((swift_name("get(param:)")));
@end;

__attribute__((swift_name("WriteDataSource")))
@protocol DataWriteDataSource <DataReadOnlyDataSource>
@required
- (BOOL)saveItem:(id _Nullable)item __attribute__((swift_name("save(item:)")));
@end;

__attribute__((swift_name("WriteDataSourceWithFilter")))
@protocol DataWriteDataSourceWithFilter <DataReadOnlyDataSourceWithFilter>
@required
- (BOOL)saveItem:(id _Nullable)item param:(id _Nullable)param __attribute__((swift_name("save(item:param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StagesRepositoryFactory")))
@interface DataStagesRepositoryFactory : DataBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (DataStagesRepositoryImpl *)buildApiDataSource:(id<DataReadOnlyDataSource>)apiDataSource databaseDataSource:(id<DataWriteDataSource>)databaseDataSource __attribute__((swift_name("build(apiDataSource:databaseDataSource:)")));
@end;

__attribute__((swift_name("UsecaseStageRepository")))
@protocol DataUsecaseStageRepository
@required
- (DataDomainStage * _Nullable)getStageByIdStageId:(int32_t)stageId __attribute__((swift_name("getStageById(stageId:)")));
- (NSArray<DataDomainStage *> *)refresh __attribute__((swift_name("refresh()")));
@property (readonly) NSArray<DataDomainStage *> *stages __attribute__((swift_name("stages")));
@end;

__attribute__((swift_name("StagesRepositoryImpl")))
@interface DataStagesRepositoryImpl : DataBase <DataUsecaseStageRepository>
- (instancetype)initWithReadDataSource:(id<DataReadOnlyDataSource>)readDataSource persistenceDataSource:(id<DataWriteDataSource>)persistenceDataSource __attribute__((swift_name("init(readDataSource:persistenceDataSource:)"))) __attribute__((objc_designated_initializer));
- (DataDomainStage * _Nullable)getStageByIdStageId:(int32_t)stageId __attribute__((swift_name("getStageById(stageId:)")));
- (NSArray<DataDomainStage *> *)refresh __attribute__((swift_name("refresh()")));
@property (readonly) NSArray<DataDomainStage *> *stages __attribute__((swift_name("stages")));
@end;

__attribute__((swift_name("UsecaseFavouritesRepository")))
@protocol DataUsecaseFavouritesRepository
@required
- (NSArray<DataUsecaseSetStageAsFavoriteParam *> *)getFavouriteStagesByUsernameUsername:(NSString *)username __attribute__((swift_name("getFavouriteStagesByUsername(username:)")));
- (DataUsecaseSetStageAsFavoriteParam * _Nullable)getStageByUsernameStageId:(int32_t)stageId username:(NSString *)username __attribute__((swift_name("getStageByUsername(stageId:username:)")));
- (BOOL)setFavouriteStageParam:(DataUsecaseSetStageAsFavoriteParam *)param __attribute__((swift_name("setFavouriteStage(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FavouritesRepositoryImpl")))
@interface DataFavouritesRepositoryImpl : DataBase <DataUsecaseFavouritesRepository>
- (instancetype)initWithSetFavouriteApi:(id<DataWriteDataSource>)setFavouriteApi favouritesListApi:(id<DataReadOnlyDataSourceWithFilter>)favouritesListApi __attribute__((swift_name("init(setFavouriteApi:favouritesListApi:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DataUsecaseSetStageAsFavoriteParam *> *)getFavouriteStagesByUsernameUsername:(NSString *)username __attribute__((swift_name("getFavouriteStagesByUsername(username:)")));
- (DataUsecaseSetStageAsFavoriteParam * _Nullable)getStageByUsernameStageId:(int32_t)stageId username:(NSString *)username __attribute__((swift_name("getStageByUsername(stageId:username:)")));
- (BOOL)setFavouriteStageParam:(DataUsecaseSetStageAsFavoriteParam *)param __attribute__((swift_name("setFavouriteStage(param:)")));
@end;

__attribute__((swift_name("UsecaseRankeableStageRepository")))
@protocol DataUsecaseRankeableStageRepository
@required
- (NSArray<DataDomainRankeableStage *> *)refresh __attribute__((swift_name("refresh()")));
@property (readonly) NSArray<DataDomainRankeableStage *> *rankeableStages __attribute__((swift_name("rankeableStages")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RankeableStageRepositoryImpl")))
@interface DataRankeableStageRepositoryImpl : DataBase <DataUsecaseRankeableStageRepository>
- (instancetype)initWithDataSource:(id<DataReadOnlyDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DataDomainRankeableStage *> *)refresh __attribute__((swift_name("refresh()")));
@property (readonly) NSArray<DataDomainRankeableStage *> *rankeableStages __attribute__((swift_name("rankeableStages")));
@end;

__attribute__((swift_name("ClassificationRepository")))
@protocol DataClassificationRepository
@required
- (DataDomainStageClassification *)getClassificationForStageStage:(NSString *)stage __attribute__((swift_name("getClassificationForStage(stage:)")));
- (DataDomainStageClassification *)refreshForStageStage:(NSString *)stage __attribute__((swift_name("refreshForStage(stage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassificationRepositoryImpl")))
@interface DataClassificationRepositoryImpl : DataBase <DataClassificationRepository>
- (instancetype)initWithApi:(id<DataReadOnlyDataSourceWithFilter>)api db:(id<DataWriteDataSourceWithFilter>)db __attribute__((swift_name("init(api:db:)"))) __attribute__((objc_designated_initializer));
- (DataDomainStageClassification *)getClassificationForStageStage:(NSString *)stage __attribute__((swift_name("getClassificationForStage(stage:)")));
- (DataDomainStageClassification *)refreshForStageStage:(NSString *)stage __attribute__((swift_name("refreshForStage(stage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainStage")))
@interface DataDomainStage : DataBase
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
- (DataDomainStage *)doCopyName:(NSString *)name stage:(int32_t)stage winner:(NSString * _Nullable)winner leader:(NSString * _Nullable)leader images:(NSArray<NSString *> * _Nullable)images description:(NSString * _Nullable)description km:(NSString * _Nullable)km imgUrl:(NSString * _Nullable)imgUrl profileImgUrl:(NSString * _Nullable)profileImgUrl date:(NSString * _Nullable)date averageSpeed:(NSString * _Nullable)averageSpeed startFinish:(NSString * _Nullable)startFinish __attribute__((swift_name("doCopy(name:stage:winner:leader:images:description:km:imgUrl:profileImgUrl:date:averageSpeed:startFinish:)")));
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
__attribute__((swift_name("UsecaseSetStageAsFavoriteParam")))
@interface DataUsecaseSetStageAsFavoriteParam : DataBase
- (instancetype)initWithUsername:(NSString *)username stageId:(int32_t)stageId favouriteState:(BOOL)favouriteState __attribute__((swift_name("init(username:stageId:favouriteState:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (DataUsecaseSetStageAsFavoriteParam *)doCopyUsername:(NSString *)username stageId:(int32_t)stageId favouriteState:(BOOL)favouriteState __attribute__((swift_name("doCopy(username:stageId:favouriteState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL favouriteState __attribute__((swift_name("favouriteState")));
@property (readonly) int32_t stageId __attribute__((swift_name("stageId")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainRankeableStage")))
@interface DataDomainRankeableStage : DataBase
- (instancetype)initWithId:(int32_t)id voters:(NSArray<NSString *> *)voters __attribute__((swift_name("init(id:voters:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (DataDomainRankeableStage *)doCopyId:(int32_t)id voters:(NSArray<NSString *> *)voters __attribute__((swift_name("doCopy(id:voters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> *voters __attribute__((swift_name("voters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainStageClassification")))
@interface DataDomainStageClassification : DataBase
- (instancetype)initWithMountain:(NSArray<DataDomainClassification *> *)mountain team:(NSArray<DataDomainClassification *> *)team general:(NSArray<DataDomainClassification *> *)general regularity:(NSArray<DataDomainClassification *> *)regularity stageClassification:(NSArray<DataDomainClassification *> *)stageClassification stage:(NSString *)stage __attribute__((swift_name("init(mountain:team:general:regularity:stageClassification:stage:)"))) __attribute__((objc_designated_initializer));
- (NSArray<DataDomainClassification *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<DataDomainClassification *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<DataDomainClassification *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<DataDomainClassification *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<DataDomainClassification *> *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (DataDomainStageClassification *)doCopyMountain:(NSArray<DataDomainClassification *> *)mountain team:(NSArray<DataDomainClassification *> *)team general:(NSArray<DataDomainClassification *> *)general regularity:(NSArray<DataDomainClassification *> *)regularity stageClassification:(NSArray<DataDomainClassification *> *)stageClassification stage:(NSString *)stage __attribute__((swift_name("doCopy(mountain:team:general:regularity:stageClassification:stage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<DataDomainClassification *> *general __attribute__((swift_name("general")));
@property NSArray<DataDomainClassification *> *mountain __attribute__((swift_name("mountain")));
@property NSArray<DataDomainClassification *> *regularity __attribute__((swift_name("regularity")));
@property NSString *stage __attribute__((swift_name("stage")));
@property NSArray<DataDomainClassification *> *stageClassification __attribute__((swift_name("stageClassification")));
@property NSArray<DataDomainClassification *> *team __attribute__((swift_name("team")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DomainClassification")))
@interface DataDomainClassification : DataBase
- (instancetype)initWithTime:(NSString * _Nullable)time country:(NSString * _Nullable)country team:(NSString * _Nullable)team pos:(NSString * _Nullable)pos rider:(NSString * _Nullable)rider __attribute__((swift_name("init(time:country:team:pos:rider:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (DataDomainClassification *)doCopyTime:(NSString * _Nullable)time country:(NSString * _Nullable)country team:(NSString * _Nullable)team pos:(NSString * _Nullable)pos rider:(NSString * _Nullable)rider __attribute__((swift_name("doCopy(time:country:team:pos:rider:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable country __attribute__((swift_name("country")));
@property NSString * _Nullable pos __attribute__((swift_name("pos")));
@property NSString * _Nullable rider __attribute__((swift_name("rider")));
@property NSString * _Nullable team __attribute__((swift_name("team")));
@property NSString * _Nullable time __attribute__((swift_name("time")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
