//write a program to accept a grade and declare the equivalent description.
#include<stdio.h>
int main()
{
  char grade;
  printf("\n Enter grade");
  scanf("\n%s",&grade);
  if (grade=='E')
  {
    printf("\n Excellent");
  }
  else if (grade=='V')
  {
    printf("\n Very Good");

  }
  else if (grade =='G')
  {
    printf("\n Good");

  }
  else if(grade=='A')
  {
    printf("\n Average");
  }
  else
  {
    printf("\n Fail");
  }
  return 0;
}
