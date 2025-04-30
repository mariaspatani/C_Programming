//second method
#include<stdio.h>
#include<stdlib.h>
int main(){
  int rows=2,cols=2;
  int *mat =(int *)malloc(rows*cols*sizeof(int));
  printf("\n Enter the elements");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      scanf("%d",(mat+i * cols +j));
      }
    }
  printf("\n");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
    printf("%d\t",*(mat+i * cols +j));
    }
    printf("\n");
  }

return 0;
}

