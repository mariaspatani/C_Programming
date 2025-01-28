//Write a program whether area of a rectangle is greater than its perimeter.
#include<stdio.h>
int main()
{
  int length, breadth,area,perimeter;
  printf("\n Enter length & breadth");
  scanf("\n%d%d",&length,&breadth);
  area=length*breadth;
  printf("\n area:%d",area);
  perimeter=2*(length+breadth);
  printf("\n perimeter:%d",perimeter);
  if(area>perimeter)
  {
    printf("\n area of the rectangle is greater than perimeter");
  }
  else
  {
    printf("\n perimeter of the rectangle is greater than area");
  }
  return 0;
}
