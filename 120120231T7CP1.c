// 1.	Write a function named Swap, which will swap the values of two variables. (Use the concept of call by value).
// Name Hayat Khan
// MCA Ist Year
#include<stdio.h>
void swap(int ,int);
int main()
{
int x , y ;
printf("Enter two values");
scanf("%d%d",&x,&y);
swap(x,y);
}
void swap(int a , int b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
  printf("%d %d",a,b);

}