#include<stdio.h>
#include<conio.h>
int main()
{
               int num,count=0,sum=0;
               printf("Enter a number");
               scanf("%d",&num);
               int temp=num;
               int temp2=num;
               int r;
               for(int i=0;i>=0;i++)
               {
                                if(temp==0)
                              {
                              break;
                              }
                              else
                              {
                              temp=temp/10;
                              count++;
                              
                              }
                              r=temp2%10;
                              sum=sum+(r*r*r);
                              temp2=temp2/10;

                              if(temp2==0)
                              break;


                            




               }
               if(sum==num)
               printf("Armstrong Number");
               else
               printf("This is nOt an armstrong number");
               
               
} 