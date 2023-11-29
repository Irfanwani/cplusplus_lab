// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class ItemType {
    public:
    virtual double calculateAmount() {
        return 0.0;
    };
};

class wooden: public ItemType {
    int num;
    double cost;
    public:
    wooden(int num, double cost) {
        this->num = num;
        this->cost = cost;
    }
    double calculateAmount() override {
        return this->num * this->cost;
    }
    
};

class electronics: public ItemType {
    double cost;
    public:
    electronics(double cost) {
        this->cost = cost;
    }
    double calculateAmount() override {
        return this->cost * 0.8;
    }
};

int main() {
    int choice, num = 0;
    double cost, res;
    cin >> choice;
    if(choice == 1) {
        cin >> num >> cost;
        wooden w(num, cost);
        res =  w.calculateAmount();
    }else if(choice == 2) {
        cin >> cost;
        electronics e(cost);
        res = e.calculateAmount();
    } else {
        return 0;
    }
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}