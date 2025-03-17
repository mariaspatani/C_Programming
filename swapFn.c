/*
Author: Maria
Date :17/03/2025
Description: Swap two numbers without using third variable using function.*/

#include<stdio.h>
void swap(int,int);
int main()
{
 int n1,n2;
 printf("\n Enter two numbers");
 scanf("\n%d %d",&n1,&n2);
 swap(n1,n2);
 return 0;
}
void swap(int n1, int n2)
{
  
  n1=n1+n2;
  n2=n1-n2;
  n1=n1-n2;
  printf("\n After swappping %d %d\n",n1,n2);
}
