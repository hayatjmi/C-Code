// 1.	Program to display the first N numbers.
// Name Hayat khan
// Mca Ist year
#include<stdio.h>
int main()
{
    int nthNum;
    printf("Enter the Nth number : \n");
    scanf("%d",&nthNum);
    for(int i=1;i<=nthNum;i++)
    {
        printf("%d\t",i);
    }
}