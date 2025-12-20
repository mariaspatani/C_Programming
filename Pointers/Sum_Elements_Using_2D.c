#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            scanf("%d", (*(a + i) + j));
            sum += *(*(a + i) + j);
        }

    printf("Sum = %d", sum);
    return 0;
}
