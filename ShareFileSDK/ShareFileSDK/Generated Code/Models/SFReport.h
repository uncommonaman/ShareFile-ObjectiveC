//
// SFReport.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"

@class SFItem;
@class SFUser;

@interface SFReport : SFODataObject
{
}

@property (nonatomic, strong) NSString *AccountId;
@property (nonatomic, strong) NSString *Title;
@property (nonatomic, strong) NSString *ReportType;
@property (nonatomic, strong) NSString *ObjectType;
@property (nonatomic, strong) NSString *ObjectId;
@property (nonatomic, strong) NSString *DateOption;
@property (nonatomic, strong) NSString *ActivityTypes;
/**
   The Start Date of the range the ReportRecord will be run against
 */
@property (nonatomic, strong) NSDate *StartDate;
/**
   The End Date of the range the ReportRecord will be run against
 */
@property (nonatomic, strong) NSDate *EndDate;
@property (nonatomic, strong) NSDate *LastRunDate;
@property (nonatomic, strong) NSNumber *IsRecurring;
@property (nonatomic, strong) NSNumber *IsScheduled;
@property (nonatomic, strong) NSNumber *IncludeSubFolders;
@property (nonatomic, strong) NSNumber *SaveToFolder;
@property (nonatomic, strong) NSString *SaveFormat;
@property (nonatomic, strong) NSString *SaveFolderId;
@property (nonatomic, strong) SFItem *SaveFolder;
@property (nonatomic, strong) SFUser *Creator;
@property (nonatomic, strong) NSString *CreatorId;
@property (nonatomic, strong) NSArray *Records;
@property (nonatomic, strong) NSDate *CreateDate;
@property (nonatomic, strong) NSString *Frequency;
@property (nonatomic, strong) NSNumber *DayOfWeek;
@property (nonatomic, strong) NSNumber *DayOfMonth;
@property (nonatomic, strong) NSNumber *EmailNotice;
@property (nonatomic, strong) NSString *EmailToNotify;


@end
