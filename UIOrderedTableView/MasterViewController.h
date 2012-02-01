//
//  MasterViewController.h
//  UIOrderedTableView
//
//  Created by Stephan Zehrer on 28.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>
{
    bool userDrivenDataModelChange;
}

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) NSManagedObject *rootObject;

- (NSManagedObject*)rootEvent;
- (NSManagedObject*)insertNewObject;
- (void)saveContext;

@end
