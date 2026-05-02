#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if(n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    cout << (n % 2 == 0 ? "Even" : "Odd") << endl;

    return 0;
}