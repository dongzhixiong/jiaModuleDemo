//
//  UMSocialPlatformConfig.h
//  UMSocialSDK
//
//  Created by 张军华 on 16/8/5.
//  Copyright © 2016年 dongjianxiong. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 新浪微博
 */
extern NSString *const  UMSPlatformNameSina;

/**
 腾讯微博
 */
extern NSString *const  UMSPlatformNameTencentWb;

/**
 人人网
 */
extern NSString *const  UMSPlatformNameRenren;

/**
 豆瓣
 */
extern NSString *const  UMSPlatformNameDouban;

/**
 QQ空间
 */
extern NSString *const  UMSPlatformNameQzone;

/**
 邮箱
 */
extern NSString *const  UMSPlatformNameEmail;

/**
 短信
 */
extern NSString *const  UMSPlatformNameSms;

/**
 微信好友
 */
extern NSString *const  UMSPlatformNameWechatSession;

/**
 微信朋友圈
 */
extern NSString *const  UMSPlatformNameWechatTimeline;

/**
 微信收藏
 */
extern NSString *const  UMSPlatformNameWechatFavorite;

/**
 支付宝好友
 */
extern NSString *const  UMSPlatformNameAlipaySession;

/**
 手机QQ
 */
extern NSString *const  UMSPlatformNameQQ;

/**
 Facebook
 */
extern NSString *const  UMSPlatformNameFacebook;

/**
 Twitter
 */
extern NSString *const  UMSPlatformNameTwitter;


/**
 易信好友
 */
extern NSString *const  UMSPlatformNameYXSession;

/**
 易信朋友圈
 */
extern NSString *const  UMSPlatformNameYXTimeline;

/**
 来往好友
 */
extern NSString *const  UMSPlatformNameLWSession;

/**
 来往朋友圈
 */
extern NSString *const  UMSPlatformNameLWTimeline;

/**
 分享到Instragram
 */
extern NSString *const  UMSPlatformNameInstagram;

/**
 分享到Whatsapp
 */
extern NSString *const  UMSPlatformNameWhatsapp;

/**
 分享到Line
 */
extern NSString *const  UMSPlatformNameLine;

/**
 分享到Tumblr
 */
extern NSString *const  UMSPlatformNameTumblr;

/**
 领英
 */
extern NSString *const  UMSPlatformNameLinkedin;

/**
 分享到Pinterest
 */
extern NSString *const  UMSPlatformNamePinterest;

/**
 分享到KakaoTalk
 */
extern NSString *const  UMSPlatformNameKakaoTalk;

/**
 分享到Flickr
 */
extern NSString *const  UMSPlatformNameFlickr;



/**
 *  授权，分享，UserProfile等操作的回调
 *
 *  @param result 表示回调的结果
 *  @param error  表示回调的错误码
 */
typedef void (^UMSocialRequestCompletionHandler)(id result,NSError *error);

/**
 *  授权，分享，UserProfile等操作的回调
 *
 *  @param result 表示回调的结果
 *  @param error  表示回调的错误码
 */
typedef void (^UMSocialShareCompletionHandler)(id shareResponse,NSError *error);

/**
 *  授权，分享，UserProfile等操作的回调
 *
 *  @param authResponse 表示回调的结果
 *  @param error  表示回调的错误码
 */
typedef void (^UMSocialAuthCompletionHandler)(id authResponse,NSError *error);

/**
 *  授权，分享，UserProfile等操作的回调
 *
 *  @param userInfoResponse 表示回调的结果
 *  @param error  表示回调的错误码
 */
typedef void (^UMSocialGetUserInfoCompletionHandler)(id userInfoResponse,NSError *error);


/////////////////////////////////////////////////////////////////////////////
//平台的失败错误码--start
/////////////////////////////////////////////////////////////////////////////
/**
 *  平台的失败类型
 */
typedef NS_ENUM(NSInteger,UMSocialPlatformErrorType) {
    UMSocialPlatformErrorType_Unknow            = 2000,            //知错误
    UMSocialPlatformErrorType_NotSupport        = 2001,            //不支持（url scheme 没配置，或者没有配置-ObjC）
    UMSocialPlatformErrorType_AuthorizeFailed   = 2002,            //授权失败
    UMSocialPlatformErrorType_ShareFailed       = 2003,            //分享失败
    UMSocialPlatformErrorType_RequestForUserProfileFailed = 2004,  //请求用户信息失败
    UMSocialPlatformErrorType_ShareDataNil      = 2005,     //分享内容为空
    UMSocialPlatformErrorType_ShareDataTypeIllegal = 2006,  //分享内容不支持
    UMSocialPlatformErrorType_CheckUrlSchemaFail = 2007,    //schemaurl fail
    UMSocialPlatformErrorType_NotInstall        = 2008,
    UMSocialPlatformErrorType_Cancel            = 2009,
    UMSocialPlatformErrorType_NotNetWork        = 2010,
    UMSocialPlatformErrorType_SourceError       = 2011,     //第三方错误
    
    UMSocialPlatformErrorType_ProtocolNotOverride = 2013,   //对应的	UMSocialPlatformProvider的方法没有实现
    
};

/** The domain name used for the UMSocialPlatformErrorType */
extern NSString* const UMSocialPlatformErrorDomain;

/////////////////////////////////////////////////////////////////////////////
//平台的失败错误码--end
/////////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////
//平台的特性--begin
/////////////////////////////////////////////////////////////////////////////

