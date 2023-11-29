// johan wants to write a program
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    char sc[35] = "!@#$%^&*()-_+=<>/[]{};:,.?|~\\`";
    string name;
    char password[8];
    int i, j;
    cout << "Enter a username and a password (space separated): " << endl;
    cin >> name >> password;

    // check for special characters manually
    // for (i = 0; i < strlen(sc); i++)
    // {
    //     for (j = 0; j < strlen(password); j++)
    //     {
    //         if (password[j] == sc[i])
    //         {
    //             cout << "Special characters are not allowed!";
    //             return 0;
    //         }
    //     }
    // }

    // using functions from ctype header file to check if the character is an alphabet or a number
    for (i = 0; i < strlen(password); i++)
    {
        if (!isalpha(password[i]) && !isnumber(password[i]))
        {
            cout << "Password can only contain alphabets and numbers!";
            return 0;
        }
    }

    cout << "Name: " << name << endl;
    cout << "Password: " << password << endl;

    return 0;
}