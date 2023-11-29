// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    ofstream file;
    file.open("sample.txt");
    for (int i = 0; i < num; i++)
    {
        int rollno;
        float marks;
        string name;
        cin >> rollno;
        cin.ignore(30, '\n');
        getline(cin, name);
        cin >> marks;

        file << rollno << endl;
        file << name << endl;
        file << marks << endl;
    }

    file.close();

    ifstream f2;
    f2.open("sample.txt");
    int rn;
    float mrks;
    string nm;

    cout << "Reading Student information to the file :- " << endl;
    for (int i = 0; i < num; i++)
    {
        f2 >> rn;
        cout << "Roll No.: " << rn << endl;
        f2 >> nm;
        cout << "Name : " << nm << endl;
        f2 >> mrks;
        cout << "Marks : " << mrks << endl;
    }

    return 0;
}