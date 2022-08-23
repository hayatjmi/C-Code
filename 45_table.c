#include<stdio.h>
int main()
{
   
    // for(int i=1;i<=10;i++)
    // {
    //     printf("\n%d*%d=%d",digit,i,digit*i);
    // }
    // reverse bhi try kar lete hai chalo
    // for (int i =10;i>=1;i--)
    // {
    //     printf("\n%d",digit*i);
    // }
    //  chalo 5 se 50 tak ka sum bhi yhi kar lete hai practice hi to hai ( 5 or 50 bhi yhi included hai ye yaad rakhna hai)
    int sum=0;
    for (int i =5; i<=50 ;i++)
    {
        sum =sum+i;
    }
    printf("%d",sum);

}