// 4.	Program to calculate the area and circumference of a circle
//    Name : Hayat khan
//    Mca Ist year 
#include<stdio.h>
#include<math.h>

int main()
{
    float radius;
    scanf("%f",&radius);
    float Area=3.14*(pow(radius,2));
    float circumference=2*3.14*radius;
    printf("%f\n",Area);
    printf("%f",circumference);
    return 0;
}