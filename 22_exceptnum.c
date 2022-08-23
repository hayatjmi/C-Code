#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    for (int i=1;i<=10;i++)
    {
        if(i==6)
        {
            continue;
        }
        printf("%d",i);
    }
}