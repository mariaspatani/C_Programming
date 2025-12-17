#include <stdio.h>
int main() {
    int arr[100], n, i, sum = 0;
    int *p = arr;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
        sum = sum + *(p + i);
    }

    printf("Sum = %d", sum);
    return 0;
}
