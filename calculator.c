// write a program to perform arithmetic operations using switch statements.
#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    printf("\n Enter two numbers");
    scanf("\n%d%d",&num1,&num2);
    printf("\nEnter choice");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Modulo Division");
    scanf("\n%d",&choice);
    switch (choice)
    {
       case 1:
           result=num1+num2;
           printf("\n Value after addition=%d",result);
           break;
       case 2:
           result=num1-num2;
           printf("\n Value after subtraction=%d",result);
           break;
       case 3:
           result=num1*num2;
           printf("\n Value after multiplication=%d",result);
           break;
       case 4:
           result=num1/num2;
           printf("\n Value after division=%d",result);
           break;
       case 5:
           result=num1%num2;
           printf("\n Value after modulo division=%d",result);
           break;
       default:
           printf("\n invalid operation");

    }
    return 0;
}
