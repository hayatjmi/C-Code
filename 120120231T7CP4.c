// 4.	Write a function named GetMax, that will find the maximum among array of numbers.
// Name Hayat Khan
// MCA Ist Year
#include<stdio.h>
void GetMax(int[]);
int main()
{
    int arr[10]={1, 5,8,9,6,7,12,30,8,9};
    GetMax(arr);

}
void GetMax(int arr[])
{
  int max;
  max=arr[0];
  for(int i=1;i<10;i++)
  {
    if(max<arr[i])
    {
        max=arr[i];
    }
    // if(arr[i]>arr[i+1])
    // {
    //     min=arr[i+1];
    // }
  }
  printf("%d",max);
}