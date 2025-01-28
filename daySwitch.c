//write a program to read  any integer number and display day name in the word.
#include<stdio.h>
int main()
{
    int day;
    printf("\n Enter the choice (1-7)");
    scanf("\n%d",&day);
    switch (day)
    {
        case 1:
         printf("\n Monday");
         break;
        case 2:
         printf("\n Tuesday");
         break;
        case 3:
         printf("\n Wednesday");
         break;
        case 4:
         printf("\n Thursday");
         break;
        case 5:
         printf("\n Friday");
         break;
        case 6:
         printf("\n Saturday");
         break;
        case 7:
         printf("\n Sunday");
         break;
    }
    return 0;
}
