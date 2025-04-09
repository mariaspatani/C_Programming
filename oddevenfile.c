/* Author: Maria
   Date :9/4/2025
   Description:WAP to read nos from a file numbers.txt and write all odd numbersin odd.txt and write all even numbers in    even.txt.*/
#include<stdio.h>
void readFile(FILE *fp){
	int num;
	while(fscanf(fp,"%d",&num)==1){
		printf("%d",num);
	}
	fclose(fp);
}
int main(){
	FILE*fp1 ,*fp2,*fp3;
	fp1=fopen("numbers.txt","r");
	fp2=fopen("odd.txt","w");
	fp3=fopen("even.txt","w");
	
	int num;
	while(fscanf(fp1,"%d",&num)==1){
	
	if(num%2==0){
		fprintf(fp3,"%d",num);//even
        }
        else{
        	fprintf(fp2,"%d",num);//odd
        }
       }
       
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
        printf("\n The input text file contents:");
        fp1=fopen("numbers.txt","r");
        readFile(fp1);
        printf("\n The odd text file contents:");
        fp2=fopen("odd.txt","r");
        readFile(fp2);
        printf("\n The even text file contents:");
        fp3=fopen("even.txt","r");
        readFile(fp3);
        
	return 0;
}

