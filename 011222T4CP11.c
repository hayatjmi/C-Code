// 11.	Write a program in C to display table of number 1 to 10 using nested loop
// Name Hayat Khan
// Mca ist year
#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }
}