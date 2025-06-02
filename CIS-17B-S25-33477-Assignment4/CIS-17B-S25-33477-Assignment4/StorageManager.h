#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H
#include "StoredItem.h"
#include <unordered_map>
#include <map>
using namespace std;

class StorageManager { //DEFINITION OF THE STORAGEMANAGER CLASS
    
private:
    unordered_map<string, shared_ptr<StoredItem>> itemById;
    map<string, shared_ptr<StoredItem>> itemByDescription;
    
public:
    void addItem(const shared_ptr<StoredItem>& item);
    shared_ptr<StoredItem> findById( const string& id) const; //return item if found or throw ItemNotFound exception
    void removeItem(const string& id);
    void listItemsByDescription() const;
    
    friend void testDuplicateAddition(const shared_ptr<StoredItem>, StorageManager&);
    friend void testItemNotFound(const shared_ptr<StoredItem>, StorageManager&, int);
};

#endif
