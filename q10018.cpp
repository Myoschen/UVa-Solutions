#include <iostream>

using namespace std;

unsigned int palindrome(unsigned int p) {
    unsigned int result = 0;
    while (p > 0) {
        result = result * 10 + p % 10 ;
        p/=10;
    }
    return result;
}


int main() {
    int N;
    unsigned int P, temp;
    cin >> N;
    while (N--) {
        int cnt = 0;
        cin >> P;
        do {
            P += palindrome(P);
            cnt++;
        } while (palindrome(P) != P);
        printf("%d %u\n", cnt, P);
    }
    return 0;
}