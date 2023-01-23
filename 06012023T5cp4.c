// 4.	Program to search an element in a array using Linear Search.
#include<stdio.h>
int main()
{
    int arr[10],num;
    printf("Enter the elements of the array : \n " );
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search in the array  : \n " );
    scanf("%d\n",&num);

 
    for(int i=0;i<10;i++)
    {
          if(num==arr[i])
          {
            printf("\nNumber is present on the %d th index of the array ",i+1);
          }
          if(i==10)
          {
            printf("number is not present in the array");
          }
         
    }
}