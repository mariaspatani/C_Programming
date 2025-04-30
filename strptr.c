#include<stdio.h>
int main(){
  char *fruits[]={"Apple","Banana","Cherry"};
  printf("\n\t%s",fruits[0]);
  int a=10,b=20,c=30;
  int *array[3];
  array[0]=&a;
  array[1]=&b;
  array[2]=&c;
  printf("\n%d",*array[0]);
  printf("\n%d",*array[1]);
  printf("\n%d",*array[2]);  
  return 0;
}
