// 3.Program to calculate the simple interest and compound interest (The Principal, Amount, Rate of Interest and Time are entered through keyboard).
//    Name : Hayat khan
//    Mca Ist year 
   
#include<stdio.h>
#include<math.h>
int main()
{
    int Amount;
    float Rate;
    int timeInYear;
    float simpleInterest;
    float compoundInterest;

    printf("Enter the amount rate and time in year respectively : \n");
    scanf(" %d %f %d",&Amount , &Rate , &timeInYear);
    simpleInterest=(Amount*Rate*timeInYear)/100;
    compoundInterest=Amount*(pow(1+(Rate/100),timeInYear));
    printf("%f\n",simpleInterest);
    printf("%f",compoundInterest);


}