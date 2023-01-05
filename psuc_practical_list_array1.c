// 1.	Program that simply takes elements of the array from the user and finds the sum of these elements.
// Hayat Khan
// mca ist year
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array : \n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
      
    }
    int sum=0;
     for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}