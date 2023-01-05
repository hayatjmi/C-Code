// 2.	Program that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and prints them.
// hayat khan
// mca 1 year i sem sec b
#include<stdio.h>
int main()
{
int arr[4];
int brr[4];
int crr[4];
printf("Enter the 5 elements of arr array : ");
for (int i=0;i<4;i++)
{
    scanf("%d",&arr[i]);
}
printf("\n");
printf("Enter the 5 elements of brr array : ");
for (int i=0;i<4;i++)
{
    scanf("%d",&brr[i]);
}
printf("\n");
for (int i=0;i<4;i++)
{
    crr[i]=arr[i]+brr[i];
    printf(" %d",crr[i]);
}

}    
