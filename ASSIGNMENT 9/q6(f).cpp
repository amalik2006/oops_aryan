#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::out | ios::in);

    string str = "HelloWorld";

    for(int i = 0; i < str.length(); i++) {
        file.put(str[i]);
        cout << file.tellp() << endl;
    }

    file.seekp(5);
    file << "C++";

    file.seekg(0);

    char ch;
    while(file.get(ch))
        cout << ch;

    cout << endl;

    file.close();

    return 0;
}