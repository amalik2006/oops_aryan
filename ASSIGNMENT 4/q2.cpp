#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    Rectangle(int x = 0, int y = 0) {
        l = x;
        b = y;
    }

    ~Rectangle() {
        cout << "Destructor called" << endl;
    }

    void area() {
        cout << "Area = " << l * b << endl;
    }
};

int main() {
    Rectangle r[3] = {Rectangle(), Rectangle(5), Rectangle(4,6)};

    for(int i = 0; i < 3; i++) {
        r[i].area();
    }

    return 0;
}