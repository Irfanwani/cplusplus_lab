// You are using GCC
#include <iostream>
using namespace std;

class Student {
    string name;
    int age, cnum;
    string *courses;
    public:
    Student(string name, int age, int cnum): name(name), age(age), cnum(cnum) {
        courses = new string[cnum];
        cin.ignore();
        for(int i = 0; i < cnum; i++) {
            getline(cin, *(courses + i));
        }
    };
    
    void setter(string name, int age) {
        this->name = name;
        this->age = age;
    }
    
    string getname() {
        return name;
    }
    
    int getage() {
        return age;
    }
    
    void display() {
        cout << "Student Details:\nName: " << this->getname() << "\nAge: " << this->getage() << endl;
        cout << "Courses: ";
        for(int i = 0; i < cnum; i++) {
            cout << *(courses+i) << " ";
        }
        
        cout << endl;
    }
    
    void isEnrolled(string course) {
        string isen = "No";
        for(int i = 0; i < cnum; i++) {
            if(course == courses[i]) isen = "Yes";
        }
        cout << "\nIs the student enrolled in " << course << "? " << isen;
    }
    
    
    ~Student() {
        delete[] courses;
    }
};

int main() {
    string name, coursecheck;
    int age, cnum;
    getline(cin, name);
    cin >> age >> cnum;
    
    Student st(name, age, cnum);
    
    getline(cin, coursecheck);
    
    st.display();
    st.isEnrolled(coursecheck);
    return 0;
}