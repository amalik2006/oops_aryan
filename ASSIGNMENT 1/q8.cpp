#include <iostream>
using namespace std;

int main() {
    int days;
    float fine = 0;

    cout << "Enter late days: ";
    cin >> days;

    if(days > 30) {
        cout << "Membership cancelled" << endl;
    }
    else {
        if(days <= 5)
            fine = days * 0.5;
        else if(days <= 10)
            fine = (5 * 0.5) + (days - 5) * 1;
        else
            fine = (5 * 0.5) + (5 * 1) + (days - 10) * 5;

        cout << "Fine = " << fine << endl;
    }

    return 0;
}