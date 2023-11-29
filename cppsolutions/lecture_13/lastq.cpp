// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    string str1, str2, str3;
    int a, b, c;
    getline(cin, str1);
    getline(cin, str2);
    getline(cin, str3);
    cin >> a;
    cin >> b;
    cin >> c;
    str1.append(str2);
    cout << "Modified string after append: " << str1 << endl;
    str1.insert(a, str3);
    cout << "Modified string after insert: " << str1 << endl;
    str1.erase(b, c);

    cout << "Modified string after erase: " << str1 << endl;
    return 0;
}