#include<stdio.h>
int main()
{
  int n,i,j;
  printf("\nEnter  the limits");
  scanf("\n %d",&n);
  int numbers[n];
  printf(" Enter the %d elements",n);
  for (i=0;i<n;i++)
  {
    scanf(" %d",&numbers[i]);
  }
  // Bubble sort
  printf("The number are");
  
  for (i=0;i<n-1;i++)
  {
    for (j=0;j<n-i;j++)
    {
      if (numbers[j]> numbers[j+1])
      {
      //swap numbers
        int temp=numbers[j];
        numbers[j]=numbers[j+1];
        numbers[j+1]=temp;
      }
    }
  }
  printf("The sorted Array");
  for(i=0;i<n;i++)
  {
    printf("\t %d",numbers[i]);
  }
  return 0;
}
  
      
