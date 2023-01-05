#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3]={0},i,j,k;
       printf("Enter the elements of A matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
        printf("Enter the elements of B matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
     printf("\n Matrix A \n "); 
  for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf(" %d",A[i][j]);        
    }
    printf("\n");
 }
 printf("\n Matrix B \n "); 
  for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf(" %d",B[i][j]);        
    }
    printf("\n");
 }

 
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            C[i][j]+=A[i][k]*B[k][i];
        }
    }
 }

printf("Sum of the matrix A and B is In the Form of C : \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf(" %d",C[i][j]);        
    }
    printf("\n");
 }


}
