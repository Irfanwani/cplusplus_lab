// You are using GCC
#include <iostream>
using namespace std;

template <typename T>
void convertString(T s, char c)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = c == 'U' ? toupper(s[i]) : tolower(s[i]);
    }

    if (c == 'U')
        cout << "Uppercase string: ";
    else
        cout << "Lowercase string: ";
    cout << s;
};

template <typename T>
void convertFirstLetterToUpper(T s)
{
    cout << "String with first letter of each word capitalized: ";
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 || s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
}

int main()
{
    string s;
    char c;
    getline(cin, s);
    cin >> c;

    if (c == 'F')
    {
        convertFirstLetterToUpper(s);
    }
    else if (c == 'U')
    {
        convertString(s, c);
    }
    else if (c == 'L')
    {
        convertString(s, c);
    }
    else
    {
        cout << "Invalid choice. Please enter U, L, or F.";
    }

    return 0;
}