//
// SFServicesCollection.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"

@class SFService;

@interface SFServicesCollection : SFODataObject
{
}

/**
   RightSignature account service
 */
@property (nonatomic, strong) SFService *RightSignature;
/**
   ShareConnect account service
 */
@property (nonatomic, strong) SFService *ShareConnect;
/**
ShareFile Legal account service
*/
@property (nonatomic, strong) SFService *ShareFileLegal;


@end