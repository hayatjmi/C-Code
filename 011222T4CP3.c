// 3.	Program to find the factorial of a given number.
// Name Hayat khan
// mca ist year
#include<stdio.h>
int main()
{
    int num;
    int fact=1;
    printf("Enter a number \n ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
       fact=fact*i;
    }
    printf("%d",fact);
}