#include <iostream>
using namespace std;

class BankAccount {

private:
    double balance;

public:

    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
        cout<<"Deposited Successfully\n";
    }

    void withdraw(double amount) {
        if(amount > balance)
            cout<<"Insufficient Balance\n";
        else {
            balance -= amount;
            cout<<"Withdraw Successful\n";
        }
    }

    void checkBalance() {
        cout<<"Current Balance: "<<balance<<endl;
    }
};

int main() {

    BankAccount acc;
    int choice;
    double amount;

    do {

        cout<<"\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice) {

            case 1:
                cout<<"Enter amount: ";
                cin>>amount;
                acc.deposit(amount);
                break;

            case 2:
                cout<<"Enter amount: ";
                cin>>amount;
                acc.withdraw(amount);
                break;

            case 3:
                acc.checkBalance();
                break;

        }

    } while(choice != 4);

    return 0;
}
