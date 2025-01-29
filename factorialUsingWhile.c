//find factorial of a number.
#include<stdio.h>
int main()
{
  int number,i=1,factorial=1;
  printf("\nEnter number");
  scanf("\n %d",&number);
  while(number>0)
  {
   factorial = factorial*number;  
   number=number-1;
  }
  printf("\n factorial=%d",factorial);
  return 0;
}
  
