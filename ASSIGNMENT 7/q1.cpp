#include <iostream>
using namespace std;

class Polygon {
protected:
    int w, h;

public:
    void set_value(int a, int b) {
        w = a;
        h = b;
    }

    virtual int calculate_area() = 0;
};

class Rectangle : public Polygon {
public:
    int calculate_area() {
        return w * h;
    }
};

class Triangle : public Polygon {
public:
    int calculate_area() {
        return (w * h) / 2;
    }
};

int main() {
    Polygon *p;
    Rectangle r;
    Triangle t;

    r.set_value(4, 5);
    t.set_value(4, 5);

    p = &r;
    cout << "Rectangle area = " << p->calculate_area() << endl;

    p = &t;
    cout << "Triangle area = " << p->calculate_area() << endl;

    return 0;
}