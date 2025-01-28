//WAP to check whether given number is odd or even.
#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter number");
    scanf("\n %d",&number);
    if (number%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
