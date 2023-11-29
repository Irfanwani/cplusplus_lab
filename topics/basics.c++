#include <iostream>
using namespace std;

#define PI 3.14            // defining constant using preprocessors
const char newline = '\n'; // defining constant using const keyword

int main()
{
    cout << PI << endl;
    cout << newline;
    cout << "Random text after new line" << endl;

    // conditional ternary operator
    int a = 2, b = 3;
    int res = (3 > 2) ? a : b; // if condition evaluates to true (i.e, if 3 is greater than 2) than res = a else res = b
    cout << res;
    return 0;
}