#include <iostream>
using namespace std;

class Base {
protected:
    int x;
};

class Derived : public Base {
public:
    void set() {
        x = 10;
    }

    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Derived d;
    d.set();
    d.show();

    return 0;
}