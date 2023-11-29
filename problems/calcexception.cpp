#include <iostream>
using namespace std;


int main() {

    int num1, num2;
    char op;
    cout << "Start calculating: " << endl;
    cin >> num1 >> op >> num2;

    if(op == '+') {
        cout << num1 + num2;
    }else if(op == '-') {
        cout << num1 - num2;
    }else if(op == 'x') {
        cout << num1 * num2;
    }else if(op == '/') {
        try {
            if(num2 == 0) {
                string err = "Cannot divide by zero. Exiting program";
                string *ptr = &err;
                throw *ptr;
            }
            cout << num1 / num2;
        }
        catch(string err) {
            cerr << err;
        }
    }

    return 0;
}