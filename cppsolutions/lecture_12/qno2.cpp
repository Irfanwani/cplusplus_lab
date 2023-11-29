// You are using GCC
#include <iostream>
using namespace std;

bool isPalindrome(const string &str)
{
    int i = 0;
    size_t j = str.size() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
};

int main()
{
    string inp;
    cin >> inp;
    bool res = isPalindrome(inp);
    if (res)
    {
        cout << "The string is a palindrome.";
    }
    else
    {
        cout << "The string is not a palindrome.";
    }
    return 0;
}