\\ write a program to check whether these points are lie on the same line.

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter (x1, y1): ");
    scanf("\n%f %f", &x1, &y1);

    printf("Enter (x2, y2): ");
    scanf("\n%f %f", &x2, &y2);

    printf("Enter (x3, y3): ");
    scanf("\n%f %f", &x3, &y3);

    float slope12, slope23;

    slope12 = (y2 - y1) / (x2 - x1);
    slope23 = (y3 - y2) / (x3 - x2);

    if (slope12 == slope23) {
        printf("All three points lie on the same straight line.\n");
    } else {
        printf("All three points do not lie on the same straight line.\n");
    }

    return 0;
}
