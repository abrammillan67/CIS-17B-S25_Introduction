#ifndef STOREDITEM_H
#define STOREDITEM_H
#include <string>
using namespace std;

class StoredItem { //DEFINITION OF THE STOREDITEM CLASS
private:
    string id;
    string description;
    string location;

public:
    StoredItem(); //no arg constructor
    StoredItem(string id, string desc, string loc);
    string getId(); //getters
    string getDescription();
    string getLocation();
    
    friend class StorageManager;
    friend class DuplicateItemException;
    friend void testDuplicateAddition();
    friend void testItemNotFound();
};

#endif
