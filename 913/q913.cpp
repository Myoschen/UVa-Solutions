#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int N;
    while (cin >> N) {
        printf("%lld\n", (2*((N+1)*(N+1)/4)-3)*3);
    }
    return 0;
}