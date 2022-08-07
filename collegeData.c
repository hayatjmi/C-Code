#include<stdio.h>
struct faculty
{
    char *tname[50];
    int Tid;
    char subname[20];
    char Department[20];
    int salary;
};
struct students
{
    char name[50];
    int stuId;
    char streem[20];
    int fee;
};
struct staff
{
    char name[20];
    char post[20];
    int salary;
};
int main()
{
    struct faculty fac[3];
struct faculty *ptr=&fac[3];
    ptr->tname[0]="Hayat khan";
    ptr->tname[1]="Atif Ali";
    ptr->tname[2]="pranav";
    printf("%s\t%s\t%s",ptr->tname[0],ptr->tname[1],ptr->tname[2]);

}