#include<stdio.h>
int main()
{
	int row,col,sum=0,i,j;
	printf("\n Enter the elements in rows and columns");
	scanf("%d%d",&row,&col);
	int matrix[row][col];
	printf("\n Enter the elements");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
			for(j=0;j<col;j++)
		       {
			  if(i==j)
			  {
				sum=sum+matrix[i][j];
			  }
			}
			
	}
	printf("\n The matrix is:\n");
	for(i=0;i<row;i++)
	{
			for(j=0;j<col;j++)
			{
			   printf(" %d\t",matrix[i][j]);
			}
			printf("\n");
		
	}
	printf("%d",sum);
	
	return 0;
}
