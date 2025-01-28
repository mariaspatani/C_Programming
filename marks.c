//write a c program to find eligibility of admission for a professional course.
#include<stdio.h>
int main()
{
    int maths,physics,chemistry,totalMarks,totalInMathsandPhysics;
    printf("\nEnter marks in maths");
    scanf("\n %d",&maths);
    printf("\n Enter marks in physics");
    scanf("\n", &physics);
    printf("\nEnter marks in chemistry");
    scanf("\n %d",&chemistry);
    totalMarks=maths+physics+chemistry;
    totalInMathsandPhysics =maths+physics;
    if((maths>=65) &&(physics>=55) &&(chemistry>=50) &&(totalMarks>=190) ||(totalInMathsandPhysics>=140))
    {
        printf("\n Eligible for a professional course");

    }
    else
    {
        printf("\n Not eligible for a professional course");    }
    return 0;

}
