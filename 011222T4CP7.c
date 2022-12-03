// 7.	Program to find the sum of digits of the entered number.
// Name Hayat Khan
// MCA ist year
#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("Enter the number : \n");
    scanf("%d",&num);
    while(num!=0)
    {
      int rem=num%10;
      sum+=rem;
      num=num/10;
    }
    printf("%d",sum);
}