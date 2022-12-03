// 1.	Program that simply takes elements of the array from the user and finds the sum of these elements.
// Name Hayat khan Mca ist year
#include<stdio.h>
int main()
{
int arr[10];
int sum =0;
printf("Enter the ten Elements:  ");
for(int i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
printf("sum is : %d",sum);
}