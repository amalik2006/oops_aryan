#include <iostream>
using namespace std;

class Demo {
public:
    void operator()(int a, int b) {
        cout << "Sum = " << a + b << endl;
    }
};

int main() {
    Demo d;

    d(5, 3);
    d(10, 2);

    return 0;
}