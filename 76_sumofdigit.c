 #include<stdio.h>
 void digitsum(long int);
 int main()
 {
     long int digit;
     printf("Enter the digit");
     scanf("%d",&digit);
    digitsum(digit);
 }
 void digitsum(long int digit)
 {
    int sum=0;
    while(digit>10)
    {
    sum+=digit%10;
    digit=digit/10;}
    sum+=digit;
    printf("%2d",sum);
 }