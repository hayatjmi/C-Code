// 5.	Write a program to check whether the entered string is palindrome or not.
// Name Hayat Khan
// MCA Ist Year
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    gets(str);
    int l=0;
    int h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            printf("%s is not a Palindrome : \n",str);
            return 0;
        }
    }
    printf("%s is palindrome",str);

}