#include <stdio.h>
int main() {
    int arr1[100], arr2[100], n, i;
    int *p1 = arr1, *p2 = arr2;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", p1 + i);
        *(p2 + i) = *(p1 + i);
    }

    printf("Copied array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p2 + i));
    }
    return 0;
}
