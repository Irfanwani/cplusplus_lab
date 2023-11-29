// You are using GCC
#include <iostream>
using namespace std;

class Account {
    public:
    float amount;
    Account() {
        amount = 0;
    }
    
    virtual void withdraw(float amount) = 0;
    virtual void deposit(float amount) = 0;
    virtual void display() {
        cout << "Savings Account Balance: " << this->amount << endl;
    }
};

class SavingsAccount: public Account {
    public:
    void withdraw(float amount) {
        if(amount > this->amount) {
            cout << "Insufficient funds. Withdrawal canceled." << endl;
        }else {
            this->amount -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
    }
    
    void deposit(float amount) {
        this->amount += amount;
        cout << "Amount deposited: " << amount << endl;
    }
};

int main() {
    int choice, amount;
    SavingsAccount sa; 
    while(cin >> choice) {
        if(choice == 1) {
            cin >> amount;
            sa.deposit(amount);
        }else if(choice == 2) {
            cin >> amount;
            sa.withdraw(amount);
        }else if(choice == 3){
            sa.display();
        }else if(choice == 0 || amount == 0) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
        
    }
    return 0;
}