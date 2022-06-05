#include<stdio.h>
int main()
{
    int num1 , num2 , num3 ;
    float sum;
    printf("enter Ist number");
    scanf("\n%d",&num1);
    printf("enter IInd number");
    scanf("\n%d",&num2);
    printf("enter IIIrd number");
    scanf("\n%d",&num3);
     sum = num1 + num2 + num3 ;
     printf("\nAverage of these three numbers is : %f", sum/3);
}