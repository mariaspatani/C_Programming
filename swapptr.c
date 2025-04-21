/*#include<stdio.h>
void swap(int* n1,int* n2);
int main(){
  int n1,n2;
  printf("\n Enter two numbers");
  scanf("%d %d",&n1,&n2);
  swap(&n1,&n2);
  printf("\n n1=%d n2=%d",n1,n2);
  return 0;
}
void swap(int* n1,int* n2){
  int temp;
  temp=*n1;
  *n1=*n2;
  *n2=temp;
}
//pointer
#include<stdio.h>
int main(){
  int n=10;
  int *ptr;
  ptr=&n;
  printf("%d",*ptr);
  return 0;
}*/
//declare array and print
#include<stdio.h>
int main(){
   int n;
   int array[10];
   
   printf("\n Enter the limit");
   scanf("\n %d",&n);
   int* aptr = array[n];
   for( int i=0;i<n;i++){
      scanf("%d", (array+i));
    }
    printf("\n The elements are:");
    for(int i=0;i<n;i++){
      printf("%d\t",*(array+i));
    }
    return 0;
}

  

