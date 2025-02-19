/* Author : Maria
  Date: 19/02/2025
  Description: A program to input two strings and compare them using the strcmp() function. Display whether the strings are equal or not.
  */

#include<stdio.h>
#include<string.h>
int main()
{
  char str1[50],str2[50];
  printf("\nEnter string 1");
  fgets(str1,sizeof(str1),stdin);
  printf("\n Enter string 2");
  fgets(str2,sizeof(str2),stdin);
  if(strlen(str1)!=strlen(str2))
  {
   printf("\n Both Strings have different length,so invalid input");
   return 0;
  }
  
  if(strcmp(str1,str2)==0)
  {
    printf("\n The strings are equal");
  }
  else if(strcmp(str1,str2)==1)
  {
    printf("\nStr1 is larger");
  }
  else
  {
    printf("\n Str2 is larger");
  }
  return 0;
}
