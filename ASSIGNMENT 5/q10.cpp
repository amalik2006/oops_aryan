#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Staff : public Person {
public:
    int emp_id;
};

class Student : public Person {
public:
    int student_id;
};

class TeachingAssistant : public Staff, public Student {
public:
    void input() {
        cout << "Enter name emp_id student_id: ";
        cin >> Staff::name >> emp_id >> student_id;
    }

    void display() {
        cout << Staff::name << " " << emp_id << " " << student_id << endl;
    }
};

int main() {
    TeachingAssistant t;
    t.input();
    t.display();

    return 0;
}