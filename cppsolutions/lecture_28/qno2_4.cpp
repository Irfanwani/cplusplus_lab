// You are using GCC
#include <iostream>
using namespace std;

class SilverStall
{
protected:
    string name, detail, owner;
    int cost;

public:
    SilverStall() {}

    SilverStall(string name, string detail, string owner, int cost)
    {
        this->name = name;
        this->detail = detail;
        this->owner = owner;
        this->cost = cost;
    }
};

class GoldStall : protected SilverStall
{
    int tvSet;

public:
    GoldStall() {}

    GoldStall(string name, string detail, string owner, int cost, int numtvs) : SilverStall(name, detail, owner, cost)
    {
        this->tvSet = 100 * numtvs;
        this->cost += this->tvSet;
    }
};

class PlatinumStall : protected GoldStall
{
    int projector;

public:
    PlatinumStall() {}

    PlatinumStall(string name, string detail, string owner, int cost, int numtvs, int projnum) : GoldStall(name, detail, owner, cost, numtvs)
    {
        this->projector = 500 * projnum;
        this->cost += this->projector;
        cout << this->cost << endl;
    }
};

int main()
{
    int num, cost, tvsets = 0, psets = 0;
    string name, detail, owner;
    cin >> num >> name >> detail >> owner >> cost;
    if (num == 2)
    {
        cin >> tvsets;
    }
    if (num == 3)
    {
        cin >> tvsets;
        cin >> psets;
    }
    if (num > 3)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }

    PlatinumStall ps(name, detail, owner, cost, tvsets, psets);

    return 0;
}