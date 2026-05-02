#include <iostream>
using namespace std;

class Book {
public:
    string title, author, ISBN;

    Book() {
        title = "";
        author = "";
        ISBN = "";
    }

    Book(string t, string a, string i) {
        this->title = t;
        this->author = a;
        this->ISBN = i;
    }

    Book(Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }

    void display() {
        cout << title << " " << author << " " << ISBN << endl;
    }
};

class Library {
    Book b[5];

public:
    void input() {
        for(int i = 0; i < 5; i++) {
            string t, a, id;
            cout << "Enter title author ISBN: ";
            cin >> t >> a >> id;
            b[i] = Book(t, a, id);
        }
    }

    void display() {
        for(int i = 0; i < 5; i++)
            b[i].display();
    }

    bool removeBooks(string ISBN) {
        for(int i = 0; i < 5; i++) {
            if(b[i].ISBN == ISBN) {
                b[i] = Book();
                return true;
            }
        }
        return false;
    }
};

int main() {
    Library l;
    l.input();

    cout << "Books:" << endl;
    l.display();

    string id;
    cout << "Enter ISBN to remove: ";
    cin >> id;

    l.removeBooks(id);

    cout << "After removal:" << endl;
    l.display();

    return 0;
}