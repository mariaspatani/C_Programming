//Write a program to check whether a character is  vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character");
    scanf("\n%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
     printf(" The given character is an alphabets");
       if (((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))&&((ch=='a')||(ch=='e')||(ch=='i')||(ch=='0')||(ch=='u')))
       {
        printf("\n The characters are vowels");

       }
       else
       {
        printf("\nThe characters are consonants");
       }
    }
    else
    {
        printf("\n The given characters are not alphabets");
    }
    return 0;
}
