#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, sum = 0;
    printf("Enter the number of digits in this array\n");    //size of arry by user 
    scanf("%d", &n);
    int *val = (int *)malloc(n * sizeof(int));
    printf("Enter the values of this array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val[i]);
        sum = sum + val[i];
    }
    printf("sum of the digits of this array is : %d ", sum);
    free(val);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}