//write a program to find the sum of the digits of a given number.

#include<stdio.h>
int main()
{
  int number,rem,sum=0;
  printf("\nEnter a number");
  scanf("\n%d",&number);
  while (number>0)
  {
   rem=number%10;
   sum=sum+rem;
   number=number/10;
   
  }
  printf("\nSum of the digits of  a number:%d",sum);
  return 0;
}
