// 2.	Program to accept the marks of 5 subjects and finds the sum and percentage marks obtained by the student
//    Name : Hayat khan
//    Mca Ist year 
#include<stdio.h>
int main()
{
    float arr[5];
    int sum=0;
    float percentage;
    printf("Enter the marks of five subjects from 100: ");
    for(int i=0;i<5;i++)
    {
    
        
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
        
    }
    percentage=(sum*100)/500;
    printf("%d \n",sum);
    printf("%f",percentage);


}