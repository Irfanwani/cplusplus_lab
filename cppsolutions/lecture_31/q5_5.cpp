// You are using GCC
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string *ptr = new string;
    int start = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' || i == s.length() - 1)
        {
            int end = i - start;
            if (i == s.length() - 1)
                end++;
            *ptr = s.substr(start, end);
            sort((*ptr).begin(), (*ptr).end());
            start = i;
            cout << *ptr;
        }
    }

    delete ptr;
    return 0;
}