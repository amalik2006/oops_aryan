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

Test modify(Test t) {
    t.x = t.x + 10;
    return t;
}

int main() {
    Test t1, t2;

    t1.set(5);
    t2 = modify(t1);

    cout << "Original: ";
    t1.show();

    cout << "Modified: ";
    t2.show();

    return 0;
}