// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    try
    {
        if (num > 0)
        {
            throw 1.0;
        }
        else if (num < 0)
        {
            throw -1;
        }
        else
        {
            throw 'Z';
        }
    }
    catch (double x)
    {
        cout << "You Entered Positive number";
    }
    catch (int x)
    {
        cout << "You Entered Negative Number";
    }
    catch (char s)
    {
        cout << "You Entered Zero";
    }
}