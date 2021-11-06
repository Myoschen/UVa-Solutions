#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int n, a, f;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i != 0)
            cout << endl;
        cin >> a >> f;
        for (int j = 0; j < f; j++) {
            if (j != 0)
                cout << endl;
            for (int k = 1; k <= a; k++) {
                for (int l = 0; l < k; l++)
                    cout << k;
                cout << endl;
            }
            for (int k = (a - 1); k > 0; k--) {
                for (int l = 0; l < k; l++)
                    cout << k;
                cout << endl;
            }
        }
    }
    return 0;
}