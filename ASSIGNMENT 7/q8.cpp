#include <iostream>
using namespace std;

class Array {
    int arr[5];

public:
    int& operator[](int i) {
        if(i >= 0 && i < 5)
            return arr[i];
        else {
            cout << "Out of bounds" << endl;
            exit(0);
        }
    }
};

int main() {
    Array a;

    a[0] = 10;
    a[1] = 20;

    cout << a[0] << endl;
    cout << a[1] << endl;

    return 0;
}