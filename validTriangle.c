//Write a program to check whether the given triangle is a valid or not.
#include<stdio.h>
int main()
{
    int angle1,angle2,angle3 ;
    int sum;
    printf("\n Enter three angles");
    scanf("\n %f%f%f",&angle1,&angle2,&angle3);
    sum= angle1+angle2+angle3;
    if (sum==180)
    {
        printf("\nValid Triangle");
    }
    else
    {
        printf("\n Not a Valid Triangle");
    }
    return 0;
}
