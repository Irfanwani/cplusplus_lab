// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

struct BankAccount
{
    float acc;
    float balance;
};

int main()
{
    BankAccount *ptr = nullptr;
    ptr = new BankAccount;
    cin >> ptr->acc;
    cin >> ptr->balance;

    cout << "Account Balance: $" << ptr->balance << endl;
    delete ptr;
    ptr = nullptr;
    if (!ptr)
    {
        cout << "Error: Dangling pointer detected!" << endl;
    }

    return 0;
}