// 6.	Program to check whether the entered number is prime or not.
// Name Hayat Khan
// Mca ist year
#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    int flag=0;
    printf("Enter a number : \n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
       if(num%i==0)
       {
        flag++;
       }
    }
    if(flag==2)
    {
        printf("prime number");
    }
    else
    {
        printf(" not prime  number");
    }
}