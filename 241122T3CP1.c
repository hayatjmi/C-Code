// 1.	Write a Program to read two numbers and an operator (+, -, *, /) which performs the specified operation and display the result
// Name Hayat Khan
// MCA Ist Year
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two number num1 and num2 respectively : \n ");
    scanf("%d%d",&num1,&num2);
    char ch;
    printf("\n+ : For Addition");
    printf("\n- : For Subtraction");
    printf("\n* : For Multiplication");
    printf("\n/ : For Divide");
    printf("\nEnter an Operation : ");
    scanf("%c",&ch);
    switch (ch)
    {
    case '+':
        printf("%d",num1+num2);
        break;
     case '-':
        printf("%d",num1-num2);
        break;
     case '*':
        printf("%d",num1*num2);
        break;  
     case '/':
        printf("%d",num1/num2);
        break;      
    
    default:
       printf("Invalid Operation");
        break;
    }
}