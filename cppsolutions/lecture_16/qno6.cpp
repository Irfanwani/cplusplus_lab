// You are using GCC
#include <iostream>
using namespace std;

class man
{
    inline static int no = 0;

public:
    man()
    {
        no++;
        cout << "number of objects created: " << no << endl;
    }

    ~man()
    {
        no--;
        cout << "number of objects exist: " << no << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    man m[n];
    return 0;
}