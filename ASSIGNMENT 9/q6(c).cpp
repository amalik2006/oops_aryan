#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("file.txt");

    fin.seekg(0, ios::end);

    cout << "Size = " << fin.tellg() << endl;

    fin.close();

    return 0;
}