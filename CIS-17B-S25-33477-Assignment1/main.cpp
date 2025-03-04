#include <iostream>
#include "BankAccount.h"
using namespace std;

void displayInitMenu();
void goodbyeMessage();

const string promptChoice = "Enter your choice: ";


int main() {
    int menuChoice =0;
    int run = 1;
    int amount;
    bool accountCreated = false;
    string accountHolderName;
    string defaultAccNum = "123456789"; //used to pass a default account number
    
    while(run == 1) { //using an infinite loop to run the program until user exits
        while(accountCreated ==false) { //if an account is NOT created, display menu with account creation as option 1
            displayInitMenu();
            cout << promptChoice;
            cin >> menuChoice;
            while(menuChoice != 1) { //this while loop either exits if "5" is entered or forces user to create an account
                                    //before continuing the program
                if(menuChoice == 5)
                {
                    goodbyeMessage();
                    return 0;
                }
                cout << "You must create an account first!\n";
                cout << promptChoice;
                cin >> menuChoice;
            }
            if (menuChoice == 1){ //once user chooses to create an account, the rest of the program will run
                
                cout << "Enter account holder name: ";
                cin.ignore();
                getline(cin , accountHolderName);
                cout << "Enter initial deposit: ";
                cin >> amount;
                while(amount < 0 || cin.fail()) { //checks to see if initial deposit is greater than 0 or NAN
                    cin.clear(); //clearing cin
                    cin.ignore(1000, '\n'); //ignoring any remaining characters in the input buffer
                    cout << "\nInvalid input, please try again\n\n";
                    cout << "Enter initial deposit: ";
                    cin >> amount;
                }
                BankAccount account1(accountHolderName, defaultAccNum, amount); //Bank account is being created
                cout << "\nAccount created successfully!\n\n";
                accountCreated = true;
                //this while loop contains switch case for menu functionality and will run until user ends program
                while (accountCreated == true)
                {
                    account1.displayMenu(); //displays menu after account has been created
                    cout << promptChoice;
                    cin >> menuChoice;
                    switch (menuChoice) {
                        case 1:
                            account1.deposit(); //DEPOSIT OPTION
                            break;
                        case 2: account1.withdrawal(); //WITHDRAWAL OPTION
                            break;
                        case 3:
                            account1.displayBalance(); //DISPLAY BALANCE OPTION
                            break;
                        case 4: //EXIT OPTION
                            goodbyeMessage(); //diplays a goodBye message for the user
                            return 0;
                            break;
                        default: cout << "\nERROR: Enter an option #1-4\n\n";
                    }
                }
            }
        }
    }
    
    return 0;
}

void displayInitMenu() { //this function will be called if the user has not created an account//
    cout << "Welcome to Simple Bank System\n";
    cout << "1. Create Account\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Check Balance\n";
    cout << "5. Exit\n\n";
}

void goodbyeMessage() { // displays a goodbye message when user exits program
     cout << "\nThank you for using Simple Bank System!\n\n";
}

