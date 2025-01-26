//write a quadratic equation roots for the quadratic equation
#include<stdio.h>

int main()
{
    float a,b,c;
    float D;
    printf(" Enter numbers");
    scanf("%f%f%f",&a,&b,&c);
    D= (b*b) -(4*a*c);
    printf("\n Discriminant :%f",D);
    if (D>0)
    {
        printf("roots are real and unequal");
    }
    else if (D==0)
    {
        printf("roots are real and equal");
    }
    else
    {
        printf("roots are complex and imaginery");
    }
    return 0;
}

