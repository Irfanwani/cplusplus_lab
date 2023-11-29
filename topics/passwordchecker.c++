// password should have 8 characters, combination of uppercase, lowercase, numericals and special characters.

#include <iostream>
using namespace std; // not a good thing to add in projects, but not a big deal for current situations

bool passwordchecker(string password)
{
    bool uc = false, lc = false, sc = false, num = false;
    if (password.length() < 8)
    {
        return false;
    }
    for (int i = 0; i < password.length(); i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            uc = true;
        }
        else if (password[i] >= 'a' && password[i] <= 'z')
        {
            lc = true;
        }
        else if (password[i] >= '0' && password[i] <= '9')
        {
            num = true;
        }
        else
        {
            sc = true;
        }
    }

    cout << uc << lc << sc << num << endl;

    if (uc && lc && sc && num)
        return true;
    return false;
}

int main()
{
    string password;
    cout << "Enter the password: ";
    cin >> password;

    bool res = passwordchecker(password);
    if (!res)
    {
        cout << "Please enter a strong password. Password must have atleast 8 characters, 1 uppercase, 1 lowercase, 1 numerical and a special character." << endl;
    }
    else
    {
        cout << "Password saved successfully!" << endl;
    }

    return 0;
}