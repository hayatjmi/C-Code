#include<stdio.h>
#include<conio.h>
int main()
{             int sum=0;     
                     int n=100;
                     int x;
                      while( n!=200)
                      {     
                         x=n; 
                         int r=x%10;
                         sum=sum+(r*r*r);
                         x=x/10;
                         
                        if(sum==n)
                         printf("%d\n",x); 
                              n++;
                      }
                      printf("\n");


               }
}