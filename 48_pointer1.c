#include<stdio.h>
int main()
{
    int age =22;
    int *ptr =&age;
    int _age =*ptr;

    printf("\n%d",age);
    printf("\n%d",&age);
    printf("\n%d",_age);
    printf("\n%d",&_age);
    printf("\n%u",ptr);
}