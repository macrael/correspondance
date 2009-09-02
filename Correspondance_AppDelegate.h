//
//  Correspondance_AppDelegate.h
//  Correspondance
//
//  Created by MacRae Linton on 8/31/09.
//  Copyright Apple Inc. 2009 . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Correspondance_AppDelegate : NSObject 
{
    IBOutlet NSWindow *window;
    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
}

- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSManagedObjectModel *)managedObjectModel;
- (NSManagedObjectContext *)managedObjectContext;

- (IBAction)saveAction:sender;

@end
