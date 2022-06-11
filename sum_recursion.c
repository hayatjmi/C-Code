#include<stdio.h>
int sum(int);
int add =0;
int main()
{

    int num;
   
  printf("Enter the nth number");
  scanf("%d",&num);
  sum(num);
  printf("%d",add);
}
int sum(int x)
{

  if(x==1)
  {
      return 1;
  }
  add= sum(x-1);
  add=add+x;
  return add;
  
}