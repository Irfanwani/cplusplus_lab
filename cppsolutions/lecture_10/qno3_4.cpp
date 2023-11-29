// You are using GCC
#include <iostream>
using namespace std;

int checkPointer(int *ptr, int defaultValue)
{
    if (!ptr)
    {
        return defaultValue;
    }

    return *ptr;
};

int main()
{
    int res, val, *ptr = nullptr;
    res = checkPointer(ptr, 0);
    cout << "Result: " << res << endl;

    cin >> val;
    ptr = &val;

    res = checkPointer(ptr, 0);
    cout << "Result: " << res << endl;
    return 0;
}