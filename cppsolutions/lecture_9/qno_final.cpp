// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

void calculateExpenses(int *ptr)
{
    int i;
    float total = 0;
    for (i = 0; i < 4; i++)
    {
        total += *(ptr + i);
    }

    cout << "Total expenses: Rs." << fixed << setprecision(2) << total << endl;
    cout << "Branding expenses percentage: " << fixed << setprecision(2) << *(ptr)*100 / total << endl;
    cout << "Travel expenses percentage: " << fixed << setprecision(2) << *(ptr + 1) * 100 / total << endl;
    cout << "Food expenses percentage: " << fixed << setprecision(2) << *(ptr + 2) * 100 / total << endl;
    cout << "Logistics expenses percentage: " << fixed << setprecision(2) << *(ptr + 3) * 100 / total << endl;
}
int main()
{
    int i, *ptr;
    ptr = new int[4];
    for (i = 0; i < 4; i++)
    {
        cin >> *(ptr + i);
    }

    calculateExpenses(ptr);

    return 0;
}