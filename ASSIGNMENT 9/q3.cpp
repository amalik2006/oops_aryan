#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];
};

int main() {
    Student s = {1, "Aryan"};

    ofstream fout("data.dat", ios::binary);
    fout.write((char*)&s, sizeof(s));
    fout.close();

    Student s2;

    ifstream fin("data.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));

    cout << s2.roll << " " << s2.name << endl;

    fin.close();

    return 0;
}