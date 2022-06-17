#include<stdio.h>
void largestArray(int arr[],int n);
int main()
{
int arr[]={1,2,3,4,5,6,4,5,3,4,5,6,7,8,9,6,4,7,9,7,4,6,7,8,5,4,3,4,5,4,5,6,7,8,8,54};
largestArray(arr,36);
}
void largestArray(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[0] < arr[i])
        {
            arr[0]=arr[i];
        }
    }
    printf("%d",arr[0]);
}