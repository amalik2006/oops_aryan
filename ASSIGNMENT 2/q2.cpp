#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float cgpa;

public:
    void setDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.setDetails();
    s.display();

    return 0;
}