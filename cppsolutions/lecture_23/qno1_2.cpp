// You are using GCC
#include <iostream>
#include <string.h>
using namespace std;

void operator+(string s1, string s2)
{
    cout << s1 << s2 << endl;
};

void operator*(string s1, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << s1;
    }

    cout << '\n';
};

int main()
{
    string s1, s2;
    int num;
    cin >> s1;
    cin >> s2;
    cin >> num;

    s1 + s2;
    s1 *num;
    s2 *num;

    return 0;
}