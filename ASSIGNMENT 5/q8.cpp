#include <iostream>
using namespace std;

class LibraryUser {
public:
    string name;
};

class Student : public LibraryUser {
public:
    int grade;
};

class Teacher : public LibraryUser {
public:
    string dept;
};

int main() {
    Student s;
    Teacher t;

    cout << "Enter student name and grade: ";
    cin >> s.name >> s.grade;

    cout << "Enter teacher name and department: ";
    cin >> t.name >> t.dept;

    cout << s.name << " " << s.grade << endl;
    cout << t.name << " " << t.dept << endl;

    return 0;
}