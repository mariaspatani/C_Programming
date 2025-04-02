/*Author:Maria
  Date:2/4/2025
  Description:Average marks of the students in their 3 subjects*/
#include<stdio.h>
   typedef struct {
   	int rollNo;
   	char name[20];
   	float m1,m2,m3;
   }student;
   int main(){
   int n;
    printf("\nEnter the number of students");
    scanf("\n%d",&n);
   	student s[n];
   	for(int i=0;i<n;i++){
   		printf("\nEnter the rollNumber");
   		scanf("\n%d",&s[i].rollNo);
   		printf("\nEnter the name");
   		scanf("\n%s",s[i].name);
   		printf("\nEnter the marks of sub 1");
   		scanf("\n%f",&s[i].m1);
   		printf("\nEnter the marks of sub 2");
   		scanf("\n%f",&s[i].m2);
   		printf("\nEnter the marks of sub 3");
   		scanf("\n%f",&s[i].m3);
   	}
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=s[i].m1+ s[i].m2 +s[i].m3;
    }
    float average=(float)sum/n;
    printf("\n The sum of marks scored by all the students%d:",sum);
    printf("\nThe average marks of the students:%f",average);

   	return 0;
  }
