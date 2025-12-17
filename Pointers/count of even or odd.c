#include <stdio.h>
int main() {
    int arr[100], n, i, even = 0, odd = 0;
    int *p = arr;

    printf("Enter size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", p + i);

        if (*(p + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d", even, odd);
    return 0;
}
