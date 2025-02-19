/* Author : Maria
   Date   : 19/02/2025
   Description:  A program to reverse a string entered by the user without using string library functions. Display the reversed string.
*/
#include<stdio.h>
int main()
{
  char str1[20];
  printf("\n Enter a string");
  fgets(str1,sizeof(str1),stdin);
  int length;
  for(length=0;str1[length]!='\0';length++);
  int i=length-1;
  for(int j=0;j<length/2;j++)
  {
    char temp=str1[i];
    str1[i]=str1[j];
    str1[j]=temp;
    i--;
  }
  printf("The reverse of the string:");
  puts(str1);
  return 0;
}
