// You are using GCC
#include <iostream>
using namespace std;

class ItemDetails
{
public:
    void getDetails(string name, int itemnum, float price, float discount, float dp)
    {
        cout << "Item name: " << name << endl;
        cout << "Item number: " << itemnum << endl;
        cout << "Item price: " << price << endl;
        cout << "Discount percent: " << discount << "%" << endl;
        cout << "Discounted price: " << price - dp << endl;
    }
};

class DiscountedItem : public ItemDetails
{
    float price, percentage;

public:
    inline static float totalprice = 0, totaldiscount = 0;
    DiscountedItem() {}
    DiscountedItem(string name, int itemNumber, float price, float discount)
    {
        totalprice += price;
        float dp = (discount * price) / 100.0;
        totaldiscount += dp;
        this->getDetails(name, itemNumber, price, discount, dp);
    }

    static void getFinal()
    {
        cout << "\nTotal price: " << totalprice << endl;
        cout << "Total discount: " << totaldiscount << endl;
    }
};

int main()
{
    int n, itemnum;
    string name;
    float price, discount;

    cin >> n;
    DiscountedItem *items = new DiscountedItem[n];
    cout << "Item-wise bill:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> itemnum;
        cin >> price;
        cin >> discount;
        items[i] = DiscountedItem(name, itemnum, price, discount);
    }

    DiscountedItem::getFinal();
    return 0;
}