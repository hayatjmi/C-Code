// 9.	Program to print Armstrong numbers between two intervals.
// Name Hayat Khan
// Mca Ist year
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int init , end;
    int digitNum=0;
    int armstrong=0;
    printf(" Enter the interval or initial or end point : ");
    scanf("%d %d",&init,&end);
    for(int i =init;i<=end;i++)
    {int x=digitNum;
     int y=armstrong;
        while(i!=0)
        {
           
           int rem= i%10;
           x++;
           i=i/10;
        }
        while(i!=0)
        {
            
           int rem= i%10;
           y+=pow(rem,x);
           i=i/10;
        }
        if(y==i)
        {
            printf("%d",i);
        }
        else
        {continue;}
        
        
    }
}