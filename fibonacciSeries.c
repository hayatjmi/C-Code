#include<stdio.h>
void fibonacci(int);
int main()
{
    int num;
    printf("Enter a num ");
    scanf("%d",&num);
    fibonacci(num);

}
void fibonacci(int n)
{
    int ft=0;
    int st=1;
    int i=1;
    printf("\n%d\n%d",ft,st);
    while( i<=(n-2))
    {
        int nt=ft+st;
        printf("\n%d",nt);
        ft=st;
        st=nt;
        i++;

    }
}





