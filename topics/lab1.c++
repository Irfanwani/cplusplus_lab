#include <iostream>
using namespace std;

int main() {

    int i, arr[10], j = 0, k;

    while(true) {
        cout << "Enter a number: ";
        cin >> i;
        if(j < 10) arr[j] = i;
        j++;
        if(i >= 0) continue;
        // break; // incase we want to exit the loop if negative number is entered
        cout << "Invaid Input"<<endl;
    }

    for(k = 0; k < 10; k ++) {
        cout << arr[k]<<endl;
    }
    return 0;
}