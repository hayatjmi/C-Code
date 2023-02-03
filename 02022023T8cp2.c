
// 2.	Write C program to read and print an employee's detail using structure.
// hayat khan
// mca ist year
#include<stdio.h>
struct Employee
{
    char name[10];
    float salary;
    char department[20];
    char city[20];
    int age;

    
}B;
int main()
{
    
    gets(B.name);
    scanf("%d",&B.age);
    scanf("%f",&B.salary);
    gets(B.department);
    gets(B.city);
    
    printf("\n%s",B.name);
    printf("\n%s",B.city);
    printf("\n%s",B.department);
    printf("\n%d",B.age);
    printf("\n%f",B.salary);



}