// 5.	Write C program to declare, initialize a union, example of union.
// Name hayat khan
// mca ist year
#include<stdio.h>
union employee
{
    char employee_id;
    int employee_age;
    float employee_salary;
    /* data */
} e;

int main()
{
  e.employee_age=123;
  e.employee_id='c';
  e.employee_salary=15656.5;
//   printf("%d",e.employee_age);
//   printf("%c",e.employee_id);
  printf("%f",e.employee_salary);

}