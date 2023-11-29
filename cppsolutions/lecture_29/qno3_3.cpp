// You are using GCC
#include <iostream>
using namespace std;

class currentBill
{
public:
    virtual double amount()
    {
        return 0.0;
    };
};

class Fan : public currentBill
{
    double rating, hours;

public:
    Fan(double r, double h) : rating(r), hours(h) {}
    double amount() override
    {
        return rating * hours * 0.0015;
    }
};

class Light : public currentBill
{
    double rating, hours;

public:
    Light(double r, double h) : rating(r), hours(h) {}
    double amount() override
    {
        return rating * hours * 0.0015;
    }
};

class TV : public currentBill
{
    double rating, hours;

public:
    TV(double r, double h) : rating(r), hours(h) {}
    double amount() override
    {
        return rating * hours * 0.0015;
    }
};

int main()
{
    double fr, fh, lr, lh, tr, th, total = 0;
    cin >> fr >> fh;
    cin >> lr >> lh;
    cin >> tr >> th;
    Fan f(fr, fh);
    Light l(lr, lh);
    TV t(tr, th);
    total = f.amount() + l.amount() + t.amount();
    cout << total << endl;
    return 0;
}