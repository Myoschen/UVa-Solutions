#include <iostream>

using namespace std;

int main() {
    char c;
    while ((c = cin.get()) != EOF) {
        if ( c == '\n')
            cout << endl;
        else
            cout << (char)(c - 7);
    }
    return 0;
}