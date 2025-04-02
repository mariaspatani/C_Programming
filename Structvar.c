/* Author:Maria
   Date  :2/4/2025
   Description: Creating a C program to print details of a student*/
   #include<stdio.h>
   typedef struct{
   	int rollNo;
   	char name[20];
   	float cgpa;
   }student;
   	int main(){
   		student s1;
   		printf("\nEnter The rollNumber");
   		scanf("\n%d",&s1.rollNo);
   		printf("\nEnter the name");
   		scanf("\n%s",s1.name);
   		printf("\nEnter the CGPA");
   		scanf("\n%f",&s1.cgpa);
        	printf("\n The student details:");
        	printf("\nName :%s",s1.name);
   		printf("\nRollNo :%d",s1.rollNo);
   		printf("\nCGPA :%f",s1.cgpa);
   	return 0;
  }
