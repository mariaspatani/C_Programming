#include<stdio.h>
void factorial(int n);
int main()
{
  int f=1,sum=0,series,i,limit,n;
  printf("\n Enter the limit");
  scanf("\n %d",&limit);
  factorial(n);
  return 0;
}
void factorial(int n)
{
  int f=1,sum=0,series,i,limit;
  for(i=1;i<limit;i++)
  {
    f=f*i;
    series=f/i;
    sum=sum+series;
    printf("\n %d", sum);
  }
}

