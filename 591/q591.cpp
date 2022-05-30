#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, set = 1;
    while (cin >> n) {
        if (n == 0)
            break;
        int avg = 0, move = 0;
        int *group = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> group[i];
            avg += group[i];
        }
        avg /= n;
        for (int i = 0; i < n; i++) {
            move += (abs(group[i] - avg));
        }
        printf("Set #%d\n", set++);
        printf("The minimum number of moves is %d.\n", move/2);
        printf("\n");
    }
    return 0;
}