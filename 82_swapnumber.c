#include<stdio.h>
void swap(int ,int);
void _swap(int * ,int *);
int main()
{
    int a=4;
    int b=5;
   swap(a,b);
   printf("\n%d %d",a,b);
   _swap(&a,&b);
   printf("\n%d %d",a,b);

}
void swap(int x , int y)
{
    int t=x;
    x=y;
    y=t;
    printf("\n%d %d",x,y);

}
void _swap(int *x ,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
    printf("\n%d %d",*x,*y);
    

}
