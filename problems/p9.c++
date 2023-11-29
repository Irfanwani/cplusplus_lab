// palindrome
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char name[10];
    cout << "Enter the name: ";
    cin >> name;

    int i = 0, j = strlen(name) - 1;
    while (i < j)
    {
        if (name[i] != name[j])
        {
            cout << "String is not a palindrome";
            return 0;
        }

        i++;
        j--;
    }

    cout << "String is a palindrome";

    return 0;
}