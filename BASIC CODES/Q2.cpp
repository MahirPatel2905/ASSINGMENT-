/* Define a class to represent a bank account. Include the following members: 
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */


#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;       
    string accNumber;  
    string accType;    
    double balance;    

public:
    void createAccount(string depositorName, string accountNumber, string accountType, double initialBalance) {
        name = depositorName;
        accNumber = accountNumber;
        accType = accountType;
        balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. Current balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. Current balance: " << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    void displayAccountInfo() {
        cout << "Depositor Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    
    string name, accNumber, accType;
    double initialBalance;
	 cout << "Enter depositor's name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    getline(cin, accNumber);
    cout << "Enter account type: ";
    getline(cin, accType);
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    account.createAccount(name, accNumber, accType, initialBalance);
    int choice;
    double amount;
    do {
        cout << "\n--- Bank Account Menu ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Account Info\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.displayAccountInfo();
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}

