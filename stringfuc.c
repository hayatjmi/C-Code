#include<stdio.h>
#include<string.h>
int stringlength(char[]);   // fuction calculate the lenght of the string
void stringcopy(char[],char[]); // funtion to copy a string
void stringreverse(char[],int); 
void stringcancatenation(char[],char[]);
int main()
{
    char str1[30];
    char str2[10];
    gets(str1);
    
    gets(str2);
    // puts(str);
    // int l =stringlength(str);
    // printf("%d",l);
    // stringcopy(str1,str2);
    // stringreverse(str,l);
    stringcancatenation(str1,str2);
  printf("%s",str1);

}
// fuction calculate the lenght of the string
int stringlength(char arr[])
{
  int count =0;
  int i=0;
  while(arr[i]!='\0')
  {
     count++;
     i++;
  }
  return count;
}
// funtion to copy the string
void stringcopy(char arr1[],char arr2[])
{
    for(int i=0;i<10;i++)
    {
        arr2[i]=arr1[i];
    }
    
    printf("%s",arr2);
}
void stringreverse(char arr[],int l)
{ 
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",arr[i]);       
    }

}
void stringcancatenation(char arr1[],char arr2[])
{
    int i;
   int len=0;
   for( i=0;arr1[i]!='\0';i++)
   {
    len++; 
   }
   printf("\n%d",len);
   for(int i=0;arr2[i]!='\0';i++)
   {
    arr1[len+i]=arr2[i];
   }
   arr1[len+i]='\0';
}