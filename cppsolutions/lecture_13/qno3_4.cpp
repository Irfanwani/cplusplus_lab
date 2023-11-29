// You are using GCC
#include <iostream>
using namespace std;

class Input
{
public:
    int inp;

    void displaydigits()
    {
        int count = 0, i;
        while (inp > 0)
        {
            this->inp /= 10;
            count++;
        }

        cout << count << endl;
    }
};

int main()
{
    Input inp;
    cin >> inp.inp;
    inp.displaydigits();

    return 0;
}