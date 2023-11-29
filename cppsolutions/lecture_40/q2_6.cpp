// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, pos;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    
    try {
        cin >> pos;
        if(pos >= n) throw pos;
        
        cout << v.at(pos) << endl;
    }catch(int index) {
        cout << "Exception occurred!\nNot possible to fetch index " << index << endl;
    }
    return 0;
}