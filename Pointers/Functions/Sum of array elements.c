#include <stdio.h>

int sum(int *p, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += *(p + i);
    return s;
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);   
    }

    printf("Sum = %d", sum(arr, n));

    return 0;
}
