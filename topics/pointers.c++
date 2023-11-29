#include <iostream>
using namespace std;

int main()
{
    // get the input from user and print it using a pointer
    int num, *ptr;
    cout << "Enter a number as input: ";
    cin >> num;

    ptr = &num;

    cout << "Input from the user is: " << *ptr << endl;

    // get the array elements as well as size of the array at runtime from the user and print the stored elements of the array using pointer and pointer arithematic
    int x, i;
    int *arptr = new int[x];

    cout << "Enter the size of the array: ";
    cin >> x;
    cout << "Enter the elements of the array: ";

    for (i = 0; i < x; i++)
    {
        cin >> arptr[i];
    }

    cout << "Elements of the array are: " << endl;

    for (i = 0; i < x; i++)
    {
        cout << *(arptr + i) << endl;
    }

    return 0;
}