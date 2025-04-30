#include<stdio.h>
#include<stdlib.h>
int main(){
  int **matrix;
  int row=3,col=5;
  matrix = (int **)malloc(row * sizeof(int *));
  for(int i=0;i<row;i++){
    matrix[i]=(int *)malloc(col *sizeof(int));
  }
  printf("\n Enter the elements");
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
         scanf("%d",(*(matrix+i)+j));
      }
  }
  printf("\n The matrix is:");
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        printf("%d\t", *(*(matrix+i)+j));

      }
    printf("\n");
  }
   
  return 0;
}

