// 2.	Program to print the sum of all numbers up to a given number.
// Name Hayat Khan
// Mca ist year
#include<stdio.h>
int main()
{
    int nthNum;
    int sum=0;

    printf("Enter the nth number : \n");
    scanf("%d",&nthNum);

    for(int i=1;i<=nthNum;i++)
    {
        sum+=i;
    }
    printf("\n sum is %d",sum);

}