#include <iostream>
using namespace std;

int main() {

    string s1, s2;

    cin >> s1;
    cin >> s2;

    s1.swap(s2);

    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}