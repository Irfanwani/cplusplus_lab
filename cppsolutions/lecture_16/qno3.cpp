// You are using GCC
#include <iostream>
using namespace std;

class Money
{
    int r, p;

public:
    Money(int r = 0, int p = 0)
    {
        this->r = r;
        this->p = p;
    }

    void setRupee(int r)
    {
        this->r += r;
    }
    void setPaisa(int p)
    {
        this->p += p;
        if (this->p >= 100)
        {
            this->r += 1;
            this->p -= 100;
        }
    }
    int getRupee()
    {
        return this->r;
    }
    int getPaisa()
    {
        return this->p;
    }
};

int main()
{
    int r, p;
    cin >> r >> p;
    Money money(r, p);
    cin >> r >> p;

    money.setRupee(r);
    money.setPaisa(p);

    cout << money.getRupee() << "." << money.getPaisa() << endl;
    return 0;
}