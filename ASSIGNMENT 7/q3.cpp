#include <iostream>
using namespace std;

class Area {
public:
    float calc(float b, float h) {
        return (b * h) / 2;
    }

    float calc(float a) {
        return (1.732 * a * a) / 4;
    }

    float calc(float a, float b, float h) {
        return (b * h) / 2;
    }
};

int main() {
    Area obj;

    cout << "Right angle = " << obj.calc(4, 5) << endl;
    cout << "Equilateral = " << obj.calc(5) << endl;
    cout << "Isosceles = " << obj.calc(5, 4, 3) << endl;

    return 0;
}