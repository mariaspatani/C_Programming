#include <stdio.h>

int main() {
    int n;
    float expense, total = 0;

    printf("Enter number of expenses: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Enter expense %d: ", i);
        scanf("%f", &expense);
        total += expense;
    }

    printf("Total Expense = Rs %.2f", total);
    return 0;
}
