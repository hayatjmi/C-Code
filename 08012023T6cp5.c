// 5.	Program to find the row sum and the column sum of a matrix of order m x n.
// Name Hayat Khan
// MCA Ist Year

#include<stdio.h>
int main()
{
    int arr[][3]={
        1,2,3,
        4,5,6,
        7,8,9};
        int r1=0,r2=0,r3=0,c1=0,c2=0,c3=0;
        for(int i=0;i<1;i++)
        {
            for(int j=0;j<3;j++)
            {
               
                r1+=arr[i][j];
               
            }
        }
         for(int i=1;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                
               
                r2+=arr[i][j];
                
               
            }
        }
         for(int i=2;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               
                
                r3+=arr[i][j];
            }
        }
        printf(" %d\n %d\n %d\n",r1,r2,r3);

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<1;j++)
            {
                c1+=arr[i][j];
               
            }
        }
         for(int i=0;i<3;i++)
        {
            for(int j=1;j<2;j++)
            {
                
                
                c2+=arr[i][j];
                
               
            }
        }
         for(int i=0;i<3;i++)
        {
            for(int j=2;j<3;j++)
            {
               
                c3+=arr[i][j];
            }
        }
           printf(" %d %d %d",c1,c2,c3);

}