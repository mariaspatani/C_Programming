//Write a program to calculate and print Electricity bill.
#include<stdio.h>
int main()
{
    float customerID,unitConsumed,amount,surcharge,totalBill;
    char name[50];
    printf("\n Enter Customer ID");
    scanf("\n%f",&customerID);
    printf("\n Enter Units Consumed");
    scanf("\n%f",unitConsumed);
    printf("\n Enter amount");
    scanf("\n %f",&amount);
    printf("\nEnter name");
    fgets(name,sizeof(name),stdin);
    if (unitConsumed<=199)
    {
        amount=unitConsumed*1.20;
    }
    else if(unitConsumed>=200 &&unitConsumed<400)
    {
        amount=unitConsumed*1.50;
    }
    else if (unitConsumed>=400 && unitConsumed<600)
    {
        amount=unitConsumed*1.80;
    }
    else
    {
        amount=unitConsumed*2.00;

    }
    if (amount>400)
    {
        surcharge=amount*0.15;
        totalBill=amount+surcharge;
    }
    else
    {
        totalBill=amount;
    }
    if(totalBill<100);
    {
        totalBill=100;
    }
    printf("\nCustomerID:%f",customerID);
    printf("\nCustomer name:%c",name);
    printf("\nUnits Consumed:%f",unitConsumed);
    printf("\nBill Amount:%f",amount);
    printf("\nSurcharge:%f",surcharge);
    printf("\nTotal Bill:%f",totalBill);
    return 0;

}
