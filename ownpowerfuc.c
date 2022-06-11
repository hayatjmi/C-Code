#include<stdio.h>
int powfunc(int);


int main()
{
    int num;
    printf("\nenter the number for which you want to calculate the power : ");
    scanf("%d",&num);
    int x=powfunc(num);
    printf("%d",x);
}
int powfunc(int x)
{
    int pow;
    int i=1;
    int powvalue =1;
    printf("\nEnter the pow you want to find of a number :");
    scanf("%d",&pow);
    for (i=1;i<=pow;i++)
    {
        powvalue *=x;
    }
    return powvalue;


}