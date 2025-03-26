/* Author: Maria
 Date:26/3/2025
 Description: A program to calculate the power of a number using recursion. The base and exponent should be taken as input from the user.*/

#include<stdio.h>
int power(int b,int e){
    if(e==0)
    {
      return 1;
    }
    else
    {
      return b*power(b,e-1);
    }
}
int main(){
  int b,e,result;
  printf("\n Enter the base number");
  scanf("\n%d",&b);
  printf("\n Enter the exponential number");
  scanf("\n%d",&e);
  result= power(b,e);
  printf("\n%d",result);
  return 0;
}


