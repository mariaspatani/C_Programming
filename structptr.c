//structure using pointers:printing student's details
#include<stdio.h>
typedef struct{
  int rollno;
  char name[20];
}student;
int main(){
  student s1;
  student *ptr;
  ptr =&s1;
  printf("Enter the details");
  scanf("%d",&ptr->rollno);
  scanf("%s",ptr->name);
 
  printf("\n%d",ptr->rollno);
  printf("\n%s",ptr->name);
  return 0;
}
