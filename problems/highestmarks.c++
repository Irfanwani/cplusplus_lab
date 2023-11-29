#include <iostream>
using namespace std;

int maxmarks(string dept_name)
{

    int marks[10], i, max = 0;

    cout << "Enter the marks of the students of " << dept_name << ": ";
    for (i = 0; i < 10; i++)
    {
        cin >> marks[i];
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }

    cout << "Highest marks in the class: " << max << endl;

    return max;
};

int main()
{

    int SCA = maxmarks("SCA");

    cout << "Topper of SCA: " << SCA << endl;

    int SCS = maxmarks("SCS");

    cout << "Topper of SCS: " << SCS << endl;
    return 0;
}