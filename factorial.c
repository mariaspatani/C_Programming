//find factorial of a number.
#include<stdio.h>
int main()
{
  int number,i,factorial=1;
  printf("\nEnter number");
  scanf("\n %d",&number);
  for (i=1;i<=number;i++)
  {
   factorial = factorial*i;  
  }
  printf("\n factorial=%d",factorial);
  return 0;
}
  
