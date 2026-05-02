#include <iostream>
using namespace std;

class Time {
    int h, m, s;

public:
    Time(int a = 0, int b = 0, int c = 0) {
        h = a;
        m = b;
        s = c;
    }

    Time operator+(Time t) {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;
        return temp;
    }

    void show() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    Time t1(5,15,34), t2(9,53,58), t3;
    t3 = t1 + t2;
    t3.show();

    return 0;
}