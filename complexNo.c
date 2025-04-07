/* Author:Maria
   Date:7/4/2025
  Description: A program to add two complex numbers using structures.*/

#include<stdio.h>
typedef struct{
  float real, imag;
}complex;
complex add (complex a,complex b){
  complex result;
  result.real= a.real +b.real;
  result.imag= a.imag +b.imag;
  return result;
}
int main(){
  complex a,b;
  complex result;
  printf("\n Enter the real and imaginary part of first number");
  scanf("\n%f%f",&a.real,&a.imag);
  printf("\n Enter the real and imaginary part of second number");
  scanf("\n%f%f",&b.real,&b.imag);
  result = add(a,b);
  printf("\n The result =%.2f+%.2fi",result.real,result.imag);
  return 0;
}
  
