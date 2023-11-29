// Factorial of a number
#include <iostream>
using namespace std;

int main()
{
    int num, i, res = 1;
    cout << "Enter the number: ";

    cin >> num;

    for (i = 1; i <= num; i++)
    {
        res *= i;
    }

    cout << res;
    return 0;
}