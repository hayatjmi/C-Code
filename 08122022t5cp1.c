// 1.	Program that simply takes elements of the array from the user and finds the sum of these elements
// Name Hayat Khan
// MCA fist year
#include<stdio.h>
int main()
{
    int arr[5];
    int sum=0;
    printf("Enter five elements \n");
    for(int i =0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
}