#include <iostream>
using namespace std;

int main()
{
    // takes fixed values, starting from 0 (here Jan represents 0). we can change the values too  (Aug = 20)  and the other values will take the values after 20
    enum Months
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug = 20,
        Sep,
        Oct,
        Nov,
        Dec
    };

    Months month = Dec;

    cout << month << endl;
    return 0;
}