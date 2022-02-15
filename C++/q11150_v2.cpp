/*
    if I buy eight bottles of coke, and group them in pairs.
    In this way, as long as one more bottle per group can be exchanged for a new bottle.
    Finally, I returned the empty bottle to my friend.
    
    So, the above description can be translated into mathematical form.
    You drank = You bought + You bought / 2
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        cout << n + n/2 << endl;
    }

    return 0;
}