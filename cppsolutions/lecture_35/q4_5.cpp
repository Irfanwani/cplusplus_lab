// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

float returns(float initial, float final) {
    return (final - initial) * (100 / initial);
    
};

class Investment {
    public:
    virtual void calculateReturns() = 0;
};

class Stock: public Investment {
    float inv, final;
    public:
    Stock(float invst, float fn): inv(invst), final(fn) {};
    
    void calculateReturns() {
        cout << "Type: Stock" << endl;
        cout << "Initial Investment: " << inv << endl;
        cout << "Final Value: " << final << endl;
        cout << "Returns: " << returns(inv, final) << "%" << endl;
    }
};

class Bond: public Investment {
    float inv, final;
    public:
    Bond(float invst, float fn): inv(invst), final(fn) {};
    
    void calculateReturns() {
        cout << "Type: Bond" << endl;
        cout << "InitialInvestment: " << inv << endl;
        cout << "Final Value: " << final << endl;
        cout << "Returns: " << returns(inv, final) << "%" << endl;
    }
};

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << fixed << setprecision(2);
    Stock stock(a, b);
    stock.calculateReturns();
    
    Bond bond(c, d);
    bond.calculateReturns();

    return 0;
}