#include <stdio.h>

int main() {
    int a[10][10], t[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", (*(a + i) + j));

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            *(*(t + j) + i) = *(*(a + i) + j);

    printf("Transpose:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", *(*(t + i) + j));
        printf("\n");
    }

    return 0;
}
