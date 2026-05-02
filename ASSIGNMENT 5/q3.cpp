#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
};

class PublicDer : public Base {
public:
    void show() {
        cout << x << endl;
    }
};

class ProtectedDer : protected Base {
public:
    void show() {
        cout << x << endl;
    }
};

class PrivateDer : private Base {
public:
    void show() {
        cout << x << endl;
    }
};

int main() {
    PublicDer p;
    ProtectedDer pr;
    PrivateDer pv;

    p.show();
    pr.show();
    pv.show();

    return 0;
}