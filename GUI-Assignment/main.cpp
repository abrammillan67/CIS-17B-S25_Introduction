#include "mainwindow.h"

#include <QApplication>
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



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    return a.exec();
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

