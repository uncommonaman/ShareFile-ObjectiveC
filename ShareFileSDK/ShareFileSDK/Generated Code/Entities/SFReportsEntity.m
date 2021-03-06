//
//  SFReportsEntity.m
//
//  Autogenerated by a tool.
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFHttpMethodConstants.h"
#import "SFEntityConstants.h"
#import "SFReportsEntity.h"
#import "SFODataEntityBase.h"
#import "SFReport.h"
#import "SFReportRecord.h"
#import "SFItemProtocolLink.h"


@implementation SFReportsEntity
- (SFApiQuery *)get {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReport class];
    sfApiQuery.isODataFeed = YES;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

- (SFApiQuery *)getWithUrl:(NSURL *)url {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReport class];
    sfApiQuery.isODataFeed = NO;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery addIds:url];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

- (SFApiQuery *)getRecentWithMaxReports:(NSNumber *)maxReports {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReport class];
    sfApiQuery.isODataFeed = YES;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Recent"];
    [sfApiQuery addQueryString:@"maxReports" withValue:maxReports];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

- (SFApiQuery *)getRecurring {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReport class];
    sfApiQuery.isODataFeed = YES;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Recurring"];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

- (SFApiQuery *)getRecordWithId:(NSString *)Id {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReportRecord class];
    sfApiQuery.isODataFeed = NO;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Record"];
    [sfApiQuery addActionIds:Id];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

- (SFApiQuery *)getRecordsWithUrl:(NSURL *)url {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReportRecord class];
    sfApiQuery.isODataFeed = YES;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Records"];
    [sfApiQuery addIds:url];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

- (SFApiQuery *)createWithReport:(SFReport *)report andRunOnCreate:(NSNumber *)runOnCreate {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReport class];
    sfApiQuery.isODataFeed = NO;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery addQueryString:@"runOnCreate" withValue:runOnCreate];
    [sfApiQuery setBody:report];
    [sfApiQuery setHttpMethod:kSFHttpMethodPOST];
    return sfApiQuery;
}

- (SFApiQuery *)updateWithReport:(SFReport *)report {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReport class];
    sfApiQuery.isODataFeed = NO;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setBody:report];
    [sfApiQuery setHttpMethod:kSFHttpMethodPATCH];
    return sfApiQuery;
}

- (SFApiQuery *)deleteWithUrl:(NSURL *)url {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery addIds:url];
    [sfApiQuery setHttpMethod:kSFHttpMethodDELETE];
    return sfApiQuery;
}

- (SFApiQuery *)getRunWithUrl:(NSURL *)url {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFReportRecord class];
    sfApiQuery.isODataFeed = NO;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Run"];
    [sfApiQuery addIds:url];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

- (SFApiQuery *)previewWithReportUrl:(NSURL *)reportUrl {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [SFItemProtocolLink class];
    sfApiQuery.isODataFeed = NO;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Preview"];
    [sfApiQuery addIds:reportUrl];
    [sfApiQuery setHttpMethod:kSFHttpMethodPOST];
    return sfApiQuery;
}

- (SFApiQuery *)getJsonDataWithId:(NSString *)Id {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    sfApiQuery.responseClass = [NSString class];
    sfApiQuery.isODataFeed = NO;
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Records"];
    [sfApiQuery addActionIds:Id];
    [sfApiQuery addSubAction:@"JsonData"];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

- (SFApiQuery *)moveWithReportUrl:(NSURL *)reportUrl andFolderId:(NSString *)folderId {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Move"];
    [sfApiQuery addIds:reportUrl];
    [sfApiQuery addQueryString:@"folderId" withValue:folderId];
    [sfApiQuery setHttpMethod:kSFHttpMethodPOST];
    return sfApiQuery;
}

- (SFApiQuery *)downloadDataWithId:(NSString *)Id {
    SFApiQuery *sfApiQuery = [[SFApiQuery alloc] initWithClient:self.client];
    
    [sfApiQuery setFrom:kSFEntities_Reports];
    [sfApiQuery setAction:@"Records"];
    [sfApiQuery addActionIds:Id];
    [sfApiQuery addSubAction:@"DownloadData"];
    [sfApiQuery setHttpMethod:kSFHttpMethodGET];
    return sfApiQuery;
}

@end
