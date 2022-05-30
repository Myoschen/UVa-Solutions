#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char temp;
    double hour, min, angle;
    while (cin >> hour >> temp >> min) {
        if (hour == 0.0 && min == 0.0)
            break;
        hour = hour * 30 + min * 0.5;
        min *= 6;
        angle = fabs(hour - min);
        if (angle < fabs(360.0 - angle))
            printf("%.3lf\n", angle);
        else
            printf("%.3lf\n", fabs(360.0 - angle));
    }
    return 0;
}