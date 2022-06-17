#include<stdio.h>
void slicefunc(char arr[]);
int main()
{
char arr[50];
printf("Enter the arr");
scanf("%s",&arr);
slicefunc(arr);
}
void slicefunc(char arr[])
{
int n ;
int m;
printf("enter first index");
scanf("%d",&n);
printf("Enter second index");
scanf("%d",&m);
  for(int i=n;i<=m;i++)
  {
      printf("%c",arr[i]);
  }

}