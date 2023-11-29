// You are using GCC
#include <iostream>
using namespace std;

class Over
{
    string place;
    string day;
    int temp;

public:
    Over()
    {
        this->place = "";
        this->day = "";
        this->temp = 0;
    }

    Over(string place, int temp)
    {
        this->place = place;
        this->temp = temp;
    }

    Over(string place, int temp, string day)
    {
        this->place = place;
        this->temp = temp;
        this->day = day;
    }

    void displayDetails()
    {
        if (this->place != "")
            cout << this->place;
        if (this->day != "")
            cout << " " << this->day;
        cout << " Temperature: " << this->temp << "°" << endl;
    }
};

int main()
{
    string p1, p2, d1;
    int t1, t2;
    cin >> p1 >> t1;
    cin >> p2 >> d1 >> t2;

    Over obj1;
    cout << "Object 1:" << endl;
    obj1.displayDetails();

    Over obj2(p1, t1);
    cout << "Object 2:" << endl;
    obj2.displayDetails();

    Over obj3(p2, t2, d1);
    cout << "Object 3:" << endl;
    obj3.displayDetails();

    return 0;
}