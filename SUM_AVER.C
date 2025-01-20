/*write a program to enter 5 marks of a student
and find the sum and average of marks*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int python,physics,chemistry,maths,english,sum;
 float average;
 clrscr();
 printf("\n Marks of Python");
 scanf("\n %d", &python);
 printf("\n Marks of Physics");
 scanf("\n %d", &physics);
 printf("\n Marks of Chemistry");
 scanf("\n %d",&chemistry);
 printf("\n Marks of Maths");
 scanf("\n %d",&maths);
 printf("\n Marks of English");
 scanf("\n %d", &english);
 sum=python+physics+chemistry+maths+english;
 printf("\n Sum of all the Subjects=%d",sum);
 average=float(sum)/5;
 printf("\n Average=%f",average);
 getch();
}