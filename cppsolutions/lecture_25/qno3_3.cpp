// You are using GCC
#include <iostream>
using namespace std;

class FullName
{
    string fullname;

public:
    FullName(string fn, string ln)
    {
        this->fullname = fn + " " + ln;
    }

    operator string()
    {
        return this->fullname;
    }
};

int main()
{
    string firstName, lastName;
    getline(cin, firstName);
    getline(cin, lastName);
    FullName fullName(firstName, lastName);
    string fullname = fullName;
    cout << fullname;
    return 0;
}