#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        int word_cnt = 0;
        bool flag;
        for (int i = 0; i < str.size(); i++){
            if (isalpha(str[i]))
                flag = true;
            if (flag && !isalpha(str[i])){
                flag = !flag;
                word_cnt++;
            }
        }
        cout << word_cnt << endl;
    }
    return 0;
}