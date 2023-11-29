// check if number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int num, i, fc = 1;
    cout << "Enter the number: ";
    cin >> num;

    if (num == 1)
    {
        cout << "1 is neither prime nor composite";
        return 0;
    }
    for (i = 1; i <= num / 2; i++)
    {
        if (fc > 2)
            break;
        if (num % i == 0)
        {
            fc++;
        }
    }

    if (fc == 2)
        cout << "This is a prime number";
    else
        cout << "This is a composite number";
    return 0;
}