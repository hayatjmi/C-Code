#include<stdio.h>
int main()
{
    int numDays;
    printf("Enter the number of days \n :" );
    scanf("%d",&numDays);
    int months;int days;
   
        months=numDays/30;
        days=numDays%30;
  
    printf("num of months = %d and num of days =%d",months,days);
}