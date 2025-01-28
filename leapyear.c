//write a program to check whether leap year or not.
#include<stdio.h>
int main()
{
 int year;
 printf("\nEnter year");
 scanf("\n %d",&year);
 if ((year %100!=0 && year%4==0)||(year %400==0))
 {
    printf("\nLeap Year");

 }
 else
 {
    printf("\n Not a leap year");
 }
 return 0;
}
