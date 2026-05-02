#include <iostream>
using namespace std;

template <class T>
class Pair {
    T a, b;

public:
    Pair(T x, T y) {
        a = x;
        b = y;
    }

    void display() {
        cout << a << " " << b << endl;
    }
};

int main() {
    Pair<int> p(5, 10);
    p.display();

    return 0;
}