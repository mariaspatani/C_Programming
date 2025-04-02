/* Author:Maria
   Date  :2/4/2025
   Description: Creating a C program to print details of 5 students*/
   #include<stdio.h>
   typedef struct {
   	int rollNo;
   	char name[20];
   	float cgpa;
   }student;
   int main(){
   	student s[5];
   	for(int i=0;i<5;i++){
   		printf("\nEnter the rollNumber");
   		scanf("\n%d",&s[i].rollNo);
   		printf("\nEnter the name");
   		scanf("\n%s",s[i].name);
   		printf("\nEnter the CGPA");
   		scanf("\n%f",&s[i].cgpa);
   	}
   	printf("\n The student details:");
   	for(int i=0;i<5;i++){
   		printf("\nName :%s",s[i].name);
   		printf("\nRollNo :%d",s[i].rollNo);
   		printf("\nCGPA :%f",s[i].cgpa);
   	}
   	return 0;
  }
   		
   		
   	
