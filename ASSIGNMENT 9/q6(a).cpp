#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("file.txt");

    for(char ch = 'A'; ch <= 'Z'; ch++)
        fout << ch;

    fout.close();

    ifstream fin("file.txt");

    fin.seekg(9);
    char ch;
    fin.get(ch);

    cout << ch << endl;

    fin.close();

    return 0;
}