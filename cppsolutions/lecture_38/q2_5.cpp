// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int x, sum = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> x;
        try
        {
            if (x < 0)
            {
                throw 400;
            }
            sum += x;
        }
        catch (...)
        {
            cout << "Negative number found at index " << i << endl;
            break;
        }
    }

    cout << "The sum is : " << sum;

    return 0;
}