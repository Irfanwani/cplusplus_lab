// You are using GCC
#include <iostream>
using namespace std;

class Welcome {
    public:
    Welcome() {
        cout << "Welcome ";
     }
};

class Hello {
    public:
    Hello() {
        cout << "Hello ";
    }
};

int main() {
    string name;
    getline(cin, name);
    
    Welcome w;
    cout << name << endl;
    Hello h;
    cout << name << endl;
    return 0;
}