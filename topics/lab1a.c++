#include <iostream>
using namespace std;

int main()
{
    int num, res = 0;
    cout << "Enter the number: ";
    cin >> num;

    while (num > 0)
    {
        res += num % 10;
        num /= 10;
    }

    cout << "Sum of digits: " << res << endl;

    return 0;
}