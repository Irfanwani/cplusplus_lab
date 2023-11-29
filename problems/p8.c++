// Fibonacci series
#include <iostream>
using namespace std;

int main()
{
    int num, i, ld = 1, sm = 0, temp;
    cout << "Enter the number: ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        temp = sm;
        sm += ld;
        ld = temp;

        cout << sm << endl;
    }

    return 0;
}