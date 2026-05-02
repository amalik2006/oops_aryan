#include <iostream>
using namespace std;

class Test {
public:
    int x;

    void setData(int x) {
        this->x = x;
    }

    void display() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Test t;
    t.setData(10);
    t.display();

    Test *p = &t;
    p->setData(20);
    p->display();

    return 0;
}