// 5.	Program to print the Fibonacci series.
// Name Hayat Khan
// Mca ist year
#include <stdio.h>
int main()
{
    int nth;
    int firstnum = 0;
    int secondnum = 1;
    int nextnum;

    printf("Enter the nth number of the series of fibonacci : \n");
    scanf("%d", &nth);
    printf("%d\t", firstnum);
    printf("%d\t", secondnum);
    for (int i = 0; i <= nth - 2; i++)
    {

        nextnum = firstnum + secondnum;

        printf("%d\t", nextnum);
        firstnum = secondnum;
        secondnum = nextnum;
    }
}