/* Author :Maria
   Date   :January 31 2025
   Description :C program to find the electricity bill.
    */
#include <stdio.h>

int main() {
    int customer_id, units;
    char name[50];
    float bill, surcharge = 0.0;

    // Taking input from the user
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Calculating the bill based on units consumed
    if (units <= 199) {
        bill = units * 1.20;
    } else if (units >= 200 && units < 400) {
        bill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }

    // Adding surcharge if bill exceeds ₹400
    if (bill > 400) {
        surcharge = bill * 0.15;
    }

    // Calculating the total bill
    bill = bill + surcharge;

    // Ensuring the minimum bill is ₹100
    if (bill < 100) {
        bill = 100;
    }

    // Printing the bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to Pay: %.2f\n", bill);

    return 0;
}
