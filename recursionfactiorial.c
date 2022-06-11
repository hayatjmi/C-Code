#include<stdio.h>// factorial printed successfully..
int factorial (int );
int num;
int value=1;

int main()
{
    printf("Enter a number");
    scanf("%d",&num);
    factorial(num);
    printf("%d",value);
}
int factorial(int x)
{
    if(x==0){
        return 1;
    }
    value=factorial(x-1);
    value=value*x;
    return value;
}