//write a program to convert decimal  number to binary
#include<stdio.h>
int main(){
	int num,rem,bin=0,i=1;
	 
	printf("\n Enter the number");
	scanf("\n%d",&num);
	while(num>0){
	rem=num%2;
	bin=rem*i+bin;
	i=i*10;
	num=num/2;
	
	
	}
	printf("\n%d",bin);
	
	return 0;
}

