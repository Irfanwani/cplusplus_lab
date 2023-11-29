// You are using GCC
#include <iostream>
using namespace std;

bool isValid(string email) {
    bool hasat = false, hasdot;
    int len = email.length();
    for(int i = 0; i < len; i++) {
        if(i != len - 1 && i != 0) {
            if(email[i] == '@') hasat = true;
            if(email[i] == '.') hasdot = true;
        }
    }
    if(hasat && hasdot) {
        return true;
    }
    
    return false;
    
} 

int main() {
    string s;
    cin >> s;
    bool res = isValid(s);
    
    try {
        if(!res) throw 'e';
        cout << "Email Id is Valid.";
    }catch(...) {
        cout << "Exception caught...\nInvalid Email Id!!!";
    }
    
    
    return 0;
}