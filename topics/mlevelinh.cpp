#include <iostream>
using namespace std;

class PmFund
{
    int amount;

public:
    PmFund(int amount)
    {
        this->amount = amount;
        cout << "Total amount in the fund: " << this->amount << endl;
    }
};

class Bank : public PmFund
{
    string bankname, ifsccode;

public:
    Bank(int amount, string name, string code) : PmFund(amount), bankname(name), ifsccode(code)
    {
        cout << "Bank details: " << this->bankname << " (" << this->ifsccode << ")" << endl;
    };
};
class Customer : public Bank
{
    string name;
    int id, balance;

public:
    Customer(string n, int cid, int bal, int amount, string bname, string code) : Bank(amount, bname, code), name(n), id(cid), balance(bal){};
    void getBalance()
    {
        cout << "Balance of the customer: " << this->balance << endl;
    }
};

int main()
{
    int totalAmount, cid, balance;
    string bankname, customername, ifsccode;
    cout << "Enter total fund amount: ";
    cin >> totalAmount;
    cout << "Enter bank details: " << endl;
    cout << "Bank Name: ";
    cin >> bankname;
    cout << "IFSC code: ";
    cin >> ifsccode;

    cout << "Enter customer details: " << endl;
    cout << "Name: ";
    cin >> customername;
    cout << "ID: ";
    cin >> cid;
    cout << "Balance: ";
    cin >> balance;

    Customer c(customername, cid, balance, totalAmount, bankname, ifsccode);
    c.getBalance();

    return 0;
}