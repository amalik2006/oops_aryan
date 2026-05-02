#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void setComplex(float r, float i) {
        real = r;
        imag = i;
    }

    void displayComplex() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex sum(Complex c1, Complex c2) {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setComplex(2, 3);
    c2.setComplex(4, 5);

    c3 = c3.sum(c1, c2);

    cout << "Sum = ";
    c3.displayComplex();

    return 0;
}