// 5.	Program that accepts temperature in Centigrade and converts into Fahrenheit using the formula C/5 = (F-32)/9.
//    Name : Hayat khan
//    Mca Ist year 
#include<stdio.h>
int main()
{
    float tempInCelcius;
    printf("Enter the temprature in Celsius : \n");
    scanf("%f",&tempInCelcius);
    float tempInFahrenheit= (tempInCelcius*1.8)+32;
    printf("%f",tempInFahrenheit);
}