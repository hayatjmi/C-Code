#include<stdio.h>
#include<conio.h>
void square(int n);
void _square(int* n);
int main()
{
               int number=4;
               square(number);
               printf("%d\n",number);
               _square(&number);
               printf("%d\n",number);
    

}
void square(int n)
{
               n=n*n;
               printf("%d\n",n);
               
}
void _square(int *n)
{
               *n=(*n)*(*n);
               printf("%d\n",*n);
}