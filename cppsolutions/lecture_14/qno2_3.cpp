// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Money
{
    int *rupee, *paisa;

public:
    void setdata(int r[], int p[])
    {
        this->rupee = r;
        this->paisa = p;
    }

    void getdata()
    {
        float totalmoney = *(rupee) + *(rupee + 1) + ((*(paisa) + *(paisa + 1)) / 100.0);
        cout << fixed << setprecision(2) << totalmoney << endl;
    }
};

int main()
{
    Money money;
    int rupee[2], paisa[2];
    cin >> rupee[0] >> paisa[0];
    cin >> rupee[1] >> paisa[1];
    money.setdata(rupee, paisa);
    money.getdata();
    return 0;
}