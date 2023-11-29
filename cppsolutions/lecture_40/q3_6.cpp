// You are using GCC
// Nonsense question, kuch b daal dete hai colab mai.
#include <iostream>
using namespace std;

template<typename T>
class ProgrammingLanguage {
    T name;
    public:
    ProgrammingLanguage(T name) {
        this->name = name;
    }
    
    void executeProgram(T Prog) {
        cout << " Program output: " << Prog << endl;
    }
};

template<typename T>
class CPlusPlus : public ProgrammingLanguage<T> {
    public:
    CPlusPlus(): ProgrammingLanguage<string>("C++") {};
    void executeProgram(T Prog) {
        cout << "C++ ";
        ProgrammingLanguage<string>::executeProgram(Prog);
    }
    
};

template<typename T>
class Java : public ProgrammingLanguage<T> {
    public:
    Java(): ProgrammingLanguage<string>("Java") {};
    void executeProgram(T Prog) {
        cout << "Java ";
        ProgrammingLanguage<string>::executeProgram(Prog);
    }
};

template<typename T>
class Python : public ProgrammingLanguage<T> {
    public:
    Python(): ProgrammingLanguage<string>("Python") {};
    void executeProgram(T Prog) {
        cout << "Python ";
        ProgrammingLanguage<string>::executeProgram(Prog);
    }
};

int main() {
    string code;
    getline(cin, code);
    CPlusPlus<string> cpp;
    cpp.executeProgram(code);
    getline(cin, code);
    Java<string> java;
    java.executeProgram(code);
    getline(cin, code);
    Python<string> python;
    python.executeProgram(code);
    return 0;
}