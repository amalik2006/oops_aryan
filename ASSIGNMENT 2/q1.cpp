#include <iostream>
using namespace std;

struct Student {
    string name, degree, hostel;
    int roll;
    float cgpa;

    void addDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter degree: ";
        cin >> degree;
        cout << "Enter hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displayDetails();

    return 0;
}