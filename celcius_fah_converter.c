#include<stdio.h>  // successful::
void CtoFConvertor(void);
int main()
{
  CtoFConvertor();
}
void CtoFConvertor(void)
{
 int choose;
 int C;
 int F;
 
 printf("* 1. C to F");
 printf("\n* 2. F to C");
printf("\nEnter the choose value :1 or 2 = ");
scanf("%d",&choose);
switch (choose)
{
case 1:

    printf("\nEnter the value you want to convert : ");
    scanf("%d",&C);
    float f = C*1.8+32;
    printf("\n The fahrenhiet value of %d is %f ", C,f);
    break;
case 2:

  printf("\nEnter the value you want to convert : ");
    scanf("%d",&F);
    float c = F/1.8-32;
    printf("\n The fahrenhiet value of %d is %f ", F,c);
break;    

default:
printf("Wrong keyword :");
    break;
}
}