#include <iostream>
using namespace std;

class Test {
public:
    int x;

    void set(int a) {
        x = a;
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    int *p = new int;
    *p = 10;
    cout << "Integer: " << *p << endl;
    delete p;

    float *f = new float;
    *f = 5.5;
    cout << "Float: " << *f << endl;
    delete f;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    cout << "Array: ";
    for(int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;

    Test *obj = new Test;
    obj->set(50);
    obj->show();
    delete obj;

    Test *objArr = new Test[2];
    objArr[0].set(10);
    objArr[1].set(20);

    objArr[0].show();
    objArr[1].show();

    delete[] objArr;

    return 0;
}