/**
 *  平台的特性枚举变量
 */
typedef NS_OPTIONS(NSUInteger, UMSocialPlatformFeature)
{
    UMSocialPlatformFeature_None = 0,
    
    //App
    UMSocialPlatformFeature_IsAppInstalled                      = 1 << 0,
    UMSocialPlatformFeature_IsCanOpenApp                        = 1 << 1,
    UMSocialPlatformFeature_IsAppApiSupport                     = 1 << 2,
    
    //Authorize
    UMSocialPlatformFeature_IsCanAuthorize                      = 1 << 10,
    UMSocialPlatformFeature_IsCanWebViewAuthorize               = 1 << 11,
    
    //SSOShare
    UMSocialPlatformFeature_IsCanShare_Text                     = 1 << 22,
    UMSocialPlatformFeature_IsCanShare_Image                    = 1 << 23,
    UMSocialPlatformFeature_IsCanShare_Media                    = 1 << 24,
    UMSocialPlatformFeature_IsCanShare_TextAndImage             = 1 << 25,
    UMSocialPlatformFeature_IsCanShare_TextAndMedia             = 1 << 26,
    
    //mask
    UMSocialPlatformFeature_Mask                                = 0xFFFFFFFF,
};


/////////////////////////////////////////////////////////////////////////////
//平台的特性--end
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
//平台的类型--start
/////////////////////////////////////////////////////////////////////////////
typedef NS_ENUM(NSInteger,UMSocialPlatformType)
{
    UMSocialPlatformType_UnKnown            = -2,
    //预定义的平台
    UMSocialPlatformType_Predefine_Begin    = -1,
    UMSocialPlatformType_Sina,          //新浪
    UMSocialPlatformType_WechatSession, //微信聊天
    UMSocialPlatformType_WechatTimeLine,//微信朋友圈
    UMSocialPlatformType_WechatFavorite,//微信收藏
    UMSocialPlatformType_QQ,            //QQ聊天页面
    UMSocialPlatformType_Qzone,         //qq空间
    UMSocialPlatformType_TencentWb,     //腾讯微博
    UMSocialPlatformType_AlipaySession, //支付宝聊天页面
    UMSocialPlatformType_YixinSession,  //易信聊天页面
    UMSocialPlatformType_YixinTimeLine, //易信朋友圈
    UMSocialPlatformType_YixinFavorite, //易信收藏
    UMSocialPlatformType_LaiWangSession,//点点虫（原来往）聊天页面
    UMSocialPlatformType_LaiWangTimeLine,//点点虫动态
    UMSocialPlatformType_Sms,           //短信
    UMSocialPlatformType_Email,         //邮件
    UMSocialPlatformType_Renren,        //人人
    UMSocialPlatformType_Facebook,      //Facebook
    UMSocialPlatformType_Twitter,       //Twitter
    UMSocialPlatformType_Douban,        //豆瓣
    UMSocialPlatformType_KakaoTalk,     //KakaoTalk（暂未支持）
    UMSocialPlatformType_Pinterest,     //Pinterest（暂未支持）
    UMSocialPlatformType_Line,          //Line
    
    UMSocialPlatformType_Linkedin,      //领英
    
    UMSocialPlatformType_Flickr,        //Flickr

    UMSocialPlatformType_Tumblr,        //Tumblr（暂未支持）
    UMSocialPlatformType_Instagram,     //Instagram
    UMSocialPlatformType_Whatsapp,      //Whatsapp
    UMSocialPlatformType_Predefine_end,
    
    //用户自定义的平台
    UMSocialPlatformType_UserDefine_Begin = 1000,
    UMSocialPlatformType_UserDefine_End = 2000,
};

/////////////////////////////////////////////////////////////////////////////
//平台的类型--end
/////////////////////////////////////////////////////////////////////////////



//通过图片名称读取UMSocialSDKResources.bundle里的平台icon
#define UMSocialPlatformIconWithName(name) [NSString stringWithFormat:@"UMSocialSDKResources.bundle/SnsPlatform/%@",name]

////通过图片名称读取UMSocialSDKResources.bundle/Buttons/中的图片
#define UMSocialButtonImageWithName(name) [NSString stringWithFormat:@"UMSocialSDKResources.bundle/Buttons/%@",name]
//

/** 本地化 */
#define UMLocalizedString(key,defaultValue) NSLocalizedStringWithDefaultValue(key,@"UMSocialLocalizable", [NSBundle mainBundle], defaultValue, nil)

/**
 *  平台配置类
 */
@interface UMSocialPlatformConfig : NSObject


@property(nonatomic,strong)NSString* appKey;
@property(nonatomic,strong)NSString* appSecret;
@property(nonatomic,strong)NSString* redirectURL;

/**
 *
 *  @param platformType @see UMSocialPlatformType
 *
 *  @return 平台名称
 */
+ (NSString *)platformNameWithPlatformType:(UMSocialPlatformType)platformType;

/**
 *
 *  @param platformType @see UMSocialPlatformType
 *
 *  @return 平台handler
 */
+ (id)platformHandlerWithPlatformType:(UMSocialPlatformType)platformType;

/**
 *
 *  @param errorType @see UMSocialPlatformErrorType
 *  @param userInfo  @see 错误信息
 *
 *  @return 如果平台有效就返回YES，否则返回NO
 */
+ (NSError *)errorWithSocialErrorType:(UMSocialPlatformErrorType)errorType userInfo:(id)userInfo;

@end
