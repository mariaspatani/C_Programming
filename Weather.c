//Write a C program to read temperature in centigrade and display a suitable message according to temperature state 

#include<stdio.h>
int main()
{
    float temp;
    printf("\n Enter a temperature");
    scanf("\n %f", &temp);
    if (temp<0)
    {
        printf("freezing point");
    }
    else if (temp>0&&temp<10)
    {
        printf("Very cold weather");
    }
    else if( temp>10&&temp<20)
    {
        printf("Cold weather");
    }
    else if(temp>20&&temp<30)
    {
        printf("Normal in Temp");
    }
    else if (temp>30&&temp<40)
    {
        printf("Hot");
    }
    else
    {
        printf("Very hot");
    }
    return 0;
    
}
