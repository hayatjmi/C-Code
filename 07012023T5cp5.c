// 5.	Program to sort the elements of the array in ascending order using Bubble Sort technique.
// Name Hayat Khan
// Mca Ist Year
#include<stdio.h>
int main()
{
    int A[8],i,temp=0,pass;
    for(i=0;i<8;i++)
    {
        scanf("%d",&A[i]);
    }
    for(pass=0;pass<8;pass++)
    {
        for(i=0;i<8-pass;i++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }

        }
    }
    for(i=0;i<8;i++)
    {
    printf(" %d",A[i]);
    }
}