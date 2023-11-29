#include <iostream>
using namespace std;

int main()
{
    void *ptr;

    int num;
    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    cout << *(int *)ptr << endl; // we need to typcast the ptr explicitly to get the value from the address
    return 0;
}