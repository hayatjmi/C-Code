// 3.	Program to find the minimum and maximum element of the array.
#include<stdio.h>
int main()
{
int arr[10], min =0, max =0;
min=max;
for(int i=0;i<10;i++)
{
 scanf("%d",&arr[i]);
}
for(int i=0;i<10;i++)
{
    if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            // max=arr[0];
        }
   

    
}
     printf("\nmaximum is %d",arr[9]);
     for(int i=0;i<10;i++)
{
    if(arr[i]<arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            // max=arr[0];
        }
}
printf("\nminimum is %d",arr[9]);
}