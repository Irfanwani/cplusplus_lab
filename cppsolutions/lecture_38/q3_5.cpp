// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cin >> num;
    try
    {
        if (num < 100 || num > 999)
        {
            throw 400;
        }

        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        cout << "Sum of the digits is " << sum << endl;
    }
    catch (...)
    {
        cout << "It's not a three digit Number or valid number";
    }
    return 0;
}