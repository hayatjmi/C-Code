#include<stdio.h>
int main()
{
    int aadhar[5];
    int *ptr = aadhar;
    for(int i=0;i<=5;i++)

    {
        printf("%d intdex ",i);
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<=5;i++)
    {
        printf("\n%d  :%d",aadhar[i]);
    }
}