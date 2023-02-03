// 1.	Write C program to create, declare and initialize structure.
// Name hayat khan
// mca ist year
#include<stdio.h>
struct example
{
    int a;
    float b;
    char c;

}E;
int main()
{
  E.a=5;
  E.b=4.5;
  E.c='c';

  printf("\n%d\n%c\n%f",E.a,E.c,E.b);
}