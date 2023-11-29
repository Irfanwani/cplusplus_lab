// You are using GCC
#include <iostream>
using namespace std;

class StringNode
{
public:
    string arr;
    StringNode *ptr;
    StringNode(){};
    StringNode(string a, StringNode *p)
    {
        arr = a;

        ptr = p;
    }

    void reverseString()
    {
        for (int i = arr.length() - 1; i >= 0; i--)
        {
            cout << arr[i];
        }
        cout << endl;
    }
};

int main()
{
    string arr;
    int i = 0;
    StringNode *ptr = new StringNode[3];

    while (i < 3)
    {
        getline(cin, arr);
        ptr[i] = StringNode(arr, i == 0 ? nullptr : &ptr[i - 1]);
        ptr[i].reverseString();
        i++;
    }

    return 0;
}