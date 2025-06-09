#include "StorageManager.h"
#include "StoredItem.h"
#include <iostream>
using namespace std;

void StorageManager::addItem(const shared_ptr<StoredItem>& item) { //IMPLEMENTATION OF addItem FUNC
    itemById[item->id] = item;
    itemByDescription[item->description] = item;
}

shared_ptr<StoredItem> StorageManager::findById(const string &id) const { //IMPLEMENTATION OF findById FUNC
    cout << "Found " << itemById.at(id)->description << " at " << itemById.at(id)->location << endl;

    return nullptr;
}

void StorageManager::removeItem(const string &id) { //IMPLEMENTATION OF removeItem FUNC
    itemById.erase(id);
    itemByDescription.erase(itemById.at(id)->description);
}

void StorageManager::listItemsByDescription() const { //IMPLEMENTATION OF listItemsByDescripton FUNC
    cout << "Items in Description Order: " << endl;
    for(auto& [description, StoredItem] : itemByDescription) {
        cout << StoredItem->description << " " << StoredItem->location <<endl;
    }
}
