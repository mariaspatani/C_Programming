//multiply two numbers using function.
#include<stdio.h>
int multiply(int n1,int n2);
int main()
{
	int n1,n2,result;
	printf("\n Enter two number");
	scanf("\n %d%d", &n1,&n2");
	result =multiply(n1, n2);
	printf("\n Product:%d",result);
	return 0;
}
int multiply(int n1,int n2)
{
	int result;
	result= n1*n2;
	return result;
}

