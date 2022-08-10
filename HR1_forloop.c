#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".*/



int main() 
{
    int a, b;
    int t , s;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      s=a<b?a:b;
      t=a>b?a:b;
      for(s;s<=t;s++)
      {
          if(s==1)
          {
           printf("one\n");
          }
          else if(s==2)
          {
              printf("two\n");
          }
          else if(s==3)
          {
              printf("three\n");
          }
          else if(s==4)
          {
              printf("four\n");
          }
          else if(s==5)
          {
              printf("five\n");
          }
          else if(s==6)
          {
              printf("six\n");
          }
          else if(s==7)
          {
              printf("seven\n");
          }
          else if(s==8)
          {
              printf("eight\n");
          }
          else if(s==9)
          {
              printf("nine\n");
          }
          else 
          {
              if(s>=10)
              {
                  if(s%2==0)
                  printf("even\n");
                  else {
                  printf("odd\n");
                  }
              }
          }
      }
      

    return 0;
}
