#include<stdio.h>
void ATtheEnd(int arr[],int n);
int main()
{
int arr[]={1,2,3,4,5,6,4,5,3,4,5,6,7,8,9,6,4,7,9,7,4,6,7,8,5,4,3,4,5,4,5,6,7,8,8,54};
ATtheEnd(arr,36);
}
void ATtheEnd(int arr[],int n)
{
    int value;
    printf("Enter the value you want to insert at the end");
    scanf("%d",&value);
    arr[n]=value;
   for(int i=0;i<n+1;i++)
   {
       printf("%d \t ",arr[i]);
   }

    
}