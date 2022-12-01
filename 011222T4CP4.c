// 4.	Program to print sum of even and odd numbers from 1 to N numbers.
// Name Hayat Khan
// Mca ist year
#include <stdio.h>
int main()
{
    int num;
    int evenSum = 0;
    int oddSum = 0;
    printf("Enter the nth number of the series \n ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i=i + 2)
    {
        oddSum = oddSum + i;
    }

    printf("\n%d",oddSum);
    for (int i = 2; i <=num; i = i + 2)
    {
        evenSum = evenSum + i;
    }

    printf("\n%d",evenSum);
}
