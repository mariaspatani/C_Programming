#include<stdio.h>
int main()
{
 int count=0,i;
 char ch,str[50];
 printf("\nEnter a string");
 fgets(str,sizeof(str),stdin);
 printf("\n Enter the character to find the count in the string");
 scanf("\n%c",&ch);
for(i=0;str[i]!='\0';i++)
  {
    if(ch==str[i])
    {
      count++;
    }
  }

  printf("\nFrequency of %c = %d", ch, count);
  printf("\n%c occurs %d times in %s", ch, count, str);
  return 0;
}
 
