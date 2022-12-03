#include<stdio.h>
int main()
{
    float charges;
    int unit;
    printf("Enter the unit : ");
    scanf("%d",&unit);
    if(unit >=1 && unit<=200)
    {
        charges=unit*0.50;
        printf("charges is :  %f",charges);
    }
    else if (unit>200 && unit<=400)
    {
        charges=100+(unit-200)*0.65;
        printf("charges is : %f",charges);
    }
     else if (unit>400 && unit<=600)
    {
        charges=230+(unit-400)*0.80;
        printf("charges is : %f",charges);
    }
     else if (unit>600)
    {
        charges=390+(unit-600)*1.0;
        printf("charges is : %f",charges);
    }
    else{
        printf("wrong input");
    }
}