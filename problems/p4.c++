#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter the two numbers to swap: ";
    cin >> a;
    cin >> b;

    // swap using third variable (temp)
    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;

    // swap without third variable
    int c, d;
    cout << "Enter the two numbers (swap without 3rd var): ";
    cin >> c;
    cin >> d;

    d = c + d;
    c = d - c;
    d = d - c;
    cout << c << " " << d;

    return 0;
}