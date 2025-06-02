#include "StoredItem.h"
using namespace std;

StoredItem::StoredItem(string id, string desc, string loc) { //CONSTRUCTOR
    this->id = id;
    this->description = desc;
    this->location = loc;
}

//IMPLEMENTATION OF GETTERS BELOW

string StoredItem::getId() {
    return this->id;
}

string StoredItem::getDescription() {
    return this->description;
}

string StoredItem::getLocation() {
    return this->location;
}
