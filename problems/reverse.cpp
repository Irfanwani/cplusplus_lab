#include <iostream>
using namespace std;

string reverseString(string s) {
    string res = "";
    for(int i = s.length() - 1; i >= 0; i--) {
        res += s[i];
    }

    return res;
}

int main() {
    string s;
    getline(cin, s);
    string res = reverseString(s);

    cout << res;
    return 0;
}