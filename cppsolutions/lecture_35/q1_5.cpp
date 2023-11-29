// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Product
{
public:
    virtual void calculateTotalPrice(float price, float dt) = 0;
};

class Electronics : public Product
{
public:
    void calculateTotalPrice(float x, float y)
    {
        float res = x - ((y / 100.0) * x);
        cout << res << endl;
    }
};

class Apparel : public Product
{
public:
    void calculateTotalPrice(float x, float y)
    {
        float res = x + ((y / 100.0) * x);
        cout << res << endl;
    }
};

int main()
{
    float a, b, x, y;
    cin >> a >> b >> x >> y;
    Electronics el;
    Apparel ap;

    cout << fixed << setprecision(2);
    el.calculateTotalPrice(a, b);
    ap.calculateTotalPrice(x, y);
    return 0;
}