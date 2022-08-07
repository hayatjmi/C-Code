#include<stdio.h>
#include<string.h>
void findHighest(char str[50]);
int main()
{
    char str[50];
    fgets(str,50,stdin);
    puts(str);
    findHighest(str);

  

}
void findHighest(char str[50])
{   int count=0;
    for(int i=0;i<=strlen(str);i++)
{
    if(str[i]==str[i++])
    {
        count++;
        printf("%c %d",str[i],count);
    }
}

  
}