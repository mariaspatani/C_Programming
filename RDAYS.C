//find the number of years,months,weeks,remaining days from a given number of days.
#include<stdio.h>
#include<conio.h>
void main()
{
 int years,months,weeks,rdays,days;
 clrscr();
 printf("\nEnter number of days");
 scanf("\n%d",&days);
 years=days/365;
 printf("\n no.of years=%d",years);
 years=days%365;
 months=years/30;
 printf("\n no. of months=%d",months);
 months=years%30;
 weeks=months/7;
 printf("\n no. of weeks=%d",weeks);
 days=months%7;
 printf("\n no. of days=%d",days);
 getch();
}