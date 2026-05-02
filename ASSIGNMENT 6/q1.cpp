#include <iostream>
using namespace std;

class Book {
public:
    string title, author, ISBN;
};

class Library {
    Book b[10];
    int count;

public:
    Library() {
        count = 0;
    }

    bool addNewBook(string &title, string &author, string &ISBN) {
        if(count < 10) {
            b[count].title = title;
            b[count].author = author;
            b[count].ISBN = ISBN;
            count++;
            return true;
        }
        return false;
    }

    bool removeBooks(string &ISBN) {
        for(int i = 0; i < count; i++) {
            if(b[i].ISBN == ISBN) {
                for(int j = i; j < count - 1; j++)
                    b[j] = b[j + 1];
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for(int i = 0; i < count; i++) {
            cout << b[i].title << " " << b[i].author << " " << b[i].ISBN << endl;
        }
    }
};

int main() {
    Library l;

    string t, a, i;

    for(int k = 0; k < 5; k++) {
        cout << "Enter title author ISBN: ";
        cin >> t >> a >> i;
        l.addNewBook(t, a, i);
    }

    cout << "Books:" << endl;
    l.displayDetails();

    cout << "Enter ISBN to remove: ";
    cin >> i;
    l.removeBooks(i);

    cout << "After removal:" << endl;
    l.displayDetails();

    return 0;
}