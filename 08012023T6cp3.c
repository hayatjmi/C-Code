// .4Program that finds the sum of diagonal elements of a m x n matrix.
// Name Hayat Khan
// Mca Ist Year

#include<stdio.h>
int main()
{
    int A[3][3];
    int diasum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                diasum=diasum+A[i][j];
            }
        }
    }
    printf("sum is %d",diasum);
} 