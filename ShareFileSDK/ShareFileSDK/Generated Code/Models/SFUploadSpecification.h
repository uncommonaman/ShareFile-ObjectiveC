//
// SFUploadSpecification.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFODataObject.h"


@interface SFUploadSpecification : SFODataObject
{
}

/**
   The Upload method that must be used for this upload
 */
@property (nonatomic, strong) NSString *Method;
/**
   If provided, clients must issue a request to this Uri before uploading any data.
 */
@property (nonatomic, strong) NSURL *PrepareUri;
/**
   Specifies the URI the client must send the file data to
 */
@property (nonatomic, strong) NSURL *ChunkUri;
/**
   If provided, specifies the final call the client must perform to finish the upload process
 */
@property (nonatomic, strong) NSURL *FinishUri;
/**
   Allows the client to check progress of standard uploads
 */
@property (nonatomic, strong) NSString *ProgressData;
/**
   Specifies a Resumable upload is supproted.
 */
@property (nonatomic, strong) NSNumber *IsResume;
/**
   Specifies the initial index for resuming, if IsResume is true.
 */
@property (nonatomic, strong) NSNumber *ResumeIndex;
/**
   Specifies the initial file offset by bytes, if IsResume is true
 */
@property (nonatomic, strong) NSNumber *ResumeOffset;
/**
   Specifies the MD5 hash of the first ResumeOffset bytes of the partial file found at the server
 */
@property (nonatomic, strong) NSString *ResumeFileHash;


@end
