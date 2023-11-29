//  SUM OF THE DIGITS OF THE GIVEN NUMBER
#include <iostream>
using namespace std;

int main() {
    int num, dsum = 0, rem;

    cout << "Enter the number to get the sum of digits: ";
    cin >> num;

    while(num > 0) {
        rem = num % 10;
        dsum += rem;
        num /= 10;
    }

    cout << "Sum of digits is: "<< dsum;
    return 0;
}