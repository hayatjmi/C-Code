#include<stdio.h>
#include<conio.h>
int main()
{
               int age=22;
               int *ptr=&age;
               int _age=*ptr;
               printf("%d\n",age);
               printf("%d\n",_age);
               printf("%p\n",&age);
               printf("%d\n",*ptr);
               printf("%p\n",ptr);
               printf("%p\n",&ptr);
               printf("%d",*(&age));

}