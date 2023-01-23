// 2.	Write a function named CheckPrime, which will check an input number is prime or not.
// Name Hayat Khan
// MCA FIRST YEAR
#include<stdio.h>
void checkPrime(int);
int main()
{
   int num;
   printf("Enter a number");
   scanf("%d",&num);
   checkPrime(num);
}
void checkPrime(int x)
{
    int flag=0;
    int half=x/2;
    for(int i=2;i<=half;i++)
    {
        
        if(x%2==0)
        {
            flag++;
        }
    }
    if(flag==0)
    {
        printf("Prime number");
    }
    else
    {
        printf("NOt a prime  number");
    }
}