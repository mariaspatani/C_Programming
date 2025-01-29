//Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered. 
#include<stdio.h>
int main()
{
  int num,sum=0;
  printf("\nEnter number");
  scanf("\n%d",&num);
  while (1)
  {
   printf("\nEnter the integrs(0-9)");
   printf("\n Input a number");
   scanf("\n%d", &num);
   
   if(num>0)
   {
    sum=sum+num;
   }
   else
   {
    break;
   }
  }
  printf("\n sum:%d",sum);
  return 0;
}
