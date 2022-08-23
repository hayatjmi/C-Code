#include<stdio.h>
#include<string.h>
void countlength(char arr[]);
int main()
{
    char name[]="hayat";
    
   printf("%u",strlen(name));
    countlength(name);
    
}
void countlength(char arr[])
{
int count=0;
for(int i=0; arr[i] !='\0';i++)
{
count++;
}
printf("%d",count);
}