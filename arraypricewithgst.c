#include <stdio.h>
int main()
{
    float price[3];
    printf("Enter price 1 :");
    scanf("%f", &price[0]);
    printf("Enter price 2 :");
    scanf("%f", &price[1]);
    printf("Enter price 3 :");
    scanf("%f", &price[2]);
    printf("price of 1 is : %f", price[0] + 0.18 * price[0]);
    printf("price of 2 is : %f", price[1] + 0.18 * price[1]);
    printf("price of 3 is : %f", price[2] + 0.18 * price[2]);

}