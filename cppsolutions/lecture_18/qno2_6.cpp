// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("sample.txt");

    string s, t;
    getline(cin, s);

    if (file.is_open())
    {
        file << "Time is a Great Teacher BUT Unfortunately It Kills All Its Pupils";
        file << " " << s;

        cout << "Data appended successfully" << endl;
        file.close();
    }

    ifstream file2;
    file2.open("sample.txt");

    if (file2.is_open())
    {
        getline(file2, t);
        cout << t << endl;
    }
    else
    {
        cout << "nothing";
    }
    return 0;
}