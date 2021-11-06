#include <iostream>

using namespace std;

typedef struct {
    float x1;
    float x2;
    float y1;
    float y2;
}rect;

int main(){
    rect r[10];
    int count = 0, count2 = 1;
    char c;
    float x ,y;
    
    while (cin >> c) {
        if (c == '*')
            break;

        else if (c == 'r'){
            cin >> r[count].x1 >> r[count].y1 >> r[count].x2 >> r[count].y2;
            count++;
        }
    }

    while (cin >> x >> y) {
        bool isContained = false;

        if (x == (float)9999.9 && y == (float)9999.9)
            break;

        for (int i = 0; i < count; i++) {
            if ( x > r[i].x1 && x < r[i].x2 && y > r[i].y2 && y < r[i].y1 ) {
                cout << "Point " << count2 << " is contained in figure " << i+1 << endl;
                isContained = true;
            } 
        }

        if (!isContained)
            cout << "Point " << count2 << " is not contained in any figure" << endl;

        count2++;
    }

    return 0;
}