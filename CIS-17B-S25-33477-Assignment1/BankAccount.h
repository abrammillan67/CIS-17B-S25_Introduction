#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
using namespace std;

int INIT_BALANCE = 0;

class BankAccount { //Class definition of BankAccount
    
private:
    string accountHolderName;
    string accountNumber;
    int balance;

public:
    BankAccount(); //constructor
    BankAccount(string accountHolderName, string accountNumber, int balance);
    void withdrawal();
    void deposit();
    void setName(string accountHolderName);
    void displayBalance();
    void displayInitMenu();
    void displayMenu();
    
    
}; //end class definition

//IMPLEMENTATION OF ALL CLASS MEMEMBER FUNCTIONS BELOW

BankAccount::BankAccount() { //no arg constructor
    balance = INIT_BALANCE; //setting initial balance to $0
    accountHolderName = "No name";
    accountNumber = "";
}

BankAccount::BankAccount(string accountHolderName, string accountNumber, int balance) {
    this->accountHolderName = accountHolderName;
    this->accountNumber = accountNumber;
    this->balance = balance;
}

void BankAccount::displayBalance() {
    cout << "\n" << accountHolderName << " your balance is: $" << balance << "\n\n";
}

void BankAccount::displayMenu() {
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n\n";
}

void BankAccount::setName(string accountHolderName) { //will use to let user set name of new account
    this->accountHolderName = accountHolderName;
}

void BankAccount::deposit() { //function to handle deposits
    int amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    
    while (amount < 0 || cin.fail()) { //will not let user enter negative numbers or non-numeric values
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "\nInvalid Input, please try again: ";
        cin >> amount;
        }
    this->balance += amount;
    cout << "Deposit successful! New Balance: $" << balance << "\n\n";
   
    }

void BankAccount::withdrawal() { //function to handle withdrawals
    int amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    while (amount < 0 || cin.fail()) { //will not let user enter negative numbers or non-numeric values
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "\nInvalid Input, please try again: ";
        cin >> amount;
        }
    if ((balance - amount) < 0) {
        cout << "Insufficient Funds!\n\n";
        } else {
        this->balance = balance - amount;
        cout << "Withdrawal successful! New Balance: $" << balance << "\n\n";
    }
}

#endif

