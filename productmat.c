// Product of two Matrices.
#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\n Enter the number of rows and columns");
	scanf("\n %d%d",&row,&col);
	int matrix1[row][col];
	printf("\n The elements of matrix1 are:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("\n %d",&matrix1[i][j]);
		}
	}
	printf("\n The matrix1 is\n :");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		   printf("\t %d",matrix1[i][j]);
		}
		printf("\n");
	}
	int matrix2[row][col];
	printf("\n The elements of matrix2 are:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("\n %d",&matrix2[i][j]);
		}
	}
	printf("\n The matrix2 is\n :");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		   printf("\t %d",matrix2[i][j]);
		}
		printf("\n");
	}
	int matrix3[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			matrix3[i][j]=matrix1[i][j]*matrix2[i][j];
		}
	}
	printf("The sum of Matrix1 and Matrix2 are:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t %d",matrix3[i][j]);
		}
	   printf("\n");
	}
	return 0;
}
