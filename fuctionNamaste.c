#include<stdio.h>
void Bonjour(char);    // fuction declaration
int main()
{
    char ch;

    printf(" Enter your Nationality (I and f) : ");
    scanf("%c",& ch);
    Bonjour( ch);

}
void Bonjour(char x)
{
    if (x=='i')
    {
       printf("Namaste ji");
    }
    else if( x=='f')
    {
        printf("Bonjour");
    }
    else{
        printf("Entered Wrong Natonality");
    }
}
