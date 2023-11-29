// You are using GCC
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Date
{
public:
    Date(){};
    Date(int year, int month, int day)
    {
        if (year > 0 && checkMonth(year, month, day))
        {
            cout << "Date: " << setw(2) << setfill('0') << day << "/" << setw(2) << setfill('0') << month << "/" << year << endl;
        }
        else
        {
            cout << "Invalid date entered." << endl;
        }
    }

    bool checkLeap(int year)
    {
        if (year % 4 == 0)
        {
            if (year % 100 != 0)
                return true;
            else
            {
                if (year % 400 == 0)
                    return true;
                return false;
            }
        }
        return false;
    }

    bool checkMonth(int year, int month, int day)
    {
        int oddmonths[7] = {1, 3, 5, 7, 8, 10, 12};

        if (month < 0 || month > 12)
            return false;
        if (day < 0 || day > 31)
            return false;

        if (day == 31)
        {
            for (int i = 0; i < 7; i++)
            {
                if (month == oddmonths[i])
                    return true;
            }
            return false;
        }

        if (month == 2)
        {
            if (day <= 28)
                return true;
            if (day == 29)
            {
                if (this->checkLeap(year))
                    return true;
                return false;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int year = stoi(s.substr(0, len - 4));
    int month = stoi(s.substr(len - 4, 2));
    int day = stoi(s.substr(len - 2, 2));
    Date date(year, month, day);

    return 0;
}