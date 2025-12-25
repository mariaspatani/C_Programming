#include <stdio.h>

void largest(int *a, int *b) {
    if (*a > *b)
        printf("Largest = %d", *a);
    else
        printf("Largest = %d", *b);
}

int main() {
    int x = 8, y = 12;
    largest(&x, &y);
    return 0;
}
