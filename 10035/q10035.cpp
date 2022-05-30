#include <iostream>

using namespace std;

int calc_carry(int n, int m) {
    int carry = 0, flag = 0;
    while (n > 0 || m > 0) {
        int sum = n % 10 + m % 10;
        if (sum + flag >= 10) {
            carry++;
            flag = 1;
        } else
            flag = 0;
        n/=10; 
        m/=10;
    }
    return carry;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        n = calc_carry(n, m);
        if (n == 1)
            cout << "1 carry operation." << endl;
        else if (n > 0)
            cout << n << " carry operations." << endl;
        else
            cout << "No carry operation." << endl;
    }
    return 0;
}