// 3.	Program to find the minimum and maximum element of the array.
// Hayat khan
// mca sec b ist year
#include <stdio.h>
int main()
{
   int arr[10], large, small;
   for (int i = 0; i < 10; i++)
   {
      scanf(" %d", &arr[i]);
   }
   large = small = arr[0];
   for (int j = 0; j < 10; j++)
   {
      if (arr[j] > large)
         large = arr[j];
      if (arr[j] < small) 
         small = arr[j];
   }
   printf("\nsmallest is %d\n", small);
   printf("\nlargest is %d\n", large);
}