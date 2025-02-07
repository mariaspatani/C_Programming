#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\n Enter the number of rows and columns");
	scanf("\n %d%d",&row,&col);
	int matrix[i][j];
	prinf("\n The elements are:")
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("\n %d",&matrix[i][j]);
		}
	}
	printf("\n The matrix is :");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		   printf("\t %d",&matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
