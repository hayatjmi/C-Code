// 2.	Program to add and multiply two matrices of order n x n
// Name Hayat Khan 
// MCa iST YEAR

#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3]={0},Sum[3][3]={0},i,j,k;
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
//  Addition of Two matrices

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        Sum[i][j]=A[i][j]+B[i][j];
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d",Sum[i][j]);
    }
}
printf("\n");


 
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            C[i][j]+=A[i][k]*B[k][j];
        }
    }
 }
// Multiplication

printf("Multiplication of the matrix A and B is In the Form of C : \n");

 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf(" %d",C[i][j]);        
    }
    printf("\n");
 }


}
