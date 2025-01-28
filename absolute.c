//write a program to find absolute value of a number.
#include<stdio.h>
int main()
{
   float num;
   printf("\n Enter number");
   scanf("\n %f",&num);
   if (num<0)
   {
    num=(-num);
    printf("\n The absolute value:%f",num);
   }
   return 0;
}
