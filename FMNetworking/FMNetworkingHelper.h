//
//  FMNetworking.h
//  FupingElectricity
//
//  Created by mingo on 2019/3/21.
//  Copyright © 2019年 袁凤鸣. All rights reserved.
//

#import "FMRequestBase.h"

@interface FMNetworking : FMRequestBase

+ (void)fm_isHandleClickRequst:(BOOL)isHandleClickRequst showStatusTips:(BOOL)showStatusTip responseObject:(id)responseObject successOkBlock:(RequestSuccessBlock)successOkBlock successTokenErrorBlock:(RequestSuccessBlock)tokenErrorBlock successNotNeedBlock:(RequestSuccessBlock)notNeedBlock;

/// 上传用户图片  头像
+ (void)fm_uploadImagesUrl:(NSString *)urlString params:(id)params arrImagesOrFileNsdata:(id)imagesOrData progress:(RequestProgressBlock)progressBlock success:(RequestSuccessBlock)successBlock;

+ (void)fm_postDodyrawUrl:(NSString *)url bodyStr:(NSString *)bodyStr isHandleClick:(BOOL)isHandleClick showStatusTips:(BOOL)showStatusTips  successBlock:(RequestSuccessBlock)successBlock;
+ (void)fm_postDodyrawUrl:(NSString *)url bodyStr:(NSString *)bodyStr isHandleClick:(BOOL)isHandleClick showStatusTips:(BOOL)showStatusTips  successBlock:(RequestSuccessBlock)successBlock failureBlock:(RequestFailureBlock)failureBlock;

@end
