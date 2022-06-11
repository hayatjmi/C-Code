#include<stdio.h>
void hot(void);
void cold(void);
int main()
{
    hot();
    cold();
}
void hot(void)
{
    int temp;
    printf("\nEnter the temprature in your locality : ");
    scanf("%d",&temp);
    if(temp>=35){
        printf("HOt temprature");
    }
}
    void cold(void)
{
    int temp;
    printf("\nEnter the temprature in your locality : ");
    scanf("%d",&temp);
    if(temp<=35){
        printf("cold temprature");
    }
}