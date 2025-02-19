/* Author : Maria
   Date:19/2/2025
   */
#include<stdio.h>
int main()
{
  char inputString[200];
  int freq[26]={0};
  printf("\nEnter the string");
  fgets(inputString,sizeof(inputString),stdin);
  for(int i=0;inputString[i]!='\0';i++)
  {
    char ch;
    if(inputString[i]>='A'&& inputString[i]<='Z')
    {
      ch=ch+32;//Convert uppercase to lowercase
    }
    if(ch>='a' && ch<='z')
    {
      freq[ch-97]++;
    }
 }
 for(int i=0;i<26;i++)
 {
  if(freq[i]!=0)
  {
  printf("%c:%d\n",i+97,freq[i]);
  }
 }
return 0;
}
