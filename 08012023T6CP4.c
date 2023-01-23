// 4.	Program to find the transpose of a matrix.
// Name Hayat Khan
// MCA Ist Year

#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    printf("Enter the elements of the matrix arr: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=arr[j][i];
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    
}