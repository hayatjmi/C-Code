// 2.	Write a program to display the color name according to the code entered. The coding scheme is as follows 
//  1: “RED”
//  2: “GREEN”
//  3: “WHITE”
//  4: “YELLOW”
//  5: “ORANGE”
//  Name Hayat Khan
//  Mca Ist year
#include<stdio.h>
int main()
{
    printf("1: RED\n");
    printf("2: GREEN\n");
    printf("3: WHITE\n");
    printf("4: YELLOW\n");
    printf("5: ORANGE\n");
    int code;
    printf("Enter a code : \n");
    scanf("%d",&code);
    switch (code)
    {
    case 1:
        printf("You choose RED");
        break;
    case 2:
        printf("You choose GREEN");
        break;
    case 3:
        printf("You choose WHITE");
        break;
    case 4:
        printf("You choose YELLOW");
        break;
    case 5:
        printf("You choose ORANGE");
        break;
    
    default:
       printf("You input an Invalid Code!");
        break;
    }

}
