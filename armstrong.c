//check whether given number is an armstrong or not
#include<stdio.h>
int main(){
	int num,original,rem,sum=0;
	printf("\n enter the number");
	scanf("\n %d",&num);
	original=num;
	while(num>0){
	rem=num%10;
	sum=sum+(rem*rem*rem);
	num=num/10;
	}
	if(original==sum)
	{
		printf("\n The given number is armstrong");
	}
	else
	{
		printf("\n The given number is not an armstrong");
	}
	return 0;
}
