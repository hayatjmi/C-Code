// 7.	Write a program to find the sum of even numbers in the array.
// Name Hayat Khan
// MCA Ist Year

#include<stdio.h>
int main()
{
    int arr[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}