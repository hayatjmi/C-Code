// 1.	Write a program in C to enter some value in 2D array and display it using any loop
// Name Hayat Khan
// Mca ist year


#include<stdio.h>
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
}