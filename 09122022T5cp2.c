// 2.	Program that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and prints them.
#include<stdio.h>
int main()
{
    int A[10];
    int B[10];
    int C[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
     for(int i=0;i<10;i++)
    {
        scanf("%d",&B[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf(" %d",C[i]=A[i]+B[i]);
    }

}