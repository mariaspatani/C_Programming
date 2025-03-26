#include<stdio.h>
#define SWAP(a,b)(temp=a,a=b,b=temp)
int main(){
  int a,b,temp;
  printf("\nEnter two number");
  scanf("\n%d%d",&a,&b);
  printf("\n Before Swapping a = %d\t b= %d",a,b);
  SWAP(a,b);
  printf("\n After Swapping a = %d\t b= %d",a,b);
  return 0;
}
