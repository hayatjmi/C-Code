#include<stdio.h>
#include<string.h>
void lowerToUpper(char str[50]);
char vowel[5] ={'a','e','i','o','u'};
int main()
{
  char str[50]=" My name is Hayat khan";
  puts(str);
  lowerToUpper(str);
}
void lowerToUpper(char str[50])  
{
    for(int i=0;i<=strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')

        {
            if(str[i]>=97||str[i]<=122)
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
   

}