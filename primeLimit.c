//prime number upto a limit.
#include<stdio.h>
int main(){
	int limit,j,i;
	printf("\n Enter the limit");
	scanf("\n %d",&limit);
	printf("\n The numbers are:");
	for(i=2;i<limit;i++)
	{
		int flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		
		}
		if(flag==0)
	        {
		printf("\nThe numbers are:%d",i);
	        }
	        
	}
	
	return 0;
}
