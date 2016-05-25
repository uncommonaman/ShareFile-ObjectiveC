//
// SFShare.h
// 
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"

@class SFItem;
@class SFUser;
@class SFZone;
@class SFRedirection;
@class SFShareSettings;
@class SFShareAccessRight;

@interface SFShare : SFODataObject
{

}

@property (nonatomic, strong) NSString *AliasID;
@property (nonatomic, strong) NSString *ShareType;
@property (nonatomic, strong) NSString *Title;
@property (nonatomic, strong) NSNumber *HasSentMessage;
@property (nonatomic, strong) NSString *SentMessageTitle;
@property (nonatomic, strong) NSNumber *RequireLogin;
@property (nonatomic, strong) NSNumber *RequireUserInfo;
@property (nonatomic, strong) SFItem *Parent;
@property (nonatomic, strong) SFUser *Creator;
@property (nonatomic, strong) SFUser *User;
@property (nonatomic, strong) NSArray *Items;
@property (nonatomic, strong) NSDate *CreationDate;
@property (nonatomic, strong) NSDate *ExpirationDate;
@property (nonatomic, strong) NSNumber *MaxDownloads;
@property (nonatomic, strong) NSNumber *TotalDownloads;
@property (nonatomic, strong) NSNumber *IsViewOnly;
@property (nonatomic, strong) NSDate *TrackUntilDate;
@property (nonatomic, strong) NSNumber *SendFrequency;
@property (nonatomic, strong) NSNumber *SendInterval;
@property (nonatomic, strong) NSDate *LastDateSent;
@property (nonatomic, strong) NSNumber *IsConsumed;
@property (nonatomic, strong) NSNumber *IsRead;
@property (nonatomic, strong) NSNumber *IsArchived;
@property (nonatomic, strong) NSString *SendTool;
@property (nonatomic, strong) NSString *SendMethod;
@property (nonatomic, strong) NSNumber *UsesStreamIDs;
@property (nonatomic, strong) NSURL *Uri;
@property (nonatomic, strong) NSArray *Recipients;
@property (nonatomic, strong) SFZone *Zone;
@property (nonatomic, strong) NSString *Signature;
@property (nonatomic, strong) NSNumber *HasRemoteChildren;
@property (nonatomic, strong) SFRedirection *Redirection;
@property (nonatomic, strong) NSString *ShareSubType;
@property (nonatomic, strong) NSArray *ShareItemHistory;
@property (nonatomic, strong) SFShareSettings *Settings;
@property (nonatomic, strong) SFShareAccessRight *ShareAccessRight;


@end