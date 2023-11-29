// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

bool findel(char arr[], char ch)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == ch)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string s;
    getline(cin, s);
    char vovels[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

    ofstream file;
    file.open("sample.txt");
    file << s;
    cout << s << endl;

    for (int i = 0; i < s.length(); i++)
    {
        if (findel(vovels, s[i]))
        {
            s[i] = '#';
        }
    }

    file << s;
    cout << s << endl;

    file.close();

    return 0;
}