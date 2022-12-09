#include<stdio.h>
#include<stdlib.h>
int main()
{
 float radius , area ,pie=3.14;
 char ch;
 L1:
 printf("Do you want to find area  ; \n");
 scanf("%c",&ch);
 if(ch=='y')
 {
    printf("Enter radius\n");
    fflush(stdin);
    scanf("%f",radius);
    area=pie*radius*radius;
    printf("%f",area);
     goto L1;
 }
 else
 {
    printf("Thank you");
 }

}