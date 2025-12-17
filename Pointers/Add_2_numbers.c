#include <stdio.h>
int main() {
    int a, b;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    printf("Sum = %d\n", *p1 + *p2);
    return 0;
}
