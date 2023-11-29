// shows the  implementation of the string methods like concat, append etc
#include <iostream>

using namespace std;

int main()
{
    string str1 = "first", str2 = "second";
    str1.append(str2); // appends the argument (str2) at the end of the first string (str1)
    cout << str1 << endl;
    cout << str2 << endl;

    cout << (str1 == str2) << endl; // returns 1 if the strings are equal else 0

    str1.replace(0, 8, str2); // replace the characters from index 0 to index 8 with str2 in str1.
    cout << str1 << endl;

    // resize
    string newstr = "this is a long string";
    newstr.resize(9); // this will resize the string to 9 characters, or in simple words, it will only keep

    cout << newstr << endl;

    // Toupper and tolower. Note that toupper and tolower can only convert a single character into upper or lowercase but cannot do the same with the whole string. So i am using a loop to interate over the string and convert each character to upper or lowercase and log the result.
    char ch;

    for (int i = 0; i < str1.length(); i++)
    {
        ch = toupper(str1[i]);

        cout << ch;
    }

    cout << '\n';
    string lc = "this is a string";
    for (int i = 0; i < lc.length(); i++)
    {
        ch = tolower(lc[i]);
        cout << ch;
    }

    return 0;
}
