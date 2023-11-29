// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    int numterms, initialterm, diff, sum = 0;
    cin >> numterms >> initialterm >> diff;

    int *ptr = new int[numterms];
    for (int i = 0; i < numterms; i++)
    {
        ptr[i] = initialterm;
        sum += ptr[i];
        initialterm += diff;
    }
    cout << sum << endl;
    delete ptr;
    return 0;
}