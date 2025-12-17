#include <stdio.h>
int main() {
    int arr[100], n, i, min;
    int *p = arr;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    min = *p;

    for (i = 1; i < n; i++) {
        if (*(p + i) < min)
            min = *(p + i);
    }

    printf("Smallest = %d", min);
    return 0;
}
