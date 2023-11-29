// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    string inp;
    getline(cin, inp);

    char c;
    cin >> c;
    inp.push_back(c);

    cout << "Modified string after push back: " << inp << endl;

    inp.pop_back();
    cout << "Modified string after pop back: " << inp << endl;

    return 0;
}