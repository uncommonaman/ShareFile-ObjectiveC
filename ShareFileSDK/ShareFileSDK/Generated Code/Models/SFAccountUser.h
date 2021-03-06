//
// SFAccountUser.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFUser.h"
#import "SFODataObject.h"


@interface SFAccountUser : SFUser
{
}

@property (nonatomic, strong) NSNumber *IsAdministrator;
@property (nonatomic, strong) NSNumber *CanCreateFolders;
@property (nonatomic, strong) NSNumber *CanUseFileBox;
@property (nonatomic, strong) NSNumber *CanManageUsers;
@property (nonatomic, strong) NSNumber *IsVirtualClient;
@property (nonatomic, strong) NSNumber *DiskSpace;
@property (nonatomic, strong) NSNumber *Bandwidth;
@property (nonatomic, strong) NSNumber *StorageQuotaLimitGB;
@property (nonatomic, strong) NSNumber *StorageQuotaPercent;
@property (nonatomic, strong) NSNumber *EnableHardLimit;


@end
