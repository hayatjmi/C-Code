// 9.	Program to print Armstrong numbers between two intervals.
// Hayat khan
// mca first year
#include <stdio.h>
#include <math.h>
int main()
{
    int start, end, num,count=0,sum;
    printf("Enter the interval to find the armstrong number : \n");
    scanf("%d %d", &start, &end);
    for (int i = start; i < end; i++)
    {
        num=i;
        while(num!=0)
        {
            num=num/10;
            count++; 
            
        }
        num=i;
        sum=pow(num%10,count)+
            pow((num%100-num%10)/10,count)+
            pow((num%1000-num%100)/100,count);
        if(sum==i)
        {
            printf("%d\t",i);
        }

       count=0;
       
    }
}
