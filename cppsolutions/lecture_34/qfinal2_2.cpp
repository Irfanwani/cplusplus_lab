// You are using GCC
#include <iostream>
using namespace std;

class CoffeeShop
{
public:
    virtual void calculateTotal() = 0;
    virtual ~CoffeeShop()
    {
    }
};

class CustomerOrder : public CoffeeShop
{
    float cprice, tprice, pprice;
    int cquantity, tquantity, pquantity;

public:
    CustomerOrder(float c, float t, float p, int cq, int tq, int pq) : cprice(c), tprice(t), pprice(p), cquantity(cq), tquantity(tq), pquantity(pq){};

    void calculateTotal()
    {
        float res = cprice * cquantity + tprice * tquantity + pprice * pquantity;

        cout << "Total cost of the order is $" << res << endl;
    }
};

int main()
{
    float x, y, z;
    int a, b, c;
    cin >> x >> a >> y >> b >> z >> c;
    CustomerOrder co(x, y, z, a, b, c);
    co.calculateTotal();
    return 0;
}