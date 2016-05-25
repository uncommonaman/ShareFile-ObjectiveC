//
// SFAccount.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"

@class SFUser;
@class SFUserUsage;
@class SFDiskSpace;
@class SFItem;
@class SFSSOAccountProvider;
@class SFAccountPreferences;
@class SFProductDefaults;
@class SFMobileSecuritySettings;
@class SFAccessControlDomains;
@class SFBillingInfo;
@class SFServicesCollection;

@interface SFAccount : SFODataObject
{
}

@property (nonatomic, strong) NSString *CompanyName;
@property (nonatomic, strong) SFUser *BillingContact;
@property (nonatomic, strong) NSString *BillingContactId;
@property (nonatomic, strong) SFUser *TechnicalContact;
@property (nonatomic, strong) NSString *TechnicalContactId;
@property (nonatomic, strong) SFUser *AccountManager;
@property (nonatomic, strong) NSString *AccountManagerId;
@property (nonatomic, strong) NSString *AccountType;
@property (nonatomic, strong) NSString *PlanName;
@property (nonatomic, strong) NSString *PlanTrack;
@property (nonatomic, strong) NSString *PlanTrackEnum;
@property (nonatomic, strong) NSString *BillingType;
@property (nonatomic, strong) NSString *BillingCycle;
@property (nonatomic, strong) NSNumber *BillingRate;
@property (nonatomic, strong) NSNumber *BaseBillingRate;
@property (nonatomic, strong) NSNumber *BaseBandwidth;
@property (nonatomic, strong) NSNumber *BaseDiskSpace;
@property (nonatomic, strong) NSNumber *BaseUsers;
@property (nonatomic, strong) NSNumber *AdditionalBandwidth;
@property (nonatomic, strong) NSNumber *AdditionalDiskSpace;
@property (nonatomic, strong) NSNumber *AdditionalUsers;
@property (nonatomic, strong) NSNumber *AdditionalBandwidthRate;
@property (nonatomic, strong) NSNumber *AdditionalDiskSpaceRate;
@property (nonatomic, strong) NSNumber *AdditionalUserRate;
@property (nonatomic, strong) NSNumber *UserMax;
@property (nonatomic, strong) SFUserUsage *UserUsage;
@property (nonatomic, strong) NSNumber *DiskSpaceMax;
@property (nonatomic, strong) SFDiskSpace *DiskSpace;
@property (nonatomic, strong) NSNumber *BandwidthMax;
@property (nonatomic, strong) NSNumber *HasPowerTools;
@property (nonatomic, strong) NSNumber *HasEncryption;
@property (nonatomic, strong) NSNumber *PowerToolsRate;
@property (nonatomic, strong) NSNumber *EncryptionRate;
@property (nonatomic, strong) NSString *Address1;
@property (nonatomic, strong) NSString *Address2;
@property (nonatomic, strong) NSString *City;
@property (nonatomic, strong) NSString *State;
@property (nonatomic, strong) NSString *Zip;
@property (nonatomic, strong) NSString *Country;
@property (nonatomic, strong) NSString *CreditCardType;
@property (nonatomic, strong) NSString *CreditCardNumber;
@property (nonatomic, strong) NSString *CreditCardExpirationMonth;
@property (nonatomic, strong) NSString *CreditCardExpirationYear;
@property (nonatomic, strong) NSString *CreditCardFirstName;
@property (nonatomic, strong) NSString *CreditCardLastName;
@property (nonatomic, strong) NSString *Phone;
@property (nonatomic, strong) NSDate *LastBillingDate;
@property (nonatomic, strong) NSDate *NextBillingDate;
@property (nonatomic, strong) NSNumber *UseAdvancedCustomBranding;
@property (nonatomic, strong) NSString *AdvancedCustomBrandingFolderName;
@property (nonatomic, strong) NSDictionary *BrandingStyles;
@property (nonatomic, strong) NSString *LogoURL;
@property (nonatomic, strong) SFItem *RootItem;
@property (nonatomic, strong) NSString *RootItemId;
@property (nonatomic, strong) NSDate *CreationDate;
@property (nonatomic, strong) NSNumber *IsFreeTrial;
@property (nonatomic, strong) NSNumber *IsCancelled;
@property (nonatomic, strong) NSDate *CancellationDate;
@property (nonatomic, strong) SFSSOAccountProvider *SSO;
@property (nonatomic, strong) SFAccountPreferences *Preferences;
@property (nonatomic, strong) SFProductDefaults *ProductDefaults;
@property (nonatomic, strong) NSString *Subdomain;
@property (nonatomic, strong) NSArray *Subdomains;
@property (nonatomic, strong) SFMobileSecuritySettings *MobileSecuritySettings;
@property (nonatomic, strong) SFAccessControlDomains *LoginAccessControlDomains;
@property (nonatomic, strong) SFAccessControlDomains *FolderAccessControlDomains;
@property (nonatomic, strong) NSNumber *StorageQuotaPerUser;
@property (nonatomic, strong) NSString *FreeTrialId;
@property (nonatomic, strong) NSString *Source;
@property (nonatomic, strong) NSString *AttributedSource;
@property (nonatomic, strong) NSString *CompanyURL;
@property (nonatomic, strong) NSNumber *MarketingOptIn;
@property (nonatomic, strong) NSString *CreditCardSecurityCode;
@property (nonatomic, strong) NSArray *ToolInformation;
@property (nonatomic, strong) SFBillingInfo *BillingInformation;
@property (nonatomic, strong) NSString *AccountSubType;
@property (nonatomic, strong) SFServicesCollection *Services;


@end