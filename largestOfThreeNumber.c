#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("\nEnter first number");
	scanf("\n %d",&n1);
	printf("\n Enter second number");
	scanf("\n%d",&n2);
	printf("\nEnter third number");
	scanf("\n%d",&n3);
	if (n1>n2)
	{
	 if (n2>n3)
	 {
	   printf("\n n1 is the largest");
	 }
	}
	 else if(n3>n2)
	 {
	  if(n1<n3)
	  {
	    printf("\n n3 is the largest");
	  }
	 }
        else
	{
	   if(n2>n3)
	   {
	     printf("\n n2 is the largest");
	   }
	
	
	   else if(n3>n2)
	   {
	     printf("\n n3 is the largest");
	   }
	   
        }
        return 0;
}
	   
