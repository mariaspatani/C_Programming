//write a program to determine the youngest  of the three.
#include<stdio.h>
int main()
{
    int age1,age2,age3;
    printf("\nEnter age of Ram");
    scanf("\n %d",&age1);
    printf("\n Enter age of Shyam");
    scanf("\n%d",&age2);
    printf("\n Enter age of Ajay");
    scanf("\n %d",&age3);
    if ((age1<age2) && (age1<age3))
    {
        printf("\n Youngest is Ram");
    }
    else if ((age2<age1) && (age2<age3))
    {
        printf("\n Youngest is Shyam");
    }
    else
    {
        printf("\n Youngest is Ajay");
    }
    return 0;
}
