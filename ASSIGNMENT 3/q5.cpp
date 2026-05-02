#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    void setData(int x, int y) {
        l = x;
        b = y;
    }

    void area() {
        cout << l * b << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle r[n];

    for(int i = 0; i < n; i++) {
        int l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        r[i].setData(l, b);
    }

    cout << "Areas:" << endl;
    for(int i = 0; i < n; i++) {
        r[i].area();
    }

    return 0;
}