//Write a program to check whether a character is  vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character");
    scanf("\n%c",&ch);
    if (((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))||((ch=='a')||(ch=='e')||(ch=='i')||(ch=='0')||(ch=='u')))
       {
        printf("\n The characters are vowels");

       }
    else
       {
        printf("\nThe characters are consonants");
       }
    
    return 0;
}
