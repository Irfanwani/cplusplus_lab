// You are using GCC
#include <iostream>
using namespace std;

void concatenateStrings(string s1, string s2, string &s3)
{
    s3 = s1 + s2;
};

int main()
{
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    concatenateStrings(s1, s2, s3);

    cout << s3 << endl;
    return 0;
}