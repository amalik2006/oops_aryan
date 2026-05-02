#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    A(int a) {
        x = a;
    }

    friend void swapData(A&, B&);

    void show() {
        cout << "A = " << x << endl;
    }
};

class B {
    int y;
public:
    B(int b) {
        y = b;
    }

    friend void swapData(A&, B&);

    void show() {
        cout << "B = " << y << endl;
    }
};

void swapData(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a(5);
    B b(10);

    cout << "Before swap" << endl;
    a.show();
    b.show();

    swapData(a, b);

    cout << "After swap" << endl;
    a.show();
    b.show();

    return 0;
}