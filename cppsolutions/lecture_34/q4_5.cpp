// You are using GCC
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Icecream
{
public:
    void Quantity(int r)
    {
        double vol = r * r * r;
        cout << fixed << setprecision(2) << vol << endl;
    }

    void Quantity(int r, int h)
    {
        double vol = 0.33 * M_PI * r * r * h;
        cout << fixed << setprecision(2) << vol << endl;
    }
};

int main()
{
    int c, r;
    cin >> c;
    Icecream ic;
    if (c == 1)
    {
        cin >> r;
        ic.Quantity(r);
    }
    else
    {
        int h;
        cin >> r >> h;
        ic.Quantity(r, h);
    }
    return 0;
}