#include<stdio.h>
void naturalnum(int,int);
int main()
{
    int n;
    int i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    naturalnum(i,n);
    

}
void naturalnum(int x,int y)
{
    int a=x;
    int b=y;
    if(a<=b)
    {
        printf(" %d",a);
        naturalnum(a+1,b);
    }
}