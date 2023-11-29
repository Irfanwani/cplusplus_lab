// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    int num, den;
    try
    {
        cin >> num >> den;
        if (den == 0)
        {
            throw 400;
        }

        cout << num / den;
    }
    catch (...)
    {
        cout << "Divide by Zero Exception";
    }

    return 0;
}