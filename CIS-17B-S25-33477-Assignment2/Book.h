#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;

class Book {

    private:
        string title;
        bool availability;
        string author;
        string ISBN;

    public:
    Book();
    Book(string title, bool availability, string author, string ISBN);


};




#endif