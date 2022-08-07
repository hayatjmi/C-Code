#include<stdio.h>
struct student 
{
    char name[20];
    int roll;
    float cgpa;
    /* data */
};
void printinfo(struct student s1);

int main()
{
    struct student s1={"hayat",88004,9.2};
    printinfo(s1);
    

    // struct student *ptr =&s1;
    // printf("\n%d",(*ptr).roll);
    // printf("\n%d",ptr->roll);
}
void printinfo(struct student s1)
{
    printf("\n%s",s1.name);
    printf("\n%d",s1.roll);
    printf("\n%f",s1.cgpa);
}