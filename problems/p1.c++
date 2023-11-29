#include <iostream>
using namespace std;

int main()
{

    int units;
    int bill;
    cout << "Enter the number of units used: ";
    cin >> units;
    if (units >= 0 && units <= 10)
    {
        bill = 0;
    }
    else if (units > 10 && units <= 20)
    {
        bill = 2 * units;
    }
    else if (units > 20 && units <= 30)
    {
        bill = 4 * units;
    }
    else if (units > 30)
    {
        bill = 10 * units;
    }
    else
    {
        cout << "Invalid number of units";
    }

    cout << "Total bill: " << bill << endl;
    return 0;
}