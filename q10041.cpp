#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, r, median;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int distance = 0;
        cin >> r;
        median = r % 2 == 0 ? r / 2 : (r+1) / 2;
        int *doorplate = new int [r]{0};
        for (int j = 0; j < r; j++) {
            cin >> doorplate[j];
        }
        sort(doorplate, doorplate + r);
        for (int j = 0; j < r; j++) {
            distance += (abs(doorplate[j] - doorplate[median-1]));
        }
        cout << distance << endl;
        delete[] doorplate;
    }
    return 0;
}