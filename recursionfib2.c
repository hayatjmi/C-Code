#include<stdio.h>
int fib (int);
void main()
{
int n,i=0,c;
printf("Enter a number : ");
scanf("%d",&n);
for(c=1;c<=n;c++)
{
  printf(" %d",fib(i));
  i++;
}
}
int fib(int x)
{
  if(x==0)
  {
    return 0;
  }
  else if(x==1)
  {
    return 1;
  }
  else
  {
    return(fib(x-1)+fib(x-2));
  }
  
}