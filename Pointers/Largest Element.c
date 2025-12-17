#include <stdio.h>
int main() {
    int arr[100], n, i, max;
    int *p = arr;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    max = *p;

    for (i = 1; i < n; i++) {
        if (*(p + i) > max)
            max = *(p + i);
    }

    printf("Largest = %d", max);
    return 0;
}
