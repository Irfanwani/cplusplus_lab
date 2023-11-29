// pattern programs
#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter a number: ";
    cin >> num;

    // pyramid pattern
    for (i = 1; i <= num; i++)
    {
        cout << string(i, '*') << endl;
    }

    return 0;
}