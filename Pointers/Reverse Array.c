#include <stdio.h>
int main() {
    int arr[100], n, i;
    int *p = arr;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Reversed array:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }
    return 0;
}
