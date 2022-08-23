#include<stdio.h>
void countnumber(int arr[],int n,int val);
int main()
{
    int arr[]={1,2,3,4,5,6,4,5,3,4,5,6,7,8,9,6,4,7,9,7,4,6,7,8,5,4,3,4,5,4,5,6,7,8,8,54};
    int val;
    printf("Enter a number :");
    scanf("%d",&val);
    countnumber(arr,36,val);
}
void countnumber(int arr[],int n,int val)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            count++;
        }
    }
    printf("%d",count);
}