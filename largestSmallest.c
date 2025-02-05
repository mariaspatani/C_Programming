#include<stdio.h>
int main()
{
  int n,i,smallest,largest,positionl=1,positionS=1;
  printf("Enter  how many numbers");
  scanf(" %d",&n);
  int number[n];
  printf(" Enter the %d elements",n);
  for (i=0;i<n;i++)
  {
  scanf(" %d",&number[i]);
  }
  smallest=number[0];
  largest=number[0];
  for(i=0;i<n;i++)
  {
     if (number[i]>largest)
     {
        largest = number[i];
        positionl=i+1;
     }
     if (number[i]<smallest)
     {
        smallest =number[i];
        positionS=i+1;
     }
  }
  printf("\n The largest no: %d is in the position:%d",largest,positionl);
  printf("\n The smallest no: %d is in the position :%d", smallest,positionS);
  
  return 0;
}
  

      
