#ifndef USER_H
#define USER_H
#include <string>

using namespace std;


class User{
    private:
        string name;
        string userID;
        


    public:
    User();
    User(string name, string userID);

};

User::User() {
    this->name = ""; //empty name for now
    this->userID = ""; //empty username for now

}

User::User(string name, string userID) {
    this->name = name;
    this->userID = userID;
}



#endif