//swap two numbers using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("\n Enter first number");
 scanf("\n%d",&a);
 printf("\nEnter second number");
 scanf("\n%d",&b);
 printf("\nEnter third number");
 scanf("\n%d",&c);
 a=b;
 b=c;
 c=a;
 printf("\n Interchanged numbers using a third variable");
 printf("\n a=%d \nb=%d",a,b);
 getch();
}
