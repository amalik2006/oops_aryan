#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    float r, angle;

public:
    Polar(float x, float y) {
        r = x;
        angle = y;
    }

    float getR() {
        return r;
    }

    float getAngle() {
        return angle;
    }
};

class Cartesian {
    float x, y;

public:
    Cartesian(Polar p) {
        x = p.getR() * cos(p.getAngle());
        y = p.getR() * sin(p.getAngle());
    }

    void show() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    Polar p(10, 0.5);

    Cartesian c = p;

    c.show();

    return 0;
}