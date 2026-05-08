#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("NOTES.TXT");

    char ch;
    int count = 0;

    while(fin.get(ch)) {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            count++;
    }

    cout << "Alphabets = " << count << endl;

    fin.close();

    return 0;
}