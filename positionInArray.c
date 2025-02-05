\\write a program to find the position of an element in an array.
#include<stdio.h>
int main()
{
  int n,i, number;
  printf("\nEnter  the number");
  scanf("\n %d",&n);
  int array[n];
  printf("\n Enter the %d elements",n);
  for (i=0;i<n;i++)
  {
  scanf("\n %d",&array[i]);
  }
  printf("The number to be searched");
  scanf("\n %d",&number);
  for (i=0;i<n;i++)
  {
    if( number==array[i])
    {
      printf("\nPosition is %d",i+1);
    }
  }
  return 0;
}
