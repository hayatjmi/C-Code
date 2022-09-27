#include<stdio.h>
#include<conio.h>
int main()
{
               int a=6;
               int b=10;
               int *x=&a;
               int *y=&b;
               if(*(&a)>*(&b))
               printf("%d is greater",*(&a));
               else
               printf("%d is greater ",*(&b));
}