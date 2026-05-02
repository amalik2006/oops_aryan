#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    Rectangle() {
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) {
        l = x;
        b = y;
    }

    Rectangle(int x) {
        l = x;
        b = x;
    }

    void area() {
        cout << "Area = " << l * b << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);

    r1.area();
    r2.area();
    r3.area();

    return 0;
}