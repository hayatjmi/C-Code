#include<stdio.h>
int main()
{
    int i=4567;
    int count=0;
    
    while(i%10!=0)
    {
        count++;
    }
    printf("\n%d",count);
}