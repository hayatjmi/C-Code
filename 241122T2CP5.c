// 5.	The working hours based on age of the laborer is given
// Age			Working Hour
// 0-10			0
// 11-15			0
// 16-20			3
// 21-25			6
// >25			8
// 	Write a program to calculate working hour of a person for a given age.

// Name Hayat Khan
// Mca Ist year
#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter age :\n ");
    scanf("%d",&age);
    if(age<=0 && age>100)
    {
        printf("invalid input");

    }
    else if(age>0 && age <=10)
    {
        printf("0 hour ");
    }
    else if(age>10 && age <=15)
    {
        printf("0 hour ");
    }
    else if(age>15 && age <=20)
    {
        printf("3 hour ");
    }
    else if(age>20 && age <=25)
    {
        printf("6 hour ");
    }
    else 
    {
        printf("8 hour");
    }
    

    

}
