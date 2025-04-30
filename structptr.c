//structure using pointers
#include<stdio.h>
typedef struct{
  int rollno;
  char name[20];
}student;
int main(){
  student s1;
  student *ptr;
  ptr =&s1;
  ptr->rollno =10;
  printf("%d",ptr->rollno);
  return 0;
}
