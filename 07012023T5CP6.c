// 6.	Program to print the elements of the array in reverse order.
// Name Hayat khan
// Mca Ist Year

#include<stdio.h>
int main()
{
    printf("Enter the number : \n ");
    int num;
    int arr[ num=5],i;

    printf("Enter the element of the array :\n ");
    for(i=0;i<num;i++)
    scanf("%d",&arr[i]);

    printf("The element of the array in reverse order are as follows: \n");
    for(i=num-1;i>=0;i--)
    printf(" %d",arr[i]);
}