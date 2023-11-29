// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);
    cout << "The first string before swapping is : " << s1 << endl;
    cout << "The second string before swapping is : " << s2 << endl;
    s1.swap(s2);
    cout << "The first string after swapping is : " << s1 << endl;
    cout << "The second string after swapping is : " << s2 << endl;

    return 0;
}