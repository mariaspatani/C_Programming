/*
Author: Maria
Date:17/03/2025
Description : Read 2D array using function.*/
#include<stdio.h>
void readmatrix(int[][10],int,int);
void printmatrix(int matrix [][10],int,int);
int main()
{
	int row,col;
	printf("\nEnter the row &column values");
	scanf("%d%d",&row,&col);
	int matrix[10][10];
	readmatrix(matrix,row,col);
	printmatrix(matrix,row,col);
	return 0;
}
void readmatrix(int matrix[][10],int row,int col)
{
	printf("\n Enter the elements");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("\n%d",&matrix[i][j]);
		}
	}
}
void printmatrix(int matrix[][10],int row,int col)
{
	printf("\n Enter the elements\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("\t %d",matrix[i][j]);
		}
		printf("\n");
	}
}
