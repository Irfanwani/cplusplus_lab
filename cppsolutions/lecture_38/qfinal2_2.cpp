// You are using GCC
#include <iostream>
using namespace std;

int main()
{
    string username, password;
    cin >> username >> password;

    try
    {
        int len = password.length();
        bool hasdigit = false;
        if (len < 6)
        {
            throw 1;
        }

        for (int i = 0; i < len; i++)
        {
            if (password[i] >= '0' && password[i] <= '9')
            {
                hasdigit = true;
                break;
            }
        }

        if (!hasdigit)
        {
            throw 2;
        }

        cout << "Password is Correct";
    }
    catch (int e)
    {
        if (e == 1)
        {
            cout << "Password must be at least 6 Characters Long...\n";
        }
        else
        {
            cout << "Password must have at least One Digit (0-9)\n";
        }

        cout << "Caught by Exception\nInvalid Password Format!!!";
    }
    return 0;
}