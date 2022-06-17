#include<stdio.h>
void table(int arr[][10],int n);
int main()
{
    int arr[2][10];
    table(arr,2);
    table(arr,3);
}
void table(int arr[][10],int n )
{
    for(int i=0;i<10;i++)
    {
        printf("%d\t",n*(i+1));
    }
    printf("\n\n\n\n");
}