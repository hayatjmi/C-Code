// 3.	User is going to enter a value from 1 to 12. Month name should be displayed accordingly like 1 – January, 2 – February etc. Write a program for the same.
// Name Hayat Khan
// Mca ist year
#include <stdio.h>
int main()
{
    int monthNum;
    printf("Enter the number of the month : \n");
    scanf("%d",&monthNum);
    switch (monthNum)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("Febraury");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("Agust");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;

    default:
        printf("Invalid Input ! Try Again : ");
        break;
    }
}