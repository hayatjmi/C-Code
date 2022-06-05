#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    // if(isdigit(ch))
    // {
    //     printf("enter character is digit ");

    // }
    // else 
    // printf("entered is character");
    printf("Entered character is digit  : %d ", ch>='0' && ch <='9');
}