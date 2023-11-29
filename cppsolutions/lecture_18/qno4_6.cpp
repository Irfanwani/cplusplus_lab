// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    ofstream infile;
    infile.open("gfg.data");

    infile << s;

    infile.close();

    ifstream f2;
    f2.open("gfg.data");
    string t;
    getline(f2, t);
    cout << t << endl;
    return 0;
}