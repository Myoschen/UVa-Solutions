#include <iostream>
#include <cmath>

using namespace std;

typedef struct {
    double x1;
    double x2;
    double y1;
    double y2;
} rect;

typedef struct {
    double x;
    double y;
    double r;
} circle;

int main() {
    int cnt = 0;
    int sort[10];
    char type;
    double x, y;
    rect *r = new rect[10];
    circle *c = new circle[10];

    while (cin >> type) {
        if (type == 'r') {
            cin >> r[cnt].x1 >> r[cnt].y1 >> r[cnt].x2 >> r[cnt].y2;
            sort[cnt++] = 0;
        } else if (type == 'c') {
            cin >> c[cnt].x >> c[cnt].y >> c[cnt].r;
            sort[cnt++] = 1;
        } else if (type == '*')
            break;
    }

    int point_cnt = 1;

    while (cin >> x >> y) {
        bool isContained = false;

        if (x == 9999.9 && y == 9999.9)
            break;

        for (int i = 0; i < cnt; i++) {
            if (sort[i] == 0) {
                if (x > r[i].x1 && x < r[i].x2 && y > r[i].y2 && y < r[i].y1){
                    printf("Point %d is contained in figure %d\n", point_cnt, i+1);
                    isContained = true;
                }   
            } else if (sort[i] == 1){
                double distance = sqrt(pow((x - c[i].x), 2) + pow((y - c[i].y), 2)) ;
                if ( distance < c[i].r ) {
                    printf("Point %d is contained in figure %d\n", point_cnt, i+1);
                    isContained = true;
                }
            }
        }
        if (!isContained)
            printf("Point %d is not contained in any figure\n", point_cnt);
        point_cnt++;
    }

    delete[] r;
    delete[] c; 
    return 0;
}