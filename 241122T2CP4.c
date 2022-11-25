// 4.	Program that tells whether a given year is leap year or not.
// Name Hayat Khan
// MCA Ist Year
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year eg. (2012) \n");
    scanf("%d",&year);
    if(((year%4==0) && ((year%400==0) || (year%100!=0))  ))
    {
        printf("leap year");
    }
      else
    printf("NOt a leap year");
    
}