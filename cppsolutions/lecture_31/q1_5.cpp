// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double *ptr = new double;
    double x, y;
    cin >> x >> y;
    *ptr = x * y;
    cout << fixed << setprecision(2) << *ptr << endl;
    delete ptr;

    return 0;
}