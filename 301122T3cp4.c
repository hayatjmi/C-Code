// 4.	User is going to enter a value from 1 to 7. day of the week should be displayed accordingly like 1 – Monday, 2 – Tuesday etc. Write a program for the same.

// Name Hayat Khan
// Mca first year 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number in the range of  1-7 : ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf( " \n Monday ");
        break;
        
    case 2:
        printf( " \n Tuesday ");
        break;
        
    case 3:
        printf( " \n WEdnesday ");
        break;
        
    case 4:
        printf( " \n Thurusday ");
        break;
        
    case 5:
        printf( " \n Friday ");
        break;
        
    case 6:
        printf( " \n Saturday ");
        break;
        
    case 7:
        printf( " \n Sunnday ");
        break;
    
    default:
       printf("Incorrect Input / Invalid Input ! ");
        break;
    }
}