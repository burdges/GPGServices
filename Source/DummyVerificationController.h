//
//  FileVerificationDummyController.h
//  GPGServices
//
//  Created by Moritz Ulrich on 22.04.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class FileVerificationDataSource;
@class GPGSignature;

@interface DummyVerificationController : NSWindowController {
@private
    IBOutlet NSTableView* tableView;
    IBOutlet NSProgressIndicator* indicator;
    IBOutlet FileVerificationDataSource* dataSource;
    
    BOOL isActive;
}

@property(assign) BOOL isActive;

- (void)addResults:(NSDictionary*)results;
- (void)addResultFromSig:(GPGSignature*)sig forFile:(NSString*)file;

- (NSInteger)runModal;
- (IBAction)okClicked:(id)sender;

@end
