#include <stdio.h>
int main() {
    int arr[50], n, i;
    int *p;

    printf("Enter size: ");
    scanf("%d", &n);

    p = arr;   // pointer points to array

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    return 0;
}
