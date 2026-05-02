#include <iostream>
using namespace std;

int main() {
    int a, b, ch;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add 2.Subtract 3.Multiply 4.Divide" << endl;
    cout << "Enter choice: ";
    cin >> ch;

    switch(ch) {
        case 1: cout << "Result = " << a + b << endl; break;
        case 2: cout << "Result = " << a - b << endl; break;
        case 3: cout << "Result = " << a * b << endl; break;
        case 4:
            if(b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Division not possible" << endl;
            break;
        default: cout << "Invalid choice" << endl;
    }

    return 0;
}