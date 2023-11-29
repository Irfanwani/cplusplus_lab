// You are using GCC
#include <iostream>
using namespace std;

template <class T>
void maxValue(T a, T b)
{
    cout << "Maximum value: " << (a > b ? a : b) << endl;
}

int main()
{
    int a, b;
    double c, d;
    cin >> a >> b >> c >> d;

    maxValue(a, b);
    maxValue(c, d);
    return 0;
}