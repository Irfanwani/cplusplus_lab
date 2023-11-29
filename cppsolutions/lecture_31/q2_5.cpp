// You are using GCC
#include <iostream>
using namespace std;

char *reverseString(string s)
{
    char *ptr = new char[s.length()];
    int j = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ptr[j] = s[i];
        j++;
    }
    return ptr;
};

int main()
{
    string inp;
    getline(cin, inp);

    char *ptr = reverseString(inp);
    cout << "Reversed string:";
    for (int i = 0; i < inp.length(); i++)
    {
        cout << *(ptr + i);
    }
    delete ptr;
    return 0;
}