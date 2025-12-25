#include <stdio.h>

void display(int *p, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", *(p + i));
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    display(arr, 5);

    return 0;
}
