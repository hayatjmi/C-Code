#include<stdio.h>
#include<conio.h>
int main()
{
               int a =5;
               int b=6;
               int temp;
               printf("a = %d &",a);
               printf(" b = %d\n",b);
               temp=a;
               a=b;
               b=temp;
               printf("a = %d &",a);
               printf(" b = %d",b);
               return 0;
}