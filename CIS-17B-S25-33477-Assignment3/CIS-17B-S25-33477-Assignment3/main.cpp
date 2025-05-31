#include <iostream>
#include <memory>
#include <stdexcept>
#include "BankAccount.h"

using namespace std;

const string promptChoice = "Enter your choice: ";

int main() {
    bool run = true;
    int menuChoice =0;
    try {
        double initialBalance;
    
        cout << "Enter initial balance: ";
        cin >> initialBalance;

        if (initialBalance < 0) {
            throw NegativeDepositException();
        }
        auto account = make_unique<BankAccount>("123456", initialBalance);
        cout << "Bank Account created: # " << "123456" << endl;
        
        while (run) { //using infinite loop to run program until user decides to exit
            account->displayMenu();
            cout << promptChoice;
            cin >> menuChoice;
            switch(menuChoice) {
                case 1:
                    account->deposit(); //DEPOSIT OPTION
                    break;
                case 2:
                    account->withdraw(); //WITHDRAW OPTION
                    break;
                case 3:
                    cout <<"\nYour balance is : $" << account->getBalance() << endl; //DISPLAY BALANCE OPTION
                    break;
                case 4:
                    account->closeAccount(); //CLOSE ACCOUNT OPTION
                    break;
                case 5:
                    run = false;
                    break;
            }
        }
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    cout << "Thanks for banking with us!";
    return 0;
}
