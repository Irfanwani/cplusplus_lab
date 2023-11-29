// You are using GCC
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    char ch;
    cin >> s >> ch;

    auto charEquals = [ch](char c) -> bool
    {
        return c != ch;
    };
    int count = count_if(s.begin(), s.end(), charEquals);
    cout << count;
    return 0;
}