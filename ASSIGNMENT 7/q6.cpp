#include <iostream>
using namespace std;

class STRING {
    string s;

public:
    STRING(string str = "") {
        s = str;
    }

    bool operator==(STRING obj) {
        return s == obj.s;
    }

    STRING operator+(STRING obj) {
        return STRING(s + obj.s);
    }

    void display() {
        cout << s << endl;
    }
};

int main() {
    STRING s1("Hello"), s2("World"), s3;

    if(s1 == s2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    s3 = s1 + s2;
    s3.display();

    return 0;
}