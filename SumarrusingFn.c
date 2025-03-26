/*Author: Maria
 Date:26/3/2025
 Descrpition:A program to calculate the sum of array elements by passing the array to a function. Display the sum in the main function.*/
#include<stdio.h>
int sumarray( int[],int);
int main(){
  int n;
  printf("\n Enter the no of elements in an array");
  scanf("\n %d",&n);
  int array[n];
 
  int sum=sumarray(array,n);
  printf("%d",sum);
  
  return 0;
}
int sumarray(int array[],int n){
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    scanf("\n %d",&array[i]);
  }
  printf("\n The sum of the elements =");
  for(i=0;i<n;i++)
  {
    sum=sum+array[i];
  }
  return sum;
}
  
  
  
  
