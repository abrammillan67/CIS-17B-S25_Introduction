#include <iostream>
#include <unordered_map>
#include <map>
#include <memory>
#include <stdexcept>
#include "StorageManager.h"
#include "StoredItem.h"

using namespace std;

class DuplicateItemException : public exception { //CUSTOM EXCEPTION
    virtual const char* what() const noexcept {
        return "Item with ID already exists!";
    }
};

class ItemNotFoundException : public exception { //CUSTOM EXCEPTION
    virtual const char* what() const noexcept {
        return "Item with ID not found!";
    }
};

//FUNCTION PROTOTYPES FOR SIMPLE TEST FUNCTION
void testDuplicateAddition(const shared_ptr<StoredItem>, StorageManager&);
void testItemNotFound(const shared_ptr<StoredItem>, StorageManager&, int);


//MAIN PROGRAM
int main() {
    
    //creating 3 items
    shared_ptr<StoredItem> item1 = make_shared<StoredItem>("ITEM01","LED Light", "Aisle 1, Shelf 1" );
    shared_ptr<StoredItem> item2 = make_shared<StoredItem>("ITEM02","Fan Motor", "Aisle 2, Shelf 5" );
    shared_ptr<StoredItem> item3 = make_shared<StoredItem>("ITEM03","Motherboard", "Aisle 6, Shelf 9" );
    
    //creating a StorageManager object
    StorageManager storageManager;
    
    //adding item1 and testing for duplicates
    cout << "Adding item: " << item1->getId() << " - " << item1->getDescription() << endl;
    testDuplicateAddition(item1,storageManager);
    
    //adding item2 and testing for duplicates
    cout << "Adding item: " << item2->getId() << " - " << item2->getDescription() << endl;
    testDuplicateAddition(item2, storageManager);
    
    //adding item1 again, should throw exception during testing
    cout << "Attempting to add " << item1->getId() << " again..." << endl;
    testItemNotFound(item3, storageManager, 1);
    
    //searching for item2 and testing for item not found
    cout << "Retreiving " << item2->getId() << "..." << endl;
    storageManager.findById(item2->getId());
    
    //searching for and attempting to remove item 3
    //should throw an exception since it was never added to maps
    cout << "Removing " << item3->getId() << "..." << endl;
    testItemNotFound(item3, storageManager, 2);
    
    //listing all items in maps
    storageManager.listItemsByDescription();
    
    
    return 0;
}

//FUNCTION FOR TESTING FOR DUPLICATES
void testDuplicateAddition(const shared_ptr<StoredItem> item,StorageManager& storageManager) {
    try {
        if (storageManager.itemById.find(item->getId()) != storageManager.itemById.end()) { //if .find() does not return .end(), then item was found in map
            throw DuplicateItemException(); //item was found in map, throw custom exception
        }
            storageManager.addItem(item);
        
    }
    catch(exception& e) {
        cout << "Error: " << e.what() << endl;
    
    }
}

//FUNCTION FOR TEST IF ITEM IS IN MAPS
void testItemNotFound(const shared_ptr<StoredItem> item, StorageManager& storageManager, int option) {
    try {
        if (storageManager.itemById.find(item->getId()) == storageManager.itemById.end()) { //if .find() returns .end(), then item was NOT found in map
            throw ItemNotFoundException(); // item not found, throw exception
        }
        else if(option == 1) { //option 1 is to find ONLY
            storageManager.findById(item->getId());
        }
        else if (option ==2) { //option 2 is to find and REMOVE
            storageManager.removeItem(item->getId());
        }
    }
    catch(exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    
}
