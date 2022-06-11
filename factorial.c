#include<stdio.h>
int main()
{
    int num;
    int factorial=1;
    int i=1;
    printf("Enter number : ");
    scanf("%d",&num);
   while( i <= num)
   {
       printf("\n%d",i);
        factorial = factorial*i;
       i++;
   }
   printf("\n%d",factorial);
    
}