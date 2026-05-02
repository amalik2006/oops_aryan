#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex(Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex sum(Complex, Complex);
};

Complex sum(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(2, 3), c2(4, 5), c3;

    c3 = sum(c1, c2);

    cout << "Sum = ";
    c3.display();

    return 0;
}