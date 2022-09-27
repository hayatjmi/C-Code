#include<stdio.h>
#include<conio.h>
void doWork(int x  , int y , int *sum, int *prod , int *avg);
int main()
{
   int a =5 , b=3;
   int *sum, *prod;
   int *avg;
   doWork(a,b,&sum,&prod,&avg);
   printf("sum = %d \n prod = %d \n avg = %d ",sum ,prod , avg);
}
void doWork(int x , int y , int *sum , int *prod,int *avg)
{
    *sum=x+y;
    *prod=x*y;
    *avg=(x+y)/2;
}