// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    ofstream file;
    file.open(s);

    if (file.is_open())
    {
        cout << "File '" << s << "' opened successfully." << endl;
        file.close();
        cout << "File '" << s << "' closed successfully." << endl;
    }

    return 0;
}