/*
 Author : Maria
 Date   : 17/02/2025
 Description:Write a C program  to check whether the given number is even or odd using function.*/
#include<stdio.h>
int isEven(int num);
int main()
{
	int num;
	printf("\n Enter the number");
	scanf("\n %d",&num);
	if(isEven(num))
	{
		printf("\n The given no is even");
	}
	else
	{
		printf("\n The given no is odd");
	}
	return 0;
}
int isEven(int num)
{
	
	if(num%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
        }
}		
		
