#include<stdio.h>
int main()
{
 	char value;
 	printf("\n Enter a character in small letter");
 	value=getchar();
 	value=value-32;
 	printf("\n capital case letter=%c",value);
 
 	return 0;
}


