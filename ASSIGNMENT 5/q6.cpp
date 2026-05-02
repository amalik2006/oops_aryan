#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    float price;

    void input() {
        cout << "Enter title author price: ";
        cin >> title >> author >> price;
    }

    void show() {
        cout << title << " " << author << " " << price << endl;
    }
};

class Textbook : public Book {
public:
    string subject;

    void input2() {
        input();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void show2() {
        show();
        cout << subject << endl;
    }
};

int main() {
    Textbook t;
    t.input2();
    t.show2();

    return 0;
}