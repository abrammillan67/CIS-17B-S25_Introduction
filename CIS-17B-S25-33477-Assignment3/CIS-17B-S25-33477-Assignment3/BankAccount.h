#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
#include <stdexcept>
#include <memory>
using namespace std;

class NegativeDepositException : public exception { //Custom exception class for neg deposits
    virtual const char* what() const noexcept {
        return "Cannot deposit a negative amount!\n";
    }
};

class OverdrawException : public exception { //Custom exception class for overdraws
    virtual const char* what() const noexcept {
        return "Insufficient funds!\n";
    }
};

class InvalidAccOpException: public exception { //Custom exception class for closed account
    virtual const char* what() const noexcept {
        return "Account closed!\n";
    }
};

class BankAccount { //Defining BankAccount Class

private:
    string accountNumber;
    double balance;
    bool isActive;

public:
    BankAccount(); //no arg constructor
    BankAccount(string accNum, double initialBalance);
    
    void deposit();
    void withdraw();
    double getBalance() const;
    void closeAccount();
    void displayMenu();
    
    //allowing custom exception classes access to private class members
    friend class NegativeDepositException;
    friend class OverdrawException;
    friend class InvalidAccOpException;

};

#endif
