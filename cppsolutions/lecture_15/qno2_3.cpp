// You are using GCC
#include <iostream>
using namespace std;

class Z
{
public:
    Z()
    {
        cout << "Constructor called" << endl;
    }

    ~Z()
    {
        cout << "Destructor called" << endl;
    }
};

void manageObjects(int n)
{
    Z z[n];
};

int main()
{
    int num;
    cin >> num;

    manageObjects(num);

    return 0;
}