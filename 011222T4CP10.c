// 10.	Write a program to print the pattern
// 1
// 1	2
// 1	2	3
// 1	2	3	4
// Name Hayat Khan
// Mca first year
#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
         printf("%d  ",j);
        }
        printf("\n");
    }
}