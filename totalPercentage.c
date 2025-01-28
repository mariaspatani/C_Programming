//Write a program to read rollNo,name, and marks of three subjects and calculate the total percentage.
#include<stdio.h>
int main()
{
  float mark1,mark2,mark3,totalPercentage,total;
  char name[50];
  int rollNo;
  printf("\n Enter name");
  fgets (name,sizeof(name),stdin);
  printf("\nEnter rollNo");
  scanf("\n%d",&rollNo);
  printf("\n Enter marks of three subjects");
  scanf("\n %f%f%f",&mark1,&mark2,&mark3);
  total=(mark1+mark2+mark3);
  totalPercentage=((total)/300)*100;
  printf("\nTotal Percentage:%f",totalPercentage);
  if (totalPercentage>=75)
  {
    printf("First Class with Distinction");
  }
  else if (totalPercentage>=60 && totalPercentage<75)
  {
    printf("First Class");
  }
  else
  {
    printf("Second Class");
  }
  return 0;
}
