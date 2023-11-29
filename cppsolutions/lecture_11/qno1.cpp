// You are using GCC
#include <iostream>
using namespace std;

class Student {
  public:
  char name[40];
  int age;
};


int main() {
    Student std;

    cin.getline(std.name, 40);
    cin >> std.age;
    
    cout << "Current age: " << std.age << endl;
    
    int Student::*ageptr = &Student::age;
    
    cin >> std.*ageptr;
    
    cout << "Updated age: " << std.age << endl;

    return 0;
}