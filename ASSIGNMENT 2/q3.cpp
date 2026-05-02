#include <iostream>
using namespace std;

class Demo {
private:
    void showPrivate() {
        cout << "Private function called" << endl;
    }

public:
    void showPublic() {
        showPrivate();
    }
};

int main() {
    Demo d;
    d.showPublic();

    return 0;
}