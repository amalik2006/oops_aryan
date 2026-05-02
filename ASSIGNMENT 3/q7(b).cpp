#include <iostream>
using namespace std;

class Test {
public:
    int x;

    void set(int a) {
        x = a;
    }

    void show() {
        cout << x << endl;
    }
};

void modify(Test &t) {
    t.x = t.x + 10;
}

int main() {
    Test t;

    t.set(5);
    modify(t);

    cout << "After modification: ";
    t.show();

    return 0;
}