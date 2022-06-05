#include<stdio.h>
#include<conio.h>
int main()
{
    int Istnum , IIndnum, sum;

    printf("Enter first Number : ");
    scanf("%d",&Istnum);

    printf("Enter second number  : ");
    scanf("%d",&IIndnum);

    sum = Istnum + IIndnum;

    printf("sum is : %d",sum);// we can also type Istnum + IIndnum is place of (sum); 
    return 0;
}