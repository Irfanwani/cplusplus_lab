// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    ofstream file;
    file.open("sample.txt");

    file << s << endl;
    file.close();

    ifstream file2("sample.txt");
    string s2;
    getline(file2, s2);
    cout << s2 << endl;

    return 0;
}