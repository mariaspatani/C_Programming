/* Problem 1
 Write a C program which takes two integer operands and one operator from  the user, perform the operation and then prints the results.*/
 #include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("\nEnter two numbers");
     scanf("\n%d%d",&a,&b);
     c=a+b;
     printf("\nValue after addition=%d",c);
     c=a-b;
     printf("\nValue after subtraction=%d",c);
     c=a*b;
     printf("\nValue after multiplication=%d",c);
     c=a/b;
     printf("\n Value after division=%d",c);
     c=a%b;
     printf("\nValue after modulo division=%d",c);
     return 0;
 }
