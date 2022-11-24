// 7.	Program that swaps the values of two variables without using a 3rd variable.
// Name = Hayat khan
// Mca ist year
#include<stdio.h>
int main()
{
    int N1, N2;
    N1=30;
    N2=20;
    printf("%d\t%d\n",N1,N2);
    N1=N1-N2;
    N2=N2+N1;
    N1=N2-N1;
    printf("%d\t%d",N1,N2);
}