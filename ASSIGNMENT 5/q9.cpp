#include <iostream>
using namespace std;

class Vehicle {
public:
    string model;
};

class Truck : public Vehicle {
public:
    int capacity;
};

class RefrigeratedTruck : public Truck {
public:
    int temp;
};

int main() {
    RefrigeratedTruck r;

    cout << "Enter model capacity temperature: ";
    cin >> r.model >> r.capacity >> r.temp;

    cout << r.model << " " << r.capacity << " " << r.temp << endl;

    return 0;
}