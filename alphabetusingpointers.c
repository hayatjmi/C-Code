#include<stdio.h>
int main()
{
    char *c='A';
    	

    while(*c<='Z')
    {
        printf("%c\t",*c);
        *c=*c+1;
    }
}