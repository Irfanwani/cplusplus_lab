// You are using GCC
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, s3;
    int a, b, c;

    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    cin >> a;
    cin >> b;
    cin >> c;

    int index = s1.find(s2);
    s1.replace(index, s2.length(), s3);

    cout << "Modified string after replace: " << s1 << endl;

    string sub = s1.substr(a, b);

    cout << "Substring: " << sub << endl;

    s1.resize(c);

    cout << "Resized string: " << s1 << endl;

    return 0;
}