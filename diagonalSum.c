//find the sum of elements of leading digonal in a matrix
#include<stdio.h>
int main(){
	int r1,c1,i,j,sum=0;
	printf("\n Enter the no of rows and columns");
	scanf("\n%d%d",&r1,&c1);
	int matrix[r1][c1];
	printf("\n The elements are");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
	  	  scanf("\n %d",&matrix[i][j]);
	  	 }
	 }
	 printf("\n The matrix is:");
	 for(i=0;i<r1;i++)
	 {
	 	for(j=0;j<c1;j++)
	 	{
	 		if(i==j)
	 		{
	 			sum=sum+matrix[i][j];
	 			
	 		
	 		}
	 		
	 	}
	 	
	 	
	 }
	 printf("\n The sum of diagonal elements:%d",sum);
	 return 0;
}

