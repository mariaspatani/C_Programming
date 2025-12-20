#include <stdio.h>

int main() {
    int a[10][10], b[10][10], m[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Multiplication not possible");
        return 0;
    }

    printf("Enter matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", (*(a + i) + j));

    printf("Enter matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", (*(b + i) + j));

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            *(*(m + i) + j) = 0;
            for (k = 0; k < c1; k++)
                *(*(m + i) + j) += (*(*(a + i) + k)) * (*(*(b + k) + j));
        }
    }

    printf("Product matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", *(*(m + i) + j));
        printf("\n");
    }

    return 0;
}
