#include<stdio.h>
int main()
{
    int num;
    
    int sum =0;
    printf("Enter the number : " );
    scanf("%d",&num);
    // for(int i=1 ;i<=num ;i++)
    // {
    //     sum=sum+i;
    // }
    // printf("%d",sum);
    int i=1;
    // while(i<=num)
    // {
    //     sum+=i;
    //     i++;
    // }
    // printf("%d",sum);
    do{
        sum+=i;
        i++;
    }while(i<=num);
    printf("%d",sum);
}