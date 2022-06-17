#include<stdio.h>
int main()
{
     char  ch='*';
    int *ptr =&ch;
    // printf("ptr=%u",ptr);
    // ptr++;
    // printf("\nptr=%d",ptr);
    // ptr--;
    // printf("\n%d",ptr);
    
    printf("ptr=%u",ptr);
    ptr++;
    printf("\nptr=%d",ptr);
    ptr--;
    printf("\n%d",ptr);

}