#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    string table = "`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./"; 
    getline(cin, input);
    for (int i = 0; i < input.size(); i++){
        if (input[i] == ' ')
            cout << input[i];
        else
            cout << table.at(table.find(input[i]) - 2);
    }
    cout << endl;
    return 0;
}