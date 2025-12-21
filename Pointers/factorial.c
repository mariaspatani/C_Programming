#include <stdio.h>
int main() {
    int n, fact = 1;
    int *p = &n;

    printf("Enter number: ");
    scanf("%d", p);

    for (int i = 1; i <= *p; i++)
        fact *= i;

    printf("Factorial = %d", fact);
    return 0;
}
