// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int c;
    cin >> c;
    if (c > 10 || c < 1)
    {
        cout << "-1";
        return 0;
    }

    vector<int> arr = {11, 21, 33, 14, 41, 60, 13, 8, 25, 50};
    vector<int>::iterator i = arr.begin();
    advance(i, c - 1);

    int num = *i;

    for (int j = 1; j <= 10; j++)
    {
        cout << num << " * " << j << " = " << num * j << endl;
    }

    return 0;
}