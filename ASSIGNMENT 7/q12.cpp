#include <iostream>
using namespace std;

class Test {
    float x;

public:
    Test(float a) {
        x = a;
    }

    operator float() {
        return x;
    }
};

int main() {
    Test t(5.5);

    float y = t;

    cout << "Value = " << y << endl;

    return 0;
}