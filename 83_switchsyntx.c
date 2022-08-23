#include<stdio.h>
int main()
{
    char day;
    printf("enter a day ( m,t,w,T,f,s,S)");
    scanf("%s",&day);
    switch (day)
    {
    case 'm'/* constant-expression */:
        /* code */
        printf("Monday");
        break;
         case 't'/* constant-expression */:
        /* code */
        printf("Tuesday");
        break;
         case 'w'/* constant-expression */:
        /* code */
        printf("Wednesday");
        break;
         case 'T'/* constant-expression */:
        /* code */
        printf("Thurusday");
        break;
         case 'f'/* constant-expression */:
        /* code */
        printf("Fryday");
        break;
         case 's'/* constant-expression */:
        /* code */
        printf("saturday");
        break;
         case 'S'/* constant-expression */:
        /* code */
        printf("sunday");
        break;
    
    default:
     printf("Wrong keyword! try again : ");
        break;
    }
}