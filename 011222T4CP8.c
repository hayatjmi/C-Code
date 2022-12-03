// 8.	Program to find the reverse of a number.
// Name Hayat khan
// mca ist year
#include<stdio.h>
int main()
{
    
    int num;
    printf("Enter the number : \n");
    scanf("%d",&num);
    while(num!=0)
    {
      int rem=num%10;
     printf("%d",rem);
      num=num/10;
    }

}