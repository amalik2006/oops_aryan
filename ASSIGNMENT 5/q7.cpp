#include <iostream>
using namespace std;

class Speedometer {
public:
    int speed;
};

class FuelGauge {
public:
    int fuel;
};

class Thermometer {
public:
    int temp;
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void input() {
        cout << "Enter speed fuel temperature: ";
        cin >> speed >> fuel >> temp;
    }

    void display() {
        cout << "Speed: " << speed << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Temp: " << temp << endl;
    }
};

int main() {
    CarDashboard c;
    c.input();
    c.display();

    return 0;
}