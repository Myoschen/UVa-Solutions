#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string str;
    while (getline(cin, str)) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '"'){
                if (count % 2 == 0)
                    cout << "``";
                else
                    cout << "''";
                count++;
            } else
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}