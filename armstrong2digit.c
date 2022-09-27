#include<stdio.h>
#include<conio.h>
int main()
{             int sum=0;
               for(int i=10;i<=99;i++)
               {       
                      int x=i;
                      while(x!=0)
                      {       
                         int r=x%10;
                         sum=sum+(r*r);
                         x=x/10;
                         
                              
                      }
                      if(sum==i)
                      printf("%d\n",i);
               }
}