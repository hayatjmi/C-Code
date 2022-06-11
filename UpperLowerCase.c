#include<stdio.h>
int main()
{
    char alphabet;
   
    printf("Enter an alphabet :");
    scanf("%c",&alphabet);
   
    if (alphabet>=65 && alphabet<=90)
    {
        printf("Uppercase");
    }
    else if ( alphabet<=122 && alphabet>=97)
    {
        printf("lowercase");
    }
    else
    {
        printf("Other character");
    }
    
}