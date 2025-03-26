/*Author: Maria
Date:26/3/2025
Description:Define a macro for the value of π (PI = 3.14159) and write a program to calculate the area of a circle and a cylinder. Use macros for constant values.*/

#include<stdio.h>
#define PI 3.14159
 int main(){
     float circle_area,cylinder_area,r,h;
     printf("\n Enter the radius");
     scanf("\n%f",&r);
     printf("\n Enter the height");
     scanf("\n%f",&h);
     circle_area=PI*r*r;
     cylinder_area=2*PI*r*(r+h);
     printf("\n The area of the circle:%f",circle_area);
     printf("\n The area of the cylinder:%f",cylinder_area);
     return 0;
}

