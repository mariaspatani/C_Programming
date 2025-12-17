#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    int *p = arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    // Bubble Sort using pointers
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }

    printf("Sorted array (Ascending Order):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
