#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.show();
    d.show();
    d.display();

    return 0;
}