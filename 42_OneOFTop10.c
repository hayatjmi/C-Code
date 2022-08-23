// fibonacci series
#include <stdio.h>
void fib(int);
int firstdig = 0;
int seconddig = 1;
int main()
{
    int numofdig;
    printf("\nEnter the number of digits you want to print : ");
    scanf("%d",&numofdig);
    printf("%d\t",firstdig);
    printf("%d\t",seconddig);
    fib(numofdig);
}
void fib(int x)
{

    int nextdig;
    for (int i = 1; i <= x; i++)
    {
        nextdig = firstdig + seconddig;
        firstdig = seconddig;
        seconddig = nextdig;
        printf("%d\t", nextdig);
    }
    printf("\n");
}