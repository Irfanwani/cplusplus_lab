#include <iostream>
using namespace std;

int main()
{
    int ct, at, st, x, total_sales;
    cout << "Number of adult tickets sold more than the children tickets: ";
    cin >> x;
    cout << "Enter the total sales made: ";
    cin >> total_sales;

    ct = (total_sales - 5*x) / 13;
    at = ct + x;
    st = ct * 2;

    cout << "Number of child tickets sold: " << ct << endl;
    cout << "Number of adult tickets sold: " << at << endl;
    cout << "Number of senior tickets sold: " << st << endl;

    return 0;
}

// ct + x = at;
// ct = at - x;
// 2*ct = st;
// ct = st / 2;
// total_sales = ct * 2 + at * 5 + st * 3;
// total_sales = 2ct + 5ct+ 5x + 6ct;
// total_sales = 13ct + 5x;
// ct = (total_sales - 5x) / 13;