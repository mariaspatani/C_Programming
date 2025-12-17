#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;
    int *p = arr;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (*(p + i) == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
