#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream newfile("myfile.txt");
    string s;
    getline(cin, s);
    if (newfile.is_open())
    {
        newfile << s << endl;
        newfile.close();
    }

    ifstream file("myfile.txt");
    file.seekg(6); // move the pointer to sixth position in the file.
    if (file.is_open())
    {

        getline(file, s); // this will read the data from the file after the 6th character as we set the pointer to that position using seekg
        cout << s << endl;

        file.close();
    }

    return 0;
}