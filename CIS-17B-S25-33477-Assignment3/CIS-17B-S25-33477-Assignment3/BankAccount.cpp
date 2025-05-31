#include "BankAccount.h"
#include <iostream>
using namespace std;

//implementation of the BankAccount class

BankAccount::BankAccount(string accNum, double initialBalance) {
    this->accountNumber = accNum;
    this->balance = initialBalance;
    this->isActive = true;
}

void BankAccount::deposit() { //Function to deposit money
    int amount;
    try {
        if (isActive == false) { //test if Acc is closed
            throw InvalidAccOpException();
        }
        
        cout << "Enter amount to deposit: ";
        cin >> amount;
        
        if(amount < 0) { //test if deposit amount < 0
            throw NegativeDepositException();
        }
        else this->balance += amount;
    }
    catch(exception& e){ //catch errors and display error type
        cout << "Error: " << e.what() << endl;
    }
}

void BankAccount::withdraw() { // Function to withdraw
    int amount;
    try {
        if (isActive ==false) { //test if Acc is closed
            throw InvalidAccOpException();
        }
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        
        if(amount > balance){ //test if there are suffiecient funds
            throw OverdrawException();
        }
        
        this->balance -= amount;
    }
    catch(exception& e) { //catch errors and display type
        cout << "Error: " << e.what() << endl;
    }
}

double BankAccount::getBalance() const { //Function to get Balance
    try {
        if (isActive ==false) { // test if account is closed
            throw InvalidAccOpException();
        }
        return this->balance;
    }
    catch(exception& e) { //catch errors and display type
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}

void BankAccount::closeAccount() { //function to close Acc
    try {
        if (isActive ==false) {
            throw InvalidAccOpException();
        }
        this->isActive = false;
        cout << "Account closed successfully!";
    }
    catch(exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void BankAccount::displayMenu() { //Function to display menu 
    cout << "1. Deposit Money\n";
    cout << "2. Withdraw Money\n";
    cout << "3. Check Balance\n";
    cout << "4. Close Account\n";
    cout << "5. Exit\n\n";
}
