#include<stdio.h>
#include<stdlib.h>
int main(){
  int *array;
  int n;
  printf("\n Enter the number of elements:");
  scanf("%d",&n);
  array =(int *) malloc(n*sizeof(int));
  printf("\n Enter the elements:\n");
  for(int i=0;i<n;i++){
    scanf("%d",array+i);
  }
  for(int i=0;i<n;i++){
    printf("%d\t",*(array+i));
  }
  return 0;
}
