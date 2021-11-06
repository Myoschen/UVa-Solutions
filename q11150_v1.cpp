#include <iostream>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int coke_total = n, coke_empty = n;
        while (coke_empty >= 3){
            coke_total = coke_total + coke_empty / 3;
            coke_empty = coke_empty % 3 + coke_empty / 3;
        }

        if (coke_empty == 2)
            coke_total++;

        cout << coke_total << endl;
    }

    return 0;
}