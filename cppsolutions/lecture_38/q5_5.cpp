// You are using GCC
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    try {
        if(age < 18) {
            throw age;
        }
        
        cout << "Yes, you are old enough.";
    }catch(int x) {
        cout << "No, You must be at least 18 years old\nCurrent Age is : " << x << endl;
    }
    return 0;
}