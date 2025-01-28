//write a program to check whether  a triangle is  Equilateral,Isosceles,Scalene triangle.
#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("\nEnter three sides");
    scanf("\n%d%d%d",&side1,&side2,&side3);

    if ((side1==side2)&&(side2==side3))
    {
        printf("\n Equilateral triangle");
    }
    else if ((side1==side2)||(side2==side3)||(side1==side3))
    {
        printf("\n Isosceles Triangle");
    }
    else
    {
        printf("\n Scalene Triangle");
    }
    return 0;
}
