// You are using GCC
#include <iostream>
using namespace std;

template<class T>
T arraySum(T arr[], int n) {
    T sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    int size;
    int *arr = new int[size];
    float *farr = new float[size];
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        cin >> *(arr+i);
    }
    
    for(int i = 0; i < size; i++) {
        cin >> *(farr+i);
    }
    
    cout << "Sum of integer array: " << arraySum(arr, size) << endl;
    
    cout << "Sum of floating-point array: " << arraySum(farr, size) << endl;
    
    return 0;
}