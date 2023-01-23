// 3.	Program to implement strlen (), strcat (),strcpy () using the concept of Functions.
// Name Hayat Khan
// Mca ist year

#include<stdio.h>
int strlength(char[]);
void strcopy(char[],char[],int);
void strconcetanation(char[],char[]);
int main()
{
    char str[10];
    gets(str);
    char str1[10];
    char str2[10];
    gets(str2);
   int l= strlength(str);
   printf("%d\n",l);
    strcopy(str,str1,l);
    strconcetanation(str1,str2);

}
int strlength(char str[ ])
{
    int i=0;
   int count =0;
   while(str[i] != '\0' )
   {
     count++; 
     i++;
   }
   return(count);
}
void strcopy(char str[],char str1[],int len)
{
    for(int i=0;i<=len;i++)
    {
        str1[i]=str[i];
    }
    printf("\n%s",str1);
}
void strconcetanation(char str[],char str2[])
{
    printf("%s %S",str1,str2);
